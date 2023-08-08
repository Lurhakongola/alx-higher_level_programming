#include "lists.h"

/**
 * check_cycle - checks if a linked list contains a cycle
 * @list: linked list to check
 *
 * Return: 1 if the list has a cycle, or 0.
 *
 */
int check_cycle(listint_t *list)
{
	listint_t *current = list;
	listint_t *check = list;

	if (!list)
		return (0);

	while (current && check && check->next)
	{
		current = current->next;
		current = check->next->next;
		if (current == check)
			return (1);
	}

	return (0);
}
