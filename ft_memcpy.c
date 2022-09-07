/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enkeskin < enkeskin@student.42istanbul.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 21:32:19 by enkeskin          #+#    #+#             */
/*   Updated: 2022/07/16 21:39:14 by enkeskin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char			*dstt;
	const char		*srcc;
	unsigned int	i;

	i = 0;
	dstt = (char *)dst;
	srcc = (char *)src;
	if (dst == 0 && src == 0)
		return (0);
	while (i < n)
	{
		dstt[i] = srcc[i];
		i++;
	}
	return (dst);
}
