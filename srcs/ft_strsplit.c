/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbortnic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/06 19:00:47 by mbortnic          #+#    #+#             */
/*   Updated: 2017/11/06 20:10:47 by mbortnic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

static int	wordcounter(char const *s, char c)
{
	int c;
	int w;
	int one;

	i = 0;
	w = 0;
	one = 1;
	while (s[i])
	{
		if (s[i] != c && one)
		{
			w++;
			one = 0;
		}
		else if (s[i] == c)
		{
			one = 1;
		}
		i++;
	}
	return (w);
}

static int	wordlength(const char *s, char c, int *start)
{
	int length;

	while (s[*start] == c)
	{
		(*start)++;
	}
	length = 0;
	while (s[*start + length] && s[*start + length] != c)
	{
		length++;
	}
	return (length);
}

char	**ft_strsplit(char const *s, char c)
{
	char **string;
	int i;
	int w;
	int length;

	if (!s)
		return (NULL);
	string = (char **)malloc(sizeof(char *) * wordcounter(s, c) + 1);
	if (!string)
		return (NULL);
	w = 0;
	i = 0;
	while (w < wordcount(s, c))
	{
		length = wordlength(s, c, &i);
		string[w] = ft_strsub(s, i, length);
		i += length;
		w++;
	}
	str[w] = NULL;
	return (string);
}
