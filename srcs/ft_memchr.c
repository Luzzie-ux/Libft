/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodrpere <rodrpere@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 12:04:20 by rodrpere          #+#    #+#             */
/*   Updated: 2026/04/21 12:21:00 by rodrpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	int	i;
	unsigned const char *p;

	i = 0;
	p = (unsigned const char*)s;
	while (n > 0)
	{
		if (p[i] == c)
		{
			return ((unsigned const char *)&s[i]);
		}
		i++;
	}
	if (c == '\0')
	{
		return (( unsigned const char *)&s[i]);
	}
	return (NULL);
}