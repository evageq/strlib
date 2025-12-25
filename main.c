#include "str.h"
#include <stdio.h>

#include <string.h>
#include <glib.h>

int main()
{
    string_t *str = string_new("aaabb");
    string_t *str2 = string_new("faabz");
    string_insert(str, str2, 1);
    printf("%s", str->buf);


    return 0;
}
