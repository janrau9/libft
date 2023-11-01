/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jberay <jberay@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 08:07:18 by jberay            #+#    #+#             */
/*   Updated: 2023/11/01 08:07:19 by jberay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	word_count(char const *s, char c);
char	*get_word(char const *s, char c);

char	**ft_split(char const *s, char c)
{
	char	**mptr;
	size_t	i;
	size_t	j;

	if (s == NULL)
		return (NULL);
	mptr = malloc((word_count(s, c) + 1) * sizeof(char *));
	if (!mptr)
		return (0);
	j = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c && s[i])
		{
			mptr[j] = get_word(&s[i], c);
			i = i + ft_strlen(mptr[j]);
			j++;
		}
		else
			i++;
	}
	mptr[j] = 0;
	return (mptr);
}

char	*get_word(char const *s, char c)
{
	size_t	i;
	char	*pword;

	i = 0;
	while ((s[i] != c) && s[i])
		i++;
	pword = malloc(i + 1);
	if (!pword)
		return (0);
	ft_memmove(pword, s, i);
	pword[i] = 0;
	return (pword);
}

size_t	word_count(char const *s, char c)
{
	int		flag;
	size_t	count;
	int		i;

	flag = 0;
	count = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c && flag == 0)
		{
			flag = 1;
			count++;
		}
		else if (s[i] == c && flag == 1)
			flag = 0;
		i++;
	}
	return (count);
}
