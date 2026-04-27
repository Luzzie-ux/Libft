/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodrpere <rodrpere@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 11:43:14 by rodrpere          #+#    #+#             */
/*   Updated: 2026/04/27 16:18:50 by rodrpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
/* {
	char	*new;
	size_t		i;

	i = 0;
	new = (char *)malloc(sizeof(char) * ft_strlen(s));
	if (!new)
		return (NULL);
	while (i <= ft_strlen(s))
	{
		new = (*f)(i, s[i]);
		i++;
	}
	new[i] = 0;
	return (new);
} 

int	main()
{
	char	*s = "hello";
	char *result = ft_strmapi(s, );
} */
