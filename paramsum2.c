/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   paramsum2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yinzhang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/06 12:54:33 by yinzhang          #+#    #+#             */
/*   Updated: 2019/05/06 13:12:05 by yinzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	paramsum(int i)
{
	int c;
	
	if(i > 9)
	{
		paramsum(i/10);
	}
	c = i % 10 - 0 + 48; 
	write(1, &c, 1);
}


int		main(int argc, char **argv)
{
	if(argc > 1)
	{
		paramsum(argc - 1);
		write(1, "\n", 1);
	}
	else
		write(1, "\n", 1);
}
