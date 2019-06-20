/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   itoabase.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yinzhang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/09 13:39:50 by yinzhang          #+#    #+#             */
/*   Updated: 2019/05/09 13:47:26 by yinzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


char	*ft_itoa(int nbr)
{
	int i;
	int neg;
	char *tmp;

	i = 0;
	neg = 0;
	tmp = malloc(sizeof(char) * 12);
	if (tmp == NULL || nbr == 0)
		return((nbr == 0) ? "0" : NULL);
	if(nbr == -2147483648)
		return("-2147483648");
	if(nbr < 0)
	{
		neg = 1;
		nbr *= -1;
	}
	while(nbr)
	{
		tmp[i++] = (nbr % 10) + '0';
		nbr /= 10;
	}
	if(neg)
		temp[i] = '-';
	return ft_strrev(tmp);
}


int	main(void)
{
	int i = 0;
	int tab[5] = {-2147483648, -42, 0, 42, 2147483647};

	while(i < 5)
		printf("%s\n", ft_itoa(tab[i++]));

	return 0;
}
