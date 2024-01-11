#ifndef PARSER_H
#define PARSER_H

#include "data.h"

/**
 * \brief Entry point for parser operation.
 *
 * \param result Structure allocated by the caller to store the parse result in
 * \param prompt The contents of the prompt
 */
void parsePrompt(ParserResult_t *result, char *prompt);

#endif
