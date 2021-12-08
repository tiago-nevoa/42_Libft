/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tferreir <tferreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 19:01:49 by tferreir          #+#    #+#             */
/*   Updated: 2021/12/08 19:07:09 by tferreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	return (ft_strncmp(s1, s2, n));
}
/*
int	main(void)
{
	const char	str1[15] = "abcdef";
	const char	str2[15] = "ABCDEF";
	int			ret;

	ret = strncmp(str1, str2, 4);
	if (ret < 0)
	{
		printf("str1 is less than str2");
	}
	else if (ret > 0)
	{
		printf("str2 is less than str1");
	}
	else
	{
		printf("str1 is equal to str2");
	}
	return (0);
}
*/
