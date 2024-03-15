#include <stdlib.h>

/**
 * array_range - Crée un tableau d'entiers contenant une plage de valeurs.
 * @min: La valeur minimale de la plage.
 * @max: La valeur maximale de la plage.
 *
 * Return: Un pointeur vers le tableau d'entiers nouvellement alloué
 *         contenant la plage de valeurs spécifiée, ou NULL en cas d'échec
 *         ou si min est supérieur à max.
 */

int *array_range(int min, int max)
{
	int *arr;
	int i, size;

	if (min > max)
	return (NULL);

	size = max - min + 1;
	arr = malloc(sizeof(int) * size);

	if (arr == NULL)
	return (NULL);

	for (i = 0; i < size; i++)
	arr[i] = min++;

	return (arr);
}
