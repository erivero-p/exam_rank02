typedef struct	s_list
{
	struct s_list *next;
	void		*data;
}				t_list;

int	ft_list_size(t_list *begin_list)
{
	int	i;
	t_list	*ptr;

	if (!begin_list)
		return (0);
	i = 1;
	ptr = begin_list;
	while (ptr->next)
	{
		ptr = ptr->next;
		i++;
	}
	return (i);
}