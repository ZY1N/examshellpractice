/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alphamirror.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yinzhang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/04 15:11:15 by yinzhang          #+#    #+#             */
/*   Updated: 2019/05/04 15:32:14 by yinzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		alphamirror(char c)
{
	if(c >= 'A' && c <= 'Z')
		c = ('Z' - c + 'A');
	else if (c >= 'a' && c <= 'z')
		c = ('z' - c + 'a');
	return(c);
}





int		main(int argc, char **argv)
{
	int c;

	if (argc == 2)
	{
		while(*argv[1])
		{
			if ((*argv[1] >= 'A' && *argv[1] <= 'Z') || (*argv[1] >= 'a' && *argv[1] <= 'z'))
			{
				c = alphamirror(*argv[1]);
				write(1, &c, 1);
				argv[1]++;
				continue;
			}
			write(1, argv[1], 1);
			argv[1]++;
		}
	
	}
	write(1, "\n", 1);
}
