#include <stdlib.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given index
 * @h: double pointer to the head of the list
 * @idx: index where the new node should be added (starts at 0)
 * @n: value to store in the new node
 *
 * Return: address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
    dlistint_t *new_node, *current;
    unsigned int i;

    if (h == NULL)
        return (NULL);

    /* Insert at the beginning */
    if (idx == 0)
        return (add_dnodeint(h, n));

    current = *h;
    for (i = 0; current != NULL && i < idx - 1; i++)
        current = current->next;

    /* Index is out of range */
    if (current == NULL)
        return (NULL);

    /* Insert at the end */
    if (current->next == NULL)
        return (add_dnodeint_end(h, n));

    /* Insert in the middle */
    new_node = malloc(sizeof(dlistint_t));
    if (new_node == NULL)
        return (NULL);

    new_node->n = n;
    new_node->prev = current;
    new_node->next = current->next;

    if (current->next != NULL)
        current->next->prev = new_node;

    current->next = new_node;

    return (new_node);
}
