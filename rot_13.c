/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yinzhang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/03 12:53:31 by yinzhang          #+#    #+#             */
/*   Updated: 2019/05/03 13:11:54 by yinzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int argc, char *argv[])
{
	int i;

	i = 0;
	if (argc == 2)
	{
		while(*argv[1])
		{
			if((*argv[1] >= 'A' && *argv[1] <= 'M') || (*argv[1] >= 'a' && *argv[1] <= 'm'))
				*argv[1] = *argv[1] + 13;
			
			
			else if((*argv[1] > 'M' && *argv[1] <= 'Z') || (*argv[1] > 'm' && *argv[1] <= 'z'))
				*argv[1] = *argv[1] - 13;


			write(1, argv[1], 1);
			argv[1]++;
		}
	
	}
	write(1, "\n", 1);
}