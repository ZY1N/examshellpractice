/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yinzhang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/25 10:43:30 by yinzhang          #+#    #+#             */
/*   Updated: 2019/03/25 11:01:51 by yinzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*
int	main(int argc, char *argv[])
{
	int i = 0;

	if (argc == 2)
	{
		while (argv[1][i])
		{
			if ((argv[1][i] >= 'A' && argv[1][i] <= 'Y') || (argv[1][i] >= 'a' && argv[1][i] <= 'y'))
			   argv[1][i] = argv[1][i] + 1;
			else if (argv[1][i] == 'Z' || argv[1][i] == 'z')	
				argv[1][i] = argv[1][i] - 25;
			write(1 ,&argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}
*/



void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	rotone(char *s)
{
	while (*s)
	{
		if ((*s >= 'A' && *s <= 'Y') || (*s >= 'a' && *s <= 'y'))
			ft_putchar(*s + 1);
		else if (*s == 'z' || *s == 'Z')
			ft_putchar(*s - 25);
		else
			ft_putchar(*s);
		s++;
	}
}


int		main(int ac, char **av)
{
	if (ac == 2)
		rotone(av[1]);
	ft_putchar('\n');
	return (0);
}
