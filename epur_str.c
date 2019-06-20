/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epur_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yinzhang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/06 13:55:52 by yinzhang          #+#    #+#             */
/*   Updated: 2019/05/06 14:42:18 by yinzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ftisblank(char c)
{
	if(c >= 9 && c <= 13)
		return 1;
	if(c == ' ' || c == '\t')
		return 1;
	return 0;
}


void	epur(char *s)
{
	int i;
	i = 0;

	while(s[i])
	{
		while(s[i] && ftisblank(s[i]))
			i++;
		while(s[i] && !ftisblank(s[i]))
		{
			write(1, &s[i], 1);
			i++;
		}
		//if(s[i + 1])
			write(1, " ", 1);
		i++;
	}
}



int		main(int argc, char **argv)
{
	if(argc == 2)
	{
		epur(argv[1]);
	}
	else
		write(1, "\n", 1);
}
