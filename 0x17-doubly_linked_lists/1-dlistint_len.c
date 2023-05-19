#include "lists.h"
/**
* dlistint_len - function
* @h: pointer to head node of list
*
* Description: function for returning number of elements in a linked list
* Return: Number of elements
*/
size_t dlistint_len(const dlistint_t *h)
{
	int elements = 0;

	while (h != NULL)
	{
		h = h->next;
		elements++;
	}
	return (elements);
}
