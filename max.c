/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yinzhang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/04 14:57:54 by yinzhang          #+#    #+#             */
/*   Updated: 2019/05/04 15:10:04 by yinzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		max(int *tab, unsigned int len)
{
	int max;

	if (!len)
		return (0);
	max = tab[0];
	while (len > 0)
	{
		if(tab[len] > max)
			max = tab[len];
		len--;
	}
	return(max);
}


int		main(int argc, char **argv)
{
	int i = 5;
	int array[5] = {1, 2.0, 3, 7.0, 50.0};

	int x;
	x = max(array, i-1);

	printf("%d", x);
}
