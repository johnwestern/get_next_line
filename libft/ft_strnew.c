/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdavin <jdavin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 23:46:13 by jdavin            #+#    #+#             */
/*   Updated: 2015/12/08 16:29:43 by jdavin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*nw;
	size_t	i;

	i = 0;
	nw = (char *)malloc(sizeof(char) * (size + 1));
	if (nw == NULL)
		return (NULL);
	while (i <= size)
	{
		nw[i] = '\0';
		i++;
	}
	return (nw);
}
