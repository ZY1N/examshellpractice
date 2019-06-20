/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hidenp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yinzhang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/06 14:47:18 by yinzhang          #+#    #+#             */
/*   Updated: 2019/05/06 15:23:02 by yinzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ftstrlen(char *s)
{
	int i;
	i = 0;
	while(s[i])
		i++;
	return(i);
}


void	hidenp(char *s1, char *s2)
{
	int x;
	int y;

	x = 0;
	y = 0;
	int i;

	i = 0;
	while(s1[x] && s2[y])
	{
		//y = 0;
		while(s2[y])
		{
			if(s2[y] == s1[x])
			{
				break;
				i++;
			}
			y++;
		}
		x++;
	}


	
	int p;
	p = ftstrlen(s1);

	if((x) == p)
		write(1, "1\n", 2);
	else 
		write(1, "0\n", 2);
}

int		main(int argc, char **argv)
{
	if(argc == 3)
	{
		hidenp(argv[1], argv[2]);
	}
	else
		write(1, "\n", 1);
}
