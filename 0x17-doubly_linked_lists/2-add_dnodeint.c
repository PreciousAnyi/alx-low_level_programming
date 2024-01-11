#include "lists.h"
/**
 * *add_dnodeint - adds a new node at the beginning
 * of a dlistint_t list.
 * @head: double pointer to head of list
 * @n: data of new list
 *
 * Return: returns new list
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *temp;

	temp = malloc(sizeof(dlistint_t));
	if (temp == NULL)
		return (NULL);
	temp->n = n;
	if (*head != NULL)
	{
		temp->prev = NULL;
		temp->next = *head;
		(*head)->prev = temp;
		*head = temp;
	} else
	{
		temp->prev = NULL;
		temp->next = NULL;
		*head = temp;
	}
	return (temp);
}
