#include <stdlib.h>

int *ft_range(int start, int end)
{
    int *array;
    int size;
    int i;

    if (start <= end)
        size = end - start + 1;
    else
        size = start - end + 1;

    array = (int *)malloc(sizeof(int) * size);
    if (!array)
        return NULL;

    for (i = 0; i < size; i++)
    {
        array[i] = start + i;
        if (start > end)
            array[i] = start - i;
    }

    return array;
}