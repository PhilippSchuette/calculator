#ifndef OPERATIONS_H
#define OPERATIONS_H

#include "data.h"

/**
 * \brief Process the given parse result
 *
 * This is the main api for processing parsing. Subcommands are processed from
 * here.
 *
 * \param result Result containing the quit data to process
 */
void process(ParserResult_t *result);

#endif
