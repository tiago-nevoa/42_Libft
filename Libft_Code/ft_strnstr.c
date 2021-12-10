/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tferreir <tferreir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 18:00:35 by tferreir          #+#    #+#             */
/*   Updated: 2021/12/10 19:43:23 by tferreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	if (!*needle)
		return ((char *)haystack);
	while (haystack[i] && i < len)
	{
		j = 0;
		if (haystack[i] == needle[j])
		{
			while (haystack[i + j] && (i + j) < len)
			{
				if (needle[j] == '\0')
					return ((char *)(haystack + i));
				if (haystack[i + j] != needle[j])
					break ;
				j++;
			}
		}
		i++;
	}
	return (NULL);
}
/*
int	main(void)
{
	const char	haystack[] = "ABC123Abc456Abc789Abc0123";
	const char	needle[] = "";

	printf("Haystack:	%s\nNeedle:		%s\n", haystack, needle);
	printf("ft_strnstr:	%s\n", ft_strnstr(haystack, needle, 15));
	printf("strnstr:	%s", strnstr(haystack, needle, 15));
}
*/
