/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yinzhang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/03 23:37:36 by yinzhang          #+#    #+#             */
/*   Updated: 2019/05/04 14:56:55 by yinzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	 	ftstrlen(char *s)
{
	int i;

	i = 0;
	while(s[i])
		i++;
	return(i);
}


int ispossible(char *s1, char *s2)
{
	int i;
	int n;
	int flag;
	int counter;

	counter = 0;
	i = 0;
	n = 0;
	flag = 0;
	while(s1[i])
	{
		while(s2[n])
		{
			if(s1[i] == s2[n]) 
			{	
				counter++;
				break;
			}
			n++;
		}
		i++;
	}
	int strlen;
	strlen = ftstrlen(s1);
	if (counter == strlen)
		return(1);
	else
		return(0);
}


int		main(int argc, char **argv)
{
	int i;
	if(argc == 3)
	{
		i = ispossible(argv[1], argv[2]);
		while(i == 1 && *argv[1])
			write(1, argv[1]++, 1);
	}
	write(1, "\n", 1);
}
