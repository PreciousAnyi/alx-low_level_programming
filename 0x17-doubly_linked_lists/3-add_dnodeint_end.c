#include "lists.h"
/**
 * add_dnodeint_end - adds a new node at the
 * end of a dlistint_t list.
 * @head: double pointer to head of list
 * @n: node data
 *
 * Return: the address of the new element,
 * or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp;
	dlistint_t *ptr;

	temp = malloc(sizeof(dlistint_t));
	if (temp == NULL)
		return (NULL);
	temp->n = n;
	temp->next = NULL;
	if (*head != NULL)
	{
		ptr = *head;
		while (ptr->next != NULL)
			ptr = ptr->next;
		temp->prev = ptr;
		ptr->next = temp;
	} else
	{
		temp->prev = NULL;
		*head = temp;
	}
	return (temp);
}
