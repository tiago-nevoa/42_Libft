/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tferreir <tferreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 19:24:31 by tferreir          #+#    #+#             */
/*   Updated: 2021/11/09 19:49:30 by tferreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c);
int	ft_isdigit(int c);

int	ft_alnum(int c)
{
	if (ft_isalpha(c) == 0 || ft_isdigit(c) == 0)
		return (0);
	return (1);
}
