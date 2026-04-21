/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodrpere <rodrpere@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/16 11:51:02 by rodrpere          #+#    #+#             */
/*   Updated: 2026/04/21 12:23:06 by rodrpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned const char	*ps;
	unsigned char		*pd;

	ps = (unsigned const char *)src;
	pd = (unsigned char *)dest;
	while (n > 0)
	{
		*pd = *ps;
		pd++;
		ps++;
		n--;
	}
	return (dest);
}
