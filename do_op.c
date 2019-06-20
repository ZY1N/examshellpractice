/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yinzhang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/03 23:09:01 by yinzhang          #+#    #+#             */
/*   Updated: 2019/05/03 23:18:09 by yinzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int		main(int argc, char **argv)
{
	int one;
	int two;

	int total;
	total = 0;
	if(argc == 4)
	{
		printf("%s %c %s\n", argv[1], *argv[2], argv[3]);
		one = atoi(argv[1]);
		two = atoi(argv[3]);
		if(*argv[2] == '+')
			printf("%d", (one + two));
		if(*argv[2] == '-')
			printf("%d", (one - two));
		if(*argv[2] == '*')
			printf("%d", (one * two));
		if(*argv[2] == '/')
			printf("%d", (one / two));
		if(*argv[2] == '%')
			printf("%d", (one % two));
	}
}
