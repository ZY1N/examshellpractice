/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yinzhang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/03 15:29:08 by yinzhang          #+#    #+#             */
/*   Updated: 2019/05/03 15:54:18 by yinzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>



int isdouble(char *s, char c, int i)
{
	while (i > 0)
	{
		i--;
		if(s[i] == c)
			return 1;
	}
	return (0);
}



void	inter(char *s1, char *s2)
{
	int i;
	int j;

	i = 0;
	while(s1[i])
	{
		j = 0;
		while(s2[j])
		{
			if(s2[j] == s1[i] && (isdouble(s1, s2[j], i) == 0))
			{
				write(1, &s1[i], 1);
				break;
			}
			j++;
		}
		i++;
	}
}




int		main(int argc, char **argv)
{
	if (argc == 3)
		inter(argv[1], argv[2]);
	write(1, "\n", 1);
}
