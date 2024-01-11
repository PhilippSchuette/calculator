#ifndef LEXER_H
#define LEXER_H

typedef enum {
    LEFT_BRACKET,
    RIGHT_BRACKET,
    OP,
    NUM,
    END,
    UNKNOWN,
} TokenType_t;

typedef struct {
    TokenType_t type;
    char *token;
} LexResult_t;

/**
 * \brief Lex the input
 *
 * Produce exactly one new token starting at the given pointer.
 *
 * \param result User-allocated result struct
 * \param input Starting position which gets increment to the next token
 */
void lex(LexResult_t *result, char **input);

#endif
