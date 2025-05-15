/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yseto < yseto@student.42tokyo.jp Mail>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 14:52:42 by yseto             #+#    #+#             */
/*   Updated: 2025/05/05 20:03:14 by yseto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*temp;

	if (!lst || !f)
		return (NULL);

	new_list = NULL;
	while(lst)
	{
		temp = ft_lstnew(f(lst -> content));
		if(!temp)
		{
			ft_lstclear(&new_list,del);
			return NULL;
		}
		ft_lstadd_back(&new_list,temp);
		lst = lst -> next;
	}

	return new_list;

}
