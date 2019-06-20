/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yinzhang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/06 12:32:19 by yinzhang          #+#    #+#             */
/*   Updated: 2019/05/06 12:53:28 by yinzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
void	pgcd(int x, int y)
{
	int smaller;
	int bigger;

	if(x > y)
	{
		bigger = x;
		smaller = y;
	}	
	else if(x < y)
	{
		bigger = y;
		smaller = x;
	}
	else if(x == y)
	{
		write(1, "\n", 1);
		printf("%d", x);
	}
	int least;
	least = smaller;

	while(least > 0)
	{
		if(bigger % least == 0 && smaller % least == 0)
		{
			printf("%d\n", least);
			break;
		}
		least--;
	}
}


int		main(int argc, char **argv)
{
	int x;
	int y;

	if(argc == 3)
	{
		x = atoi(argv[1]);
		y = atoi(argv[2]);
		pgcd(x, y);
	}
	else
		write(1, "\n", 1);
}
