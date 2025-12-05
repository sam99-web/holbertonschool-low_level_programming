#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 * @head: double pointer to the head of the list
 * @n: value to store in the new node
 *
 * Return: address of the new node, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
    dlistint_t *new_node, *current;

    if (head == NULL)
        return (NULL);

    /* Allocate memory for the new node */
    new_node = malloc(sizeof(dlistint_t));
    if (new_node == NULL)
        return (NULL);

    new_node->n = n;
    new_node->next = NULL;

    /* If the list is empty, the new node becomes the head */
    if (*head == NULL)
    {
        new_node->prev = NULL;
        *head = new_node;
        return (new_node);
    }

    /* Traverse to the last node */
    current = *head;
    while (current->next != NULL)
        current = current->next;

    /* Insert the new node at the end */
    current->next = new_node;
    new_node->prev = current;

    return (new_node);
}
