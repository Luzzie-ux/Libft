/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rodrpere <rodrpere@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 18:30:21 by rodrpere          #+#    #+#             */
/*   Updated: 2026/04/22 11:33:09 by rodrpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*adress;

	if (nmemb == 0 || size == 0)
		return (NULL);
	if (nmemb > (size_t)-1 / size)
		return (NULL);
	adress = (void *)malloc(nmemb * size);
	if (adress == NULL)
		return (NULL);
	ft_memset(adress, 0, nmemb * size);
	return (adress);
}
