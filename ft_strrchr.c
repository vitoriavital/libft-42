/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavitori <mavitori@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 15:00:42 by mavitori          #+#    #+#             */
/*   Updated: 2023/10/19 18:44:52 by mavitori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*ptr;

	i = 0;
	ptr = 0;
	c = c % 256;
	if (c >= 0 && c <= 127)
	{
		while (s[i])
		{
			if (s[i] == c)
				ptr = (char *)&s[i];
			i++;
		}
		if ((c == '\0') && ptr == 0)
			ptr = (char *)&s[i];
	}
	return (ptr);
}
