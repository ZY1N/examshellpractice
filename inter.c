/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yinzhang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/03 13:23:45 by yinzhang          #+#    #+#             */
/*   Updated: 2019/05/03 16:42:00 by yinzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		isdouble(char *s, char c, int i)
{
	int ret;
	ret = 0;

	while (i > 0)
	{
		i--;
		if (s[i] == c)
			ret = 1;
	}
	return(ret);
}



int		main(int argc, char **argv)
{
	int i;
	int j;

	i = 0;
	j = 0;
	if(argc == 3)
	{
		while(argv[1][i])
		{
			j = 0;
			while(argv[2][j])
			{
				if(argv[1][i] == argv[2][j] && (isdouble(argv[1], argv[2][j], i) == 0))
				{
					write(1, &argv[1][i], 1);
					i++;
				}
				j++;
			}
			i++;
		}
	} 
	write(1, "\n", 1);
}
