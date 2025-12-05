#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data (n) of a
 *
 * @head: pointer to the head of the list
 *
 * Return: sum of all the data (n) of the list, or 0 if the list is empty
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (!head)
		return (0);

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
