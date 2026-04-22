/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodrpere <rodrpere@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 13:59:00 by rodrpere          #+#    #+#             */
/*   Updated: 2026/04/22 11:19:46 by rodrpere         ###   ########.fr       */
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
/*
#include <stdio.h>
int    main(void)
{
    const char str[] = "Testando testando 123";
    const char to_find[] = "";
    const char str1 [] = "Estudando muito";
    const char to_find1[] = "xyz";
    const char str2[] = "A bee shouldnt be able to fly";
    const char to_find2[] = "bee";

	printf("%s\n", ft_strnstr(str, to_find, 5));
	printf("%s\n", ft_strnstr(str2, to_find2, 5));
	char *result = ft_strnstr(str1, to_find1, 10);
	if (result)
		printf("%s\n", result);
	else
		printf("Not found\n");
}*/
