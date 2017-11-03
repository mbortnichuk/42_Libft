/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbortnic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/25 17:14:32 by mbortnic          #+#    #+#             */
/*   Updated: 2017/11/01 17:03:25 by mbortnic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strstr(const char *haystack, const char *needle)
{
	char *mainstr;
	char *strtofind;

	if (*haystack == '\0' && *needle == '\0')
	{
		return ((char *)haystack);
	}
	while (*haystack)
	{
		mainstr = (char *)haystack;
		strtofind = (char *)needle;
		while ((*haystack) && (*strtofind) && (*haystack == *strtofind))
		{
			haystack++;
			strtofind++;
		}
		if (*strtofind == '\0')
		{
			return (mainstr);
		}
		haystack = mainstr + 1;
	}
	return (0);
}
