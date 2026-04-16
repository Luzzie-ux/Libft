/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodrpere <rodrpere@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/16 11:51:17 by rodrpere          #+#    #+#             */
/*   Updated: 2026/04/16 11:51:18 by rodrpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void*	ft_memset(void* s, int c, size_t n)
{
	unsigned char* p = s;
	while (n > 0)
	{
		*p = c;
		p++;
		n--;
	}
	return (s);
}