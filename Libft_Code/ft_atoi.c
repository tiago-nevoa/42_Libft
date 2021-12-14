/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tferreir <tferreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 16:36:39 by tferreir          #+#    #+#             */
/*   Updated: 2021/12/14 18:52:26 by tferreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	n;
	int	index;

	n = 0;
	index = 0;
	while (*str != '\0')
	{
		if (ft_isdigit(*str))
		{
			n = n * 10 + *str;
			index++;
		}
		str++;
	}
	return (n);
}

int	main(void)
{
	const char	*str = "1234567";
	int			i;

	i = ft_atoi(str);
	printf("str = <%s>;\nft_atoi(str) = <%d>\n", str, i);
	i = atoi(str);
	printf("str = <%s>;\natoi(str) = <%d>", str, i);
}
