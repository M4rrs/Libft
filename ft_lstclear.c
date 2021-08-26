#include "libft.h"

void	ft_lstclear(t_list	**lst, void	(*del)(void*))
{
	t_list	*buf;

	if (!lst)
		return ;
	while (*lst)
	{
		buf = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst =  buf;
	}
}

/*buf kinda stores the next element? and after delete, head pointer moves to
buf aka next element, repeat.*/
