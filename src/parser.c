#include "../include/parser.h"
#include "../include/lexer.h"

#include <stdio.h>
#include <string.h>

#define TRUE 1
#define FALSE 0

typedef int bool_t;

/**
 * @{ \name Private parser functions
 */
/**
 * \brief Private function declarations used internally for parser operation
 */
ParserCommand_t decideCommand(const char *);

int decideData(char *);

bool_t checkShortCommand(const char *, char);
/**
 * @}
 */

void parsePrompt(ParserResult_t *result, char *prompt)
{
    printf("[DEBUG] You entered: %s", prompt);

    result->command = decideCommand(prompt);
    result->data = decideData(prompt);
}

ParserCommand_t decideCommand(const char *line)
{
    if (checkShortCommand(line, 'q'))
        return QUIT;

    if (checkShortCommand(line, 'h'))
        return HELP;

    if (checkShortCommand(line, 'c'))
        return CLEAR;

    return EVAL;
}

int decideData(char *line)
{
    if (checkShortCommand(line, 'q'))
        return -1;

    if (checkShortCommand(line, 'h'))
        return -2;

    if (checkShortCommand(line, 'c'))
        return -3;

    // TODO replace with actual arithmetic processing (lexer, ...)
    LexResult_t lexResult;
    do {
        lex(&lexResult, &line);
        printf("|%s|\n", lexResult.token);
    } while (lexResult.type != END);

    return strlen(line) - 1;
}

bool_t checkShortCommand(const char *toCheck, char shortCommand)
{
    return strlen(toCheck) == 2 && toCheck[0] == shortCommand &&
           toCheck[1] == '\n';
}
