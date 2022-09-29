#include "lists.h"

size_t print_dlistint(const dlistint_t *h);
{
	size_t n = 0;

	if(h==NULL)
		return NULL;

	while(h->prev!=NULL)
		h = h->prev;

	while(h!=NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		n++;
	}
	return n;
}
