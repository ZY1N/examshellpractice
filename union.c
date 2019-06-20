/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yinzhang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/04 19:13:44 by yinzhang          #+#    #+#             */
/*   Updated: 2019/05/04 19:33:41 by yinzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		nodup(char *s, char c, int i)
{
	i--;
	while (i >= 0)
	{
		if (s[i] == c)
			return (0);
		i--;
	}
	return (1);
}


void	unionft(char *s1, char *s2)
{
	int i;

	i = 0;
	while(s1[i])
	{
		if(nodup(s1, s1[i], i))
			write(1, &s1[i], 1);
		i++;
	}

	int n;

	n = 0;
	while(s2[n])
	{
		if(nodup(s2, s2[n], n) && nodup(s1, s2[n], i))
			write(1, &s2[n], 1);
		n++;
	}
}


int		main(int argc, char **argv)
{
	if(argc == 3)
	{
		unionft(argv[1], argv[2]);
	}
	write(1, "\n", 1);
}
