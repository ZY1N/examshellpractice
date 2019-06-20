/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_mult.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yinzhang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/06 15:50:09 by yinzhang          #+#    #+#             */
/*   Updated: 2019/05/06 19:09:01 by yinzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>


void	ftputchar(char c)
{
	write(1, &c, 1);
}

int		ftatoi(char *s)
{
	int i;

	i = 0;
	while(*s)
	{
		if(*s >= '0' && *s <= '9')
			i = (i * 10) + (*s - '0');
		s++;
	}
	return(i);
}

void	ftputnbr(int i)
{
	char c;
	if (i > 9)
		ftputnbr(i / 10);
	c = i % 10 + '0';
	ftputchar(c);
}


void	tab_mult(int i)
{
	int x;

	int result;
	char c;
	x = 1;
	while(x <= 9)
	{
		ftputchar((x + 48));
		write(1," x ", 3);
		ftputnbr(i);
		write(1, " = ", 3);

		result = x * i;
		ftputnbr(result);
		write(1, "\n", 1);
		x++;
	}
}

int		main(int argc, char **argv)
{
	int i;
	if(argc == 2)
	{
	i = ftatoi(argv[1]);
	tab_mult(i);
	}
	else
		write(1, "\n", 1);
	return (0);
}
