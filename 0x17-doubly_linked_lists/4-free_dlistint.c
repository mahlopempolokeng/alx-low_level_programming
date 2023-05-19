#include "lists.h"
/**
* free_dlistint - function
* @head: pointer to first node of dbl linked list
*
* Decription: function to free a double linked list
* Return: 0 (success)
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temph = head;

	if (head == NULL)
		return;

	while (head->next != NULL)
	{
		temph = head;
		head = head->next;
		free(temph);
	}
	free(head);
}
