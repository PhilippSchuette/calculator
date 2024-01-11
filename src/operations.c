#include "../include/operations.h"

#include <stdio.h>

/**
 * \brief Process help command
 *
 * \param result Result containing the help data to process
 */
void processHelp(ParserResult_t *result);

/**
 * \brief Process quit command
 *
 * \param result Result containing the quit data to process
 */
void processQuit(ParserResult_t *result);

/**
 * \brief Process clear command
 *
 * \param result Result containing the clear data to process
 */
void processClear(ParserResult_t *result);

void process(ParserResult_t *result)
{
    if (result->command == HELP)
        processHelp(result);
    else if (result->command == QUIT)
        processQuit(result);
    else if (result->command == CLEAR)
        processClear(result);
    else
        printf("-> processing generic command data %d...\n", result->data);
}

void processHelp(ParserResult_t *result)
{
    printf("Help requested (data %d):\n", result->data);
    puts("Enter q to quit and h for help.");
}

void processQuit(ParserResult_t *result)
{
    printf("Quitting requested (data %d):\n", result->data);
    puts("Already leaving? See you soon :)");
}

void processClear(ParserResult_t *result)
{
    // TODO implement clearing the screen here!
    puts("Clearing the screen not implemented yet!");
}
