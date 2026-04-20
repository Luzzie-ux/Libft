/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodrpere <rodrpere@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 13:53:36 by rodrpere          #+#    #+#             */
/*   Updated: 2026/04/20 19:52:29 by rodrpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*search;

	i = 0;
	search = NULL;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			search = (char *)&s[i];
		}
		i++;
	}
	if (c == '\0')
	{
		return ((char *)&s[i]);
	}
	return (search);
}
/*#include <stdio.h>
#include <string.h>
int	main(void)
{
	const char *src= "Hello World";
	char	c = 'l';

	printf("src string is: %s\n", src );
	const char *search = ft_strrchr(src, c);
	if (search != NULL)
		printf("Character '%c' found at position: %ld\n", c, search - src);
	else
		printf("Character '%c' not found.\n", c);
	search = strchr(src,c);
	if (search != NULL)
		printf("Character '%c' found at position: %ld\n", c, search - src);
	else
		printf("Character '%c' not found.\n", c);
	return (0);
}*/