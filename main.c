/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodrpere <rodrpere@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/16 11:52:16 by rodrpere          #+#    #+#             */
/*   Updated: 2026/04/18 20:18:09 by rodrpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

static void test_fstrlcpy(void)
{
	char src[6] = "ellif";
    char dst[6] = "souma";
	
	printf("1. strlcpy:\n");
    printf("Before: %s\n", dst);
    ft_strlcpy(dst, src, sizeof(dst));
    printf("After: %s\n", dst);
}

static void test_fstrlcat(void)
{
    char src[6] = "that!";
    char dst[50]= "This and ";

	printf("2. strlcat:\n");
    printf("Before: %s\n", dst);
    ft_strlcat(dst, src, sizeof(dst));
    printf("After: %s\n", dst);
}

static void test_fifis(void)
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

static void test_fisascii(void)
{
	char	input[64];
    int		num;

	printf("4.isascii:\n");
    printf("Choose a number between 0 - 127:");
    fgets(input, sizeof(input), stdin);
    input[strcspn(input, "\n")] = '\0';
    num = atoi(input);

	printf("isascii(%d): %s\n\n", num, ft_isascii(num) ? "true" : "false");
}

static void test_isprint(void)
{
	char	input[64];
	int		num;

	printf("5.isprint:\n");
	printf("Choose a printable characters:\n");
	fgets(input, sizeof(input), stdin);
	input[strcspn(input, "\n")] = '\0';
	num = atoi(input);

	printf("isprint(%d): %s\n\n", num, ft_isprint(num) ? "true": "false");
}

int main(void)
{
	printf("Starting main program...\n");

	test_fstrlcpy();
	test_fstrlcat();
	test_fifis();
	test_fisascii();
	test_isprint();

	return (0);
}
