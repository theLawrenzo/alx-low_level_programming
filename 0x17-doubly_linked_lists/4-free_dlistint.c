#include "lists.h"

/**
 * free_dlistint - Frees a doubly linked lists
 * @head: Head node pointer
 *
 * Return: Nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *curr, *to_free;

	curr = head;
	if (curr == NULL)
		return;

	to_free = curr;
	curr = curr->next;
	free(to_free);
	free_dlistint(curr);
}
