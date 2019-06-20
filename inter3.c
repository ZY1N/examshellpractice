/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yinzhang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/03 15:55:27 by yinzhang          #+#    #+#             */
/*   Updated: 2019/05/03 16:02:54 by yinzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int 	isdouble(char *s, char c, int i)
{
	while(i > 0)
	{
		i--;
		if(c == s[i])
			return 1;
	}
	return 0;
}


int		main(int argc, char **argv)
{
	int i;
	int j;

	i = 0;

	if (argc == 3)
	{
		while(argv[1][i])
		{
			j = 0;
			while(argv[2][j])
			{
				if(argv[2][j] == argv[1][i] && (isdouble(argv[1], argv[2][j], i) == 0))
				{
					write(1, &argv[1][i], 1);
					break;
				}
				j++;
			}
		
			i++;
		}
	}
	write(1, "\n", 1);
}
