/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yinzhang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/25 12:58:20 by yinzhang          #+#    #+#             */
/*   Updated: 2019/05/02 22:46:25 by yinzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(const char *str)
{
	int i;
	int sign;

	i = 0;
	sign = 1;
	while (*str)
	{
		while (*str == '\t' || *str == ' ')
			str++;
		if (*str == '+')
			sign = 1;
		if (*str == '-')
			sign = -1;
		
	if (str >= '1')

	
	
	}

}
