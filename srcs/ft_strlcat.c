/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodrpere <rodrpere@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/16 11:51:21 by rodrpere          #+#    #+#             */
/*   Updated: 2026/04/16 11:51:31 by rodrpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat(char* dst, const char* src, size_t dstsize)
{
	size_t dlen = ft_strlen(dst);
	size_t slen = ft_strlen(src);
	size_t i = dlen;

	if(dstsize <= dlen)
        {
                return (dstsize + slen);
        }
	if(dstsize > 0)
	{
		size_t j = 0;
		while(src[j] != '\0' && i < dstsize - 1)
		{
			dst[i] = src[j];
			i++;
			j++;
		}
	}	
	dst[i] = '\0';
	return (dlen + slen);
}
