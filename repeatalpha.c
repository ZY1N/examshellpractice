/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeatalpha.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yinzhang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/03 09:47:10 by yinzhang          #+#    #+#             */
/*   Updated: 2019/05/03 12:35:22 by yinzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int count(char argv)
{
	int i;

	i = argv - 0;
	return(i);
}



int		main(int argc, char *argv[])
{
	int i;

	if (argc == 2)
	{
		while(*argv[1])
		{
			i = 1;
			if(*argv[1] >= 'A' && *argv[1] <= 'Z') 
				i = count(*argv[1]) - 64;
			else if(*argv[1] >= 'a' && *argv[1] <= 'z')
				i = count(*argv[1]) - 96;

			while(i > 0)
			{
				write(1, argv[1], 1);
				i--;
			}
			argv[1]++;
		}
	}
	write(1, "\n", 1);
}
