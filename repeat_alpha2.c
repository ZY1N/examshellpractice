/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yinzhang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/27 13:45:52 by yinzhang          #+#    #+#             */
/*   Updated: 2019/03/27 13:52:57 by yinzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int times(char c)
{
	char x;
	int i;
	
	x = 'a';
	i = 0;
	while (x < c)


}

int	main(int argc, char *argv[])
{
	if (argc == 2)
	{
		while(*argv)
		{
			if ((*argv[1] >= 'A' && *argv[1] <= 'Z') || (*argv[1] >= 'a' && *argv[1] <= 'z'))
			{
				times(*argv[1])

			}
			else
				write(1, argv[1], 1);
			argv[1]++;
		}
	}
	write(1, "\n", 1);
}
