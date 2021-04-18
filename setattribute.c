/*
** EPITECH PROJECT, 2021
** Attributes
** File description:
** setattribute
*/

#include <stdio.h>
#include <string.h>
#include <assert.h>

struct bar {
    int x;
    int y;
    char c[2];
};

static int yes = 0;

__attribute__((deprecated)) void old_fun(void)
{
    printf("Hello world\n");
}

void new_fun(void); // la fonction new_fun doit appeler old_fun

void call_at_start(void) // la fonction doit s'appeler au tout debut de l'execution de votre programme
{
    printf("starting\n");
}

void call_at_end(void) // la fonction doit s'appeler a la toute fin de l'execution de votre programme
{
    printf("ending\n");
}

void useless_func(int i)
{
}

int main(void)
{
    new_fun();
    useless_func(0);
    assert(10 == sizeof(struct bar));
    return (0);
}