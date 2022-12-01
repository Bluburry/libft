/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpinto-e <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 19:33:47 by tpinto-e          #+#    #+#             */
/*   Updated: 2022/12/01 21:33:28 by tpinto-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*ptr;

	ptr = (char *) s;
	while (*s)
		s++;
	while (s != ptr)
	{
		if (*s == c)
			return ((char *) s);
		s--;
	}
	if (*s == c)
		return ((char *) s);
	return (NULL);
}
