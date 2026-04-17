/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodrpere <rodrpere@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/16 11:52:16 by rodrpere          #+#    #+#             */
/*   Updated: 2026/04/17 15:14:52 by rodrpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

int main() {
	printf("Starting main program...\n");

	//var for strlcat
	char src[6] = "that!";
	char dst[50]= "This and ";
	printf("Before strlcat: %s\n", dst);
	ft_strlcat(dst, src, sizeof(dst));
	printf("After strlcat: %s\n", dst);

	//var for strlcpy
	char s2[6] = "ellif";
	char d2[6] = "souma";
	printf("Before strlcpy: %s\n", d2);
	ft_strlcpy(d2, s2, sizeof(d2));
	printf("After strlcpy: %s\n", d2);

	//vars for isalpha, isdigit, alnum
	char	c;
	int		n;
	int		result;
	char	input[64];
	
	//isalpha and alnum
	printf("Choose a letter:");
	fgets(input, sizeof(input), stdin);
	input[strcspn(input, "\n")] = '\0';

	c = input[0];
	result = ft_isalpha(c);
	if (result == 1)
		printf("True char:%d\n", result);
	else{
		printf("Not true char:%d\n", result);
	}

	result = ft_isalnum(c);
	if (result == 1)
		printf("Is AlNum:%d\n", result);
	else{
		printf("Not AlNum:%d\n", result);
	}

	//isdigit and alnum
	printf("Choose a number:");
	fgets(input, sizeof(input), stdin);
	input[strcspn(input, "\n")] = '\0';

	n = input[0];
	result = ft_isdigit(n);
	if (result == 1)
		printf("True Num:%d\n", result);
	else{
		printf("Not Num:%d\n", result);
	}

	result = ft_isalnum(n);
	if (result == 1)
		printf("Is AlNum:%d\n", result);
	else{
		printf("Not AlNum:%d\n", result);
	}

	// var for ascii
	char	i;
	int		k;
	printf("Choose:");
	fgets(input, sizeof(input), stdin);
	input[strcspn(input, "\n")] = '\0';

	i = input[0];
	printf("%d\n", ft_isascii(i));

	k = input[0];
	printf("%d\n", ft_isascii(k));
	return (0);
}
