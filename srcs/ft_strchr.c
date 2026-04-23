/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodrpere <rodrpere@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 13:17:18 by rodrpere          #+#    #+#             */
/*   Updated: 2026/04/23 12:03:25 by rodrpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i++;
	}
	if ((char)c == '\0')
		return ((char *)&s[i]);
	return (NULL);
}
/*#include <stdio.h>
#include <string.h>
int	main(void)
{
	const char *src= "Hello World";
	char	c = 'd';

	printf("src string is: %s\n", src );
	const char *search = ft_strchr(src, c);
	if (search != NULL)
		printf("Character '%c' found at position: %ld\n", c, search - src);
	else
		printf("Character '%c' not found.\n", c);
	return (0);
}*/