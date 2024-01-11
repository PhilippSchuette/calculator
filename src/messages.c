#include "../include/messages.h"

#include <stdio.h>

static const char *STARTDELIMITER = "|---------------------------|";
static const char *ENDDELIMITER = "|------------------|";

void printGreeting(void)
{
    puts("");
    puts(STARTDELIMITER);
    puts("| Welcome to my calculator! |");
    puts("| Enter h for help.         |");
    puts(STARTDELIMITER);
    puts("");
}

void printGoodbye(void)
{
    puts("");
    puts(ENDDELIMITER);
    puts("| Shutting down... |");
    puts(ENDDELIMITER);
    puts("");
}
