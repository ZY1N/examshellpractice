/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ispowerof2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yinzhang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/03 20:56:02 by yinzhang          #+#    #+#             */
/*   Updated: 2019/05/03 21:08:05 by yinzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



int		ispowerof2(unsigned int n)
{
	int total;

	total = 2;
	while (1)
	{
		total = total * 2 ;
		if (total > n)
			return 0;
		if (total == n)
			return 1;
	}

}




int		main(int argc, char **argv)
{
	int x = 1048576;

	printf(ispowerof2(x) ? "True" : "False");
}
