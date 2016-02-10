/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdavin <jdavin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 15:14:57 by jdavin            #+#    #+#             */
/*   Updated: 2015/12/06 17:44:21 by jdavin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*dest;
	int		i;

	i = 0;
	dest = (char *)malloc(sizeof(char) * (ft_strlen(s1) + 1));
	if (dest == NULL)
		return (NULL);
	while (*s1)
	{
		dest[i] = *s1;
		i++;
		s1++;
	}
	dest[i] = '\0';
	return (dest);
}
