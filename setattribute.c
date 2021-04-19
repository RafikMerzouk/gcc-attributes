/*
** EPITECH PROJECT, 2021
** Attributes
** File description:
** setattribute
*/

#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <stdlib.h>

struct bar {
    int x;
    int y;
    char c[2];
} __attribute__((packed));

static int yes __attribute__((used)) = 0;

__attribute__((deprecated)) void old_fun(void)
{
    printf("Hello world\n");
}

void __attribute__((alias("old_fun"))) new_fun(void); // la fonction new_fun doit appeler old_fun

void __attribute__((constructor)) call_at_start(void) // la fonction doit s'appeler au tout debut de l'execution de votre programme
{
    printf("starting\n");
}

void __attribute__((destructor)) call_at_end(void) // la fonction doit s'appeler a la toute fin de l'execution de votre programme
{
    printf("ending\n");
}

void useless_func(int i __attribute__((unused)))
{
}

struct bar *retrieve_struct(int *y)
{
    return ((struct bar *) (y - 1));
}

int main(void)
{
    struct bar *test = malloc(sizeof(struct bar));

    test->x = 6;
    test->y = 18;
    struct bar *toto = retrieve_struct(&test->y);
    printf("%p == %p\n", test, toto);
    assert(toto == test);
    new_fun();
    useless_func(0);
    printf("%d\n", *(((int *) test) + 1));
    assert(10 == sizeof(struct bar));
    return (0);
}