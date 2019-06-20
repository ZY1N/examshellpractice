/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hidenp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yinzhang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/07 02:41:28 by yinzhang          #+#    #+#             */
/*   Updated: 2019/05/07 02:47:14 by yinzhang         ###   ########.fr       */
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
	int i;

	i = 0;
	int x;
	x = 0;
	int c;

	c = 0;
	while(s1[i])
	{
		while(s2[x])
		{
			if(s1[i] == s2[x])
			{
				c = c + 1;
				break;
			}
			x++;
		}
		i++;
	}

	int	strlen = ftstrlen(s1);

	if(strlen == c)
		write(1, "1", 1);
	else
		write(1, "0", 1);
}


int		main(int argc, char **argv)
{
	if (argc == 3)
	{
		hidenp(argv[1], argv[2]);
		write(1, "\n", 1);
	}
	else
		write(1, "\n", 1);
}
