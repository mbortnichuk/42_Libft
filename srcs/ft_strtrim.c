/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbortnic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/06 18:05:41 by mbortnic          #+#    #+#             */
/*   Updated: 2017/11/13 19:07:08 by mbortnic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

static int	blanks(int n)
{
	if (n == ' ' || n == '\t' || n == '\n')
		return (1);
	return (0);
}

char		*ft_strtrim(char const *s)
{
	int		start;
	int		end;
	char	*string;

	start = 0;
	string = NULL;
	if (!s)
		return (NULL);
	end = (ft_strlen(s)) - 1;
	while (blanks(s[start]) == 1 && s[start] != '\0')
		start++;
	while (blanks(s[end]) == 1 && end > 0)
		end--;
	end++;
	if (start >= end)
		string = ft_strdup("\0");
	else
		string = ft_strsub(s, start, (end - start));
	return (string);
}
