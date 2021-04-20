/*
** EPITECH PROJECT, 2021
** Attributes
** File description:
** getattribute
*/

#include <stdio.h>
#include <string.h>

struct data {
    char *name __attribute__((nonstring));
};

int f (struct data *pd, const char *s)
{
  strcpy (pd->name, s);
  return strlen (pd->name);
}

__attribute__ ((format (printf, 1, 2))) void my_printf(char const *format, ...)
{
    printf("%s\n", format);
}

__attribute__ ((nonnull)) void *my_memcpy(void *dest, void *src, int bytes)
{
    for (int i = 0; i < bytes; i += 1)
        ((unsigned char *) dest)[i] = ((unsigned char *) src)[i];
    return (dest);
}

__attribute__ ((warn_unused_result)) int fun(void)
{
    return (2);
}

int getvalue(void)
{
    return (ext);
}

int main(void)
{
    fun();
    int k = 9;
    int v = 0;
    my_memcpy(NULL, NULL, 0);
    printf("%d\n", getvalue());
    my_printf("%d, %d\n", k, v);
}