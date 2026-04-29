/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodrpere <rodrpere@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 17:17:32 by rodrpere          #+#    #+#             */
/*   Updated: 2026/04/29 17:34:56 by rodrpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*cleaner;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		cleaner = (*lst)->next;
		(*del)((*lst)->content);
		free(lst);
		*lst = cleaner;
	}
}
