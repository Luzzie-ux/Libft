/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodrpere <rodrpere@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/16 11:52:16 by rodrpere          #+#    #+#             */
/*   Updated: 2026/04/16 16:37:20 by rodrpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int main() { 
    char src[6] = "that!";
    char dst[50]= "This and ";
    char s2[6] = "ellif";
    char d2[6] = "souma";
    
    printf("Before strlcat: %s\n", dst);
    ft_strlcat(dst, src, sizeof(dst));
    printf("After strlcat: %s\n", dst);

    printf("Before strlcpy: %s\n", d2);
    ft_strlcpy(d2, s2, sizeof(d2));
    printf("After strlcpy: %s\n", d2);

    char    c;
    int     result;

    printf("Choose a letter:");
    scanf("%s", &c);
    result = ft_isalpha(c);
    if (result == 1)
	    printf("True char:%d\n", result);
    else
	    printf("Not true char:%d\n", result);
    return (0);
}
