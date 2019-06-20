/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   addprimesum.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yinzhang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/07 01:08:14 by yinzhang          #+#    #+#             */
/*   Updated: 2019/05/07 02:28:25 by yinzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int		ft_atoi_nc(char *s)
{
	int r;

	while(*s >= '0' && *s <= '9')
		r = r * 10 + *s++ - '0';
	return(r);
}
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		is_prime(int n)
{
	int i;

	i = 2;
	while (i < n)
		if (!(n % i++))
			return 0;
	return(1);
}

void	ft_putposnbr(int n)
{
	if (n > 9)
		ft_putposnbr(n / 10);
	ft_putchar(n % 10 + '0');
}

void	add_prime_sum(int n)
{
	int i;
	int count;

	count = 0;
	if (n == 1)
		count = 1;
	i = 1;
	while (++i <= n)
		if(is_prime(i))
			count = count + i;
	ft_putposnbr(count);
}



int		main(int ac, char **av)
{
	if(ac == 2 && ft_atoi_nc(av[1]) > 0)
		add_prime_sum(ft_atoi_nc(av[1]));
	else
		write(1, "0", 1);
	write(1, "\n", 1);
	return (1);
}
