#include "../include/cli.h"
#include "../include/messages.h"
#include "../include/operations.h"
#include "../include/parser.h"

#include <stdio.h>
#include <stdlib.h>

/**
 * \brief Process command line arguments
 */
void processCommandLineArgs(int argc, char *argv[]);

/**
 * \brief Run the main loop
 */
void runMainLoop(void);

/**
 * \brief Calculator entry point
 *
 * Spawn a simply REPL session which allows the user to perform simple
 * arithmetics on integer expressions. The main loop lives here.
 */
int main(int argc, char *argv[])
{
    processCommandLineArgs(argc, argv);

    printGreeting();

    runMainLoop();

    printGoodbye();

    return 0;
}

void processCommandLineArgs(int argc, char *argv[])
{
    for (int i = 1; i < argc; i++) {
        printf("unrecognized argument [%s] provided!\n", argv[i]);
    }

    // TODO remove this at some point...!
    if (argc > 1) {
        puts("Command line arguments are currently not supported :(");
        exit(1);
    }
}

void runMainLoop(void)
{
    ParserResult_t parserResult;
    char *prompt = (char *)malloc(BUFFER_LEN * sizeof(char));

    do {
        getPromptContent(&prompt);

        parsePrompt(&parserResult, prompt);

        process(&parserResult);

    } while (parserResult.command != QUIT);

    if (prompt != NULL) {
        free(prompt);
        prompt = NULL;
    }
}
