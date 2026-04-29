/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodrpere <rodrpere@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 16:54:22 by rodrpere          #+#    #+#             */
/*   Updated: 2026/04/29 17:07:51 by rodrpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*walker;

	walker = *lst;
	if (!lst || !new)
		return ;
	if (!*lst)
	{
		lst = new;
		return ;
	}
	while ((**lst).next)
		lst = (**lst).next;
	*walker->next = *new;
}
