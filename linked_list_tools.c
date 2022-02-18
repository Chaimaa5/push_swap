#include "push_swap.h"

t_stack		*ft_lstnew(int content)
{
	t_stack		*new;

	if (!(new = (t_stack *)malloc(sizeof(t_stack) * 1)))
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}

int		ft_lstsize(t_stack *lst)
{
	int		i;

	i = 0;
	if (lst)
	{
		while (lst)
		{
			lst = lst->next;
			i++;
		}
	}
	return (i);
}

t_stack	*ft_lstlast(t_stack *lst)
{
	if (!lst)
		return (lst);
	while (lst->next)
		lst = lst->next;
	return (lst);
}

void	ft_lstadd_back(t_stack **alst, t_stack *new)
{
	new->next = NULL;
	if (!(*alst))
		*alst = new;
	else
		ft_lstlast(*alst)->next = new;
}

void	ft_lstadd_front(t_stack **alst, t_stack *new)
{
	new->next = *alst;
	*alst = new;
}
