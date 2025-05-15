/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yseto < yseto@student.42tokyo.jp Mail>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 20:59:39 by yseto             #+#    #+#             */
/*   Updated: 2025/05/01 19:49:50 by yseto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	count_words(char const *s, char c)
{
	int	count;
	int	in_word;
	int	i;

	in_word = 0;
	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] != c && !in_word)
		{
			count++;
			in_word = 1;
		}
		else if (s[i] == c)
			in_word = 0;
		i++;
	}
	return (count);
}

static void	ft_split2(char **result, char const *s, char c)
{
	int	i;
	int	word_len;
	int	j;
	int	start;

	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		start = i;
		while (s[i] && s[i] != c)
			i++;
		word_len = i - start;
		if (word_len > 0)
		{
			result[j] = (char *)malloc(sizeof(char) * (word_len + 1));
			if (!result[j])
				return ;
			j++;
		}
	}
	result[j] = NULL;
	return ;
}

static void	ft_split3(char **result, char const *s, char c)
{
	int	i;
	int	j;
	int	k;
	int	start;

	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		start = i;
		while (s[i] && s[i] != c)
			i++;
		if (start < i)
		{
			k = 0;
			while (start < i)
				result[j][k++] = s[start++];
			result[j][k] = '\0';
			j++;
		}
	}
	result[j] = NULL;
	return ;
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		word_count;

	if (!s)
		return (NULL);
	word_count = count_words(s, c);
	result = (char **)malloc(sizeof(char *) * (word_count + 1));
	if (!result)
		return (NULL);
	result[word_count] = NULL;
	ft_split2(result, s, c);
	ft_split3(result, s, c);
	return (result);
}

// int	main(void)
// {
// 	char	**result;
// 	int		i;

// 	result = ft_split("I have a cat", ' ');
// 	i = 0;
// 	while (result[i])
// 	{
// 		printf("Word %d: %s\n", i, result[i]);
// 		free(result[i]);
// 		i++;
// 	}
// 	free(result);
// 	return (0);
// }
