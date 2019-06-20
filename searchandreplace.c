/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   searchandreplace.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yinzhang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/03 12:37:09 by yinzhang          #+#    #+#             */
/*   Updated: 2019/05/03 12:45:42 by yinzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int argc, char *argv[])
{
	if (argc == 4)
	{
		if(argv[2][1] || argv[2][1])
		{
			write(1, "\n", 1);
			return(0);
		}
		while(*argv[1])
		{
			if(*argv[1] == *argv[2])
				*argv[1] = *argv[3];
			write(1, argv[1], 1);
			argv[1]++;
		}
	}
	write(1, "\n", 1);
}
