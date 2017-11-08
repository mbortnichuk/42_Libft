/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbortnic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 16:23:34 by mbortnic          #+#    #+#             */
/*   Updated: 2017/11/08 18:35:44 by mbortnic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
 
#include <libft.h>

char	**ft_strsplit(char const *s, char c)
{
	int i; //counter **string arr
	int j; //counter *s arr
	int w; //counter for characters int **string
	char **string;

	if (!s || !(string = (char**)malloc(sizeof(string) * ft_wordcount(s, c) + 1)))
		return (NULL);
	j = 0;
	i = 0;
	while (++i < ft_wordcount(s, c))
	{
		w = 0;
		if (!(string = ft_strnew(ft_wordlength(&s[j]) + 1)))
			return (NULL);
		while (s[j] == c)
			j++;
		while (s[j] != c & s[j])
			string[i][w++] = s[j++];
		string[i][w] = '\0';
	}
//	string[i] = 0;
	return (string);
}
