/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tferreir <tferreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 20:58:02 by tferreir          #+#    #+#             */
/*   Updated: 2021/11/30 16:53:01 by tferreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	char		*d;
	const char	*s;

	d = dst;
	s = src;
	while (n-- > 0)
		*d++ = *s++;
	return (dst);
}
/*
int	main(void)
{
	const char	src[50] = "0123456789";
	char		dst[50] = "9876543210";

	printf("Before memcpy dest = %s\n", dst);
	printf("After memcpy dest = %s\n", memcpy(dst, src, 5));
	return (0);
}
*/
