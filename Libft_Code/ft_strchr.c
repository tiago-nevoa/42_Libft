/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tferreir <tferreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 17:54:25 by tferreir          #+#    #+#             */
/*   Updated: 2021/12/07 12:31:14 by tferreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			return ((char *)(s + i));
		i++;
	}
	if (c == '\0')
		return ((char *)(s + i));
	return (NULL);
}
/*
int	main(void)
{
	const char	src[20] = "0123456789";

	printf("Before strchr dest = %s\n", src);
	printf("After ft_strchr dest = %s\n", ft_strchr(src, '0'));
	printf("After strchr dest = %s\n", strchr(src, '0'));
	return (0);
}
*/
