/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   paramsum.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yinzhang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/05 22:16:47 by yinzhang          #+#    #+#             */
/*   Updated: 2019/05/06 15:44:58 by yinzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int argc, char **argv)
{
	char i;

	char x;
	i = argc - 1 + 48;
	

	i = 17;
	if (i > 10)
	{
		while(i)
		{
			write(1, )
			if (i % 10 > 0)
			{
				x = i % 10 + 48;
				write(1, &x, 1);
			}
			i = i / 10;
		}	
	}
	else
		write(1, &i, 1);
//	printf("%d", i);
}
