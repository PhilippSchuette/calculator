#include "../include/lexer.h"

#include <stdlib.h>

void lex(LexResult_t *result, char **input)
{
    // skip leading whitespace
    while (**input == ' ') {
        (*input)++;
    }

    if (**input == '\n') {
        (*input)++;
        result->type = END;
        result->token = " ";
        return;
    }
    // TODO do actual lexing - single char lexing for now!
    result->type = UNKNOWN;
    result->token = (char *)malloc(2 * sizeof(char));

    result->token[0] = **input;
    (*input)++;
    result->token[1] = '\0';
}
