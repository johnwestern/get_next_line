/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdavin <jdavin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/29 20:40:33 by jdavin            #+#    #+#             */
/*   Updated: 2015/12/02 12:50:44 by jdavin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(const char *str)
{
	int	neg;
	int	nb;

	neg = 0;
	nb = 0;
	while ((*str == ' ') || (*str == '\n') || (*str == '\t') || \
	(*str == '\r') || (*str == '\f') || (*str == '\v'))
		str++;
	if (*str == '-')
	{
		neg = 2;
		str++;
	}
	if (*str == '+' && *(str - 1) != '-')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		nb *= 10;
		nb += (*str - 48);
		str++;
	}
	if (neg == 2)
		return (-nb);
	return (nb);
}
