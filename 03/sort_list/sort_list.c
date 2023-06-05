#include "list.h"
#include <unistd.h>

t_list	*sort_list(t_list *lst, int (*cmp)(int, int))
{
	int		aux;
	t_list	*ptr;

	ptr = lst;
	while (lst->next)
	{
		if ((*cmp)(lst->data, lst->next->data) == 0)
		{
			aux = lst->data;
			lst->data = lst->next->data;
			lst->next->data = aux;
			lst = ptr;
		}
		else
			lst = lst->next;
	}
	lst = ptr;
	return (lst);
}