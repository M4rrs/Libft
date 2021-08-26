#include "libft.h"

void	ft_lstadd_front(t_list	**lst, t_list	*new)
{
	new->next = *lst;
	*lst = new;
}

//Links the new node to the lst node.
//Changes the head pointer bcs new node is now at the beginning.
