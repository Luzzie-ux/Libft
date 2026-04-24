/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodrpere <rodrpere@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 13:59:00 by rodrpere          #+#    #+#             */
/*   Updated: 2026/04/24 16:00:05 by rodrpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (little[0] == '\0')
		return ((char *)big);
	else if (len > 0)
	{
		while (i < len && big[i] != '\0')
		{
			j = 0;
			while (big[i + j] != '\0' && little[j] != '\0'
				&& big[i + j] == little[j])
			{
				j++;
			}
			if (little[j] == '\0')
				return ((char *)&big[i]);
			i++;
		}
	}
	return (NULL);
}
