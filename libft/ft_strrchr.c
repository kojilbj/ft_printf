/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kojwatan < kojwatan@student.42tokyo.jp>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 17:46:03 by kojwatan          #+#    #+#             */
/*   Updated: 2023/10/01 14:24:27 by kojwatan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned char	*str;
	unsigned char	*ans;
	unsigned char	i;

	i = c;
	str = (unsigned char *)s;
	ans = 0;
	while (*str)
	{
		if (*str == i)
			ans = str;
		str++;
	}
	if (c == 0)
		return ((char *)(str));
	return ((char *)(ans));
}
