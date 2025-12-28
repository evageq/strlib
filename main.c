#include "str.h"
#include <stdio.h>

#include <string.h>

int main()
{

    string_t *str = string_new("Hello world, !");
    string_t **str_split = string_split(str, ' ');
    for (size_t i = 0; str_split[i] != NULL; ++i)
    {
        printf("%s\n", str_split[i]->buf);
    }

    string_split_free(str_split);

    return 0;
}
