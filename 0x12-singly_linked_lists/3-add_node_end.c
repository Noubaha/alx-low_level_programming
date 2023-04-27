#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node_end - Adds a new node at the end of a list
 * @head: The original linked list
 * @str: The string to add to the node
 *
 * Return: The address of the new list or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
    list_t *new_node, *temp_node;

    if (str == NULL || head == NULL)
        return (NULL);

    new_node = malloc(sizeof(list_t));
    if (new_node == NULL)
        return (NULL);

    new_node->str = strdup(str);
    if (new_node->str == NULL)
    {
        free(new_node);
        return (NULL);
    }

    new_node->len = strlen(str);
    new_node->next = NULL;

    if (*head == NULL)
    {
        *head = new_node;
        return (*head);
    }

    temp_node = *head;
    while (temp_node->next != NULL)
        temp_node = temp_node->next;

    temp_node->next = new_node;
    return (temp_node->next);
}


/**
 * my_strlen - Returns the length of a string
 * @s: String to count
 *
 * Return: String length
 */
int my_strlen(const char *s)
{
    int len = 0;

    while (*s != '\0') {
        len++;
        s++;
    }

    return len;
}
