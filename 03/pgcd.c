/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yinzhang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/07 02:47:55 by yinzhang          #+#    #+#             */
/*   Updated: 2019/05/07 03:04:00 by yinzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


int		ftatoi(char *s)
{
	int r;

	r = 0;
	while(*s)
	{
		r = r * 10 + (*s - '0');
		s++;
	}
	return (r);
}


void	solve(int small, int big)
{
	int answer;

	answer = small;	
	while (answer >= 1)
	{
		if (big % answer == 0 && small % answer == 0)
			break;
		answer--;
	}
	printf("%d\n", answer);
}


void	pgcd(char *s1, char *s2)
{
	int one;
	int two;

	one = ftatoi(s1);
	two = ftatoi(s2);

	int smaller;
	int greater;

	if(one > two)
	{
		smaller = two;
		greater = one;
		solve(smaller, greater);
	}
	else if(one < two)
	{
		smaller = one;
		greater = two;
		solve(smaller, greater);
	}
	else if(one == two)
	{
		printf("%d", one);
	}
}


int		main(int argc, char **argv)
{
	if(argc == 3)
	{
		pgcd(argv[1], argv[2]);
	}
	else
		write(1, "\n", 1);
}
