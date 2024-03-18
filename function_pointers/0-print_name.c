#include "function_pointers.h"

/**
 * print_name - Imprime un nom en utilisant une fonction de format spécifique.
 * @name: Le nom à imprimer.
 * @f: Un pointeur vers une fonction d'impression spécifique.
 */

void print_name(char *name, void (*f)(char *))
{
    f(name);
}
