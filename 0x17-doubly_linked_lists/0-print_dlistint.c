#include "lists.h"

size_t print_dlistint(const dlistint_t *h);
	size_t n = 0;

	if(h==NULL)
		return NULL;
	while(h!=NULL)
	{
		printf("i\n", h->n);
		h = h->next;
		h = h->prev;
		n++;
	}
	return n;
