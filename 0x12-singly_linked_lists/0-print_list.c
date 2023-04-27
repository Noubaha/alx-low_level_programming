#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - Prints all elements of a linked list
 * @list: A pointer to the head of the linked list
 *
 * Return: The number of nodes in the list
 */
size_t print_list(const list_t *list)
{
    size_t count = 0;
    const list_t *node = list;

    while (node != NULL)
    {
        if (node->str == NULL)
            printf("[0] (nil)\n");
        else
            printf("[%d] %s\n", node->len, node->str);

        node = node->next;
        count++;
    }

    return count;
}

