#ifndef DATA_H
#define DATA_H

/**
 * \brief High-level operating modes recognized by the parser.
 */
typedef enum {
    QUIT,
    HELP,
    CLEAR,
    EVAL,
} ParserCommand_t;

/**
 * \brief Result returned by the parser.
 */
typedef struct {
    /**
     * \brief The parsed command mode
     */
    ParserCommand_t command;
    /**
     * \brief The parsed data to be processed with the command
     */
    int data;
} ParserResult_t;

#endif
