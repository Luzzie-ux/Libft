/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodrpere <rodrpere@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/16 11:52:16 by rodrpere          #+#    #+#             */
/*   Updated: 2026/04/20 13:06:06 by rodrpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

static void	test_fstrlcpy(void)
{
	char src[6] = "ellif";
	char dst[6] = "souma";
	
	printf("1. strlcpy:\n");
	printf("Before: %s\n", dst);
	ft_strlcpy(dst, src, sizeof(dst));
	printf("After: %s\n\n", dst);
}

static void	test_fstrlcat(void)
{
	char src[6] = "that!";
	char dst[50]= "This and ";

	printf("2. strlcat:\n");
	printf("Before: %s\n", dst);
	ft_strlcat(dst, src, sizeof(dst));
	printf("After: %s\n\n", dst);
}

static void	test_fifis(void)
{
	char	input[64];
	char	c;

	printf("3. isalpha / isdigit / isalnum:\n");
	printf("Choose a character: ");
	fgets(input, sizeof(input), stdin);
	input[strcspn(input, "\n")] = '\0';
	c = input[0];

	printf("isalpha('%c'): %s\n", c, ft_isalpha(c) ? "true" : "false");
	printf("isdigit('%c'): %s\n", c, ft_isdigit(c) ? "true" : "false");
	printf("isalnum('%c'): %s\n\n", c, ft_isalnum(c) ? "true" : "false");
}

static void	test_fASCII(void)
{
	char	input;
	int		num;

	printf("4.isascii & isprint:\n");
	printf("Choose an ascii character:\n");
	scanf("%c", &input);

	num = (int) input;
	printf("is it ascii(%d): %s\n\n", num, ft_isascii(num) ? "true" : "false");
	printf("is it print(%d): %s\n", num, ft_isprint(num) ? "true": "false");
}

static void	test_fccase()
{
	char	input;
	int		num;

	printf("5.tolower & toupper:\n");
	printf("Choose an character:\n");
	scanf("%c", &input);

	num = (int)input;
	printf("lowercase of (%c) is: %c\n",num, ft_tolower(num));
	printf("uppercase of (%c) is: %c\n",num, ft_toupper(num));
}

int	main(void)
{
	int	option;
	int ch;
	printf("Starting main program...\n");
	printf("select an option:\n1. strlcpy.\n2. strlcat.\n3. isalpha / isdigit / isalnum.\n4. isascii & isprint.\n5. tolower & toupper.\n");
	scanf("%d", &option);
	while ((ch = getchar()) != '\n' && ch != EOF)
    	continue;
	switch (option)
	{
		case 1:
			test_fstrlcpy();
			break;
		case 2:
			test_fstrlcat();
			break;
		case 3:
			test_fifis();
			break;
		case 4:
			test_fASCII();
			break;
		case 5:
			test_fccase();
			break;
		default:
			printf("Error: Select a valid option\n");
	}
	return (printf("\nYou have reached the end of the program\nExiting..."));;
}
