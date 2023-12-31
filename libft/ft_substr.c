/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jberay <jberay@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 16:53:43 by jberay            #+#    #+#             */
/*   Updated: 2023/11/01 16:53:45 by jberay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	size_t	slen;
	size_t	memlen;

	if (s == NULL)
		return (NULL);
	slen = ft_strlen(s);
	if (slen < len)
		memlen = slen;
	else
		memlen = len;
	ptr = malloc(memlen +1);
	if (ptr == NULL)
		return (NULL);
	if ((size_t)start >= slen)
	{
		ptr[0] = '\0';
		return (ptr);
	}
	ft_memcpy(ptr, &s[start], memlen);
	ptr[memlen] = 0;
	return (ptr);
}
