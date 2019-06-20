/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   expandstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yinzhang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/06 19:09:54 by yinzhang          #+#    #+#             */
/*   Updated: 2019/05/06 19:23:54 by yinzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putchar(char c)
{
	write(1, &c, 1);
}

int		ftisblank(char c)
{
	if(c == ' ' || c == '\t')
		return 1;
	return 0;
}

void	expandstr(char *s)
{
	int i;

	i = 0;
	while(s[i])
	{
		while(ftisblank(s[i]))
			i++;
		while(!ftisblank(s[i]) && s[i])
		{
			putchar(s[i]);
			i++;
		}
		if(ftisblank(s[i]) && s[i + 1])
			write(1, "   ", 3);
		i++;
	}
}


int		main(int argc, char **argv)
{
	if (argc == 2)
	{
		expandstr(argv[1]);
	}
	else
		putchar('\n');
}
