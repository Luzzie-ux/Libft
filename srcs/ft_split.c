/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodrpere <rodrpere@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 09:28:10 by rodrpere          #+#    #+#             */
/*   Updated: 2026/04/24 09:28:14 by rodrpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_word(const char *str, char delimiter)
{
	size_t	counter;
	int		i;

	i = 0;
	counter = 0;
	while (str[i])
	{
		while (str[i] == delimiter)
			i++;
		if (str[i] != '\0')
		{
			counter++;
			while (str[i] && str[i] != delimiter)
				i++;
		}
	}
	return (counter);
}

static char	*alloc(const char *s, int start, int end)
{
	int		i;
	char	*sword;

	i = 0;
	sword = malloc((end - start + 1) * sizeof(char));
	if (!sword)
		return (NULL);
	while (end > start)
	{
		sword[i] = s[start];
		i++;
		start++;
	}
	sword[i] = 0;
	return (sword);
}

static char	**mclean(char **string)
{
	int	i;

	i = 0;
	while (string[i])
	{
		free(string[i]);
		i++;
	}
	free(string);
	return (NULL);
}

static char	**ft(const char *s, char c, int i, int j, int start, char **result)
{
	while (s[i])
	{
		if (s[i] != c && start < 0)
			start = i;
		else if (s[i] == c && start >= 0)
		{
			result[j] = alloc(s, start, i);
			if (!(result[j]))
				return (mclean(result));
			start = -1;
			j++;
		}
		i++;
	}
	if (start >= 0)
	{
		result[j] = alloc(s, start, i);
		if (!(result[j - 1]))
			return (mclean(result));
		j++;
	}
	result[j] = NULL;
	return (result);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		start;
	char	**result;

	i = 0;
	j = 0;
	start = -1;
	result = ft_calloc(count_word(s, c) + 1, sizeof(char *));
	if (!result)
		return (NULL);
	ft(s, c, i, j, start, result);
	return (result);
}
/*int	main(void)
{
	char **res;
	int i;

	res = ft_split("hello world 42", ' ');
	if (!res)
		return (1);

	i = 0;
	while (res[i])
	{
		printf("%s\n", res[i]);
		i++;
	}
	return (0);
}*/