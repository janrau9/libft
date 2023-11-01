/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jberay <jberay@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 08:02:35 by jberay            #+#    #+#             */
/*   Updated: 2023/11/01 08:02:51 by jberay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dlen;
	size_t	slen;
	size_t	i;

	i = 0;
	slen = ft_strlen(src);
	if (dstsize == 0 && !dst)
		return (slen);
	dlen = ft_strlen(dst);
	if (dstsize <= dlen)
		return (dstsize + slen);
	while (src[i] != 0 && i < dstsize - dlen -1)
	{
		dst[dlen + i] = src[i];
		i++;
	}
	dst[dlen + i] = 0;
	return (dlen + slen); 
}
