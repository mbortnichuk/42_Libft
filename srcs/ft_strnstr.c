/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbortnic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/26 20:59:19 by mbortnic          #+#    #+#             */
/*   Updated: 2017/10/30 10:06:57 by mbortnic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t i;

	i = 0;
	if (*needle == '\0')
	{
		return ((char *)haystack);
	}
	while (*haystack && len)
	{
		if (*haystack == needle[i])
		{
			i++;
		}
		else
		{
			i = 0;
		}
		if (needle[i] == '\0')
		{
			return ((char *)(haystack - i + 1));
		}
		haystack++;
		len--;
	}
	return (NULL);
}
