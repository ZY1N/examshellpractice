/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yinzhang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/25 10:06:51 by yinzhang          #+#    #+#             */
/*   Updated: 2019/03/27 13:53:53 by yinzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int 	times(char c)
{
	int a;

	a = 0;
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		if (c >= 'A' && c <= 'Z')
			a = c - 'A' + 1;
		if (c >= 'a' && c <= 'z')
			a = c - 'a' + 1;
	}
	else 
		a = 1;
	return(a);
}

int		main(int argc, char *argv[])
{
	int i;
	int x;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i])
		{
			x = times(argv[1][i]);
			while (x > 0)
			{
				write(1, &argv[1][i], 1);
				x--;
			}
			i++;
		}
	}
	write(1, "\n", 1);
}

int		main(int argc, char *argv[])
{
	int repeat;

	if (argc == 2)
	{
		while (*argv[1])
		{
			repeat = times(*argv[1]);
			while (repeat--)
				write(1, argv[1], 1);
			argv[1]++;
		}
	}
	write (1, '\n', 1)
}
