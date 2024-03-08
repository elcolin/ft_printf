/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecolin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 15:54:50 by ecolin            #+#    #+#             */
/*   Updated: 2021/12/21 00:07:04 by ecolin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;

	i = 0;
	if (!*s || c < 0)
		return (0);
	while (i <= ft_strlen(s))
	{
		if (s[i] == (char) c)
			return ((char *) &s[i]);
		i++;
	}
	return (0);
}
