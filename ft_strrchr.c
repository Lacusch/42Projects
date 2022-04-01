/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaszlo- <slaszlo-@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 11:17:34 by slaszlo-          #+#    #+#             */
/*   Updated: 2022/04/01 15:29:46 by slaszlo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;

	i = ft_strlen (s);
	while (i >= 0)
	{
		if (s[i] == (char) c)
		{
			return ((char *)&s[i]);
		}
	i--;
	}
	return (NULL);
}

