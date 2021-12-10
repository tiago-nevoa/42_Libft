/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tferreir <tferreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 20:08:18 by tferreir          #+#    #+#             */
/*   Updated: 2021/12/10 20:58:13 by tferreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dstlen;
	size_t	srclen;
	size_t	size;

	dstlen = ft_strlen(dst);
	srclen = ft_strlen(src);
	size = dstsize;
	if (dstlen == size)
		return (srclen + size);
	size += dstlen;
	while (src && size > 1)
	{
		dst[dstlen++] = *src++;
		size--;
	}
	dst[dstlen] = '\0';
	return (dstlen);
}
