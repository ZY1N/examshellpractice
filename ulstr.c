/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yinzhang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/03 12:46:09 by yinzhang          #+#    #+#             */
/*   Updated: 2019/05/03 12:52:56 by yinzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int argc, char **argv)
{
	int i;

	i = 0;
	if (argc == 2)
	{
		while(argv[1][i])
			i++;
		i = i - 1;
		while(i >= 0)
		{
			write(1, &argv[1][i], 1);
			i--;
		}
	
	}
	write(1, "\n", 1);
}
