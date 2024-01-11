#include "../include/cli.h"

#include <stdio.h>
#include <stdlib.h>

/* public api of this translation unit */
void getPromptContent(char **line)
{
    size_t success;
    size_t length = BUFFER_LEN;

    printf(">>> ");

    success = getline(line, &length, stdin);

    if (success == -1) {
        printf("Error while retrieving prompt content - aborting!\n");
        free(*line);
        exit(1);
    }
}
