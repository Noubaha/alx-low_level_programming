#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len - Counts the number of nodes in a linked list
 * @list: A pointer to the head of the linked list
 *
 * Return: The number of nodes in the list
 */
size_t list_len(const list_t *list)
{
    size_t count = 0;
    const list_t *node = list;

    while (node)
    {
        node = node->next;
        count++;
    }

    return count;
}
