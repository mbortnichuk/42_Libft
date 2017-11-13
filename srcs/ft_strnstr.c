/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbortnic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/26 20:59:19 by mbortnic          #+#    #+#             */
/*   Updated: 2017/11/13 18:53:23 by mbortnic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strnstr(const char *big, const char *lit, size_t len)
{
	size_t i;

	i = 0;
	if (*lit == '\0')
	{
		return ((char *)big);
	}
	while (*big && len)
	{
		if (*big == lit[i])
		{
			i++;
		}
		else
		{
			i = 0;
		}
		if (lit[i] == '\0')
		{
			return ((char *)(big - i + 1));
		}
		big++;
		len--;
	}
	return (NULL);
}
