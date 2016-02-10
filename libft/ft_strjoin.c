/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdavin <jdavin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 14:40:38 by jdavin            #+#    #+#             */
/*   Updated: 2015/12/06 18:52:50 by jdavin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*tmp;
	int		i;

	i = 0;
	tmp = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2)));
	if (tmp == NULL)
		return (NULL);
	while (*s1 != '\0')
	{
		tmp[i] = *(char *)s1;
		s1++;
		i++;
	}
	while (*s2 != '\0')
	{
		tmp[i] = *(char *)s2;
		s2++;
		i++;
	}
	tmp[i] = '\0';
	return (tmp);
}
