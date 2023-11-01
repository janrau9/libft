/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jberay <jberay@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 11:33:24 by jberay            #+#    #+#             */
/*   Updated: 2023/10/27 09:02:44 by jberay           ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <unistd.h>
#include "libft.h"

void	printarr(void *arr, int n);

int	main(void)
{
	int	c;

	c = 'A';

	printf("isalpha :%d \n", isalpha(c));
	printf("ft :%d \n", ft_isalpha(c));

	printf("isdigit :%d \n", isdigit(c));
	printf("ft :%d \n", ft_isdigit(c));

	printf("isalnum :%d \n", isalnum(c));
	printf("ft :%d \n", ft_isalnum(c));

	printf("isascii :%d \n", isascii(c));
	printf("ft :%d \n", ft_isascii(c));

	printf("isprint :%d \n", isprint(c));
	printf("ft :%d \n", ft_isprint(c));

	const char	src[] = "again";
	printf("strlen :%lu \n", strlen(src));
	printf("ft :%lu \n", ft_strlen(src));

	printf("toupper :%d \n", toupper(c));
	printf("ft :%d \n", ft_toupper(c));

	printf("tolower :%d \n", tolower(c));
	printf("ft :%d \n", ft_tolower(c));
	
	char	dst[5] = "living on a prayer";
	printf("strlcpy :%lu \n", strlcpy(dst,src,3));
	printf("ft :%lu \n", ft_strlcpy(dst,src,3));
	
	printf("strlcat :%lu \n", strlcat(dst,src,5));
	printf("ft :%lu \n", ft_strlcat(dst,src,5));
	printf("dst: %s \n", dst);
	printf("src: %s \n", src);

//	int str[10];
	char	str[] = "we are half way";

	printf("memset : %s \n", (unsigned char*)(memset(str, 42, 10)));
	memset(str, 42, 10);
	puts(str);
	ft_memset(str, 42, 10);
	puts(str);
	printarr(str, 10);
	printf("\n");

	bzero(str, 10);
	puts(str);
	printf("bzero: %s \n", str);
	ft_bzero(str, 10);
	puts(str);

	memcpy(dst, src, 5);
	puts(dst);
	ft_memcpy(dst, src, 5);
	puts(dst);

	memmove(dst, src, 5)
	puts(dst);
	
	

}

void	printarr(void *arr, int n)
{
	int	i = 0;

	while (i < n)
	{
		write(1, &arr[i], 1);
		i++;
	}
}
