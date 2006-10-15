#include <readline/readline.h>
#include <readline/history.h>

char *getline(void)
{
    char *line = readline(NULL);
    if (line && *line) add_history(line);
    return line;
}
