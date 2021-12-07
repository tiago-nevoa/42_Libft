/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tferreir <tferreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 20:10:21 by tferreir          #+#    #+#             */
/*   Updated: 2021/12/02 16:26:21 by tferreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c += - 'a' + 'A';
	return (c);
}
/*
int	main(void)
{
	char	c;

	c = 0;
	while (c <= 126)
	{
		printf("c = %c --> %c\n", c, ft_toupper(c));
		c++;
	}
}
*/