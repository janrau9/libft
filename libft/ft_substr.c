/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jberay <jberay@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 08:06:15 by jberay            #+#    #+#             */
/*   Updated: 2023/11/01 13:11:24 by jberay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	size_t	slen;

	if (s == NULL)
		return (NULL);
	ptr = malloc(len + 1);
	if (!ptr)
		return (NULL);
	slen = ft_strlen(s);
	if ((size_t)start >= slen)
	{
		ptr[0] = '\0';
		return (ptr);
	}
	if (!(slen - start < len))
		ft_memcpy(ptr, &s[start], len);
	if (slen - start < len)
	{
		ft_memcpy(ptr, &s[start], slen - start);
		ft_bzero((void *)&ptr[slen - start], len - slen - start);
	}
	ptr[len] = 0;
	return (ptr);
}
