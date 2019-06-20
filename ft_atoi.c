/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yinzhang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/03 13:13:08 by yinzhang          #+#    #+#             */
/*   Updated: 2019/05/03 13:23:05 by yinzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ftatoi(const char *str)
{
	int sign;
	int i;

	sign = 1;
	i = 0;
	while(str[i] == ' ' || str[i] == '\t')
		i++;
	
	if(str[i] == '-')
	{
		sign = -1;
		i++;
	}

	if(str[i] == '+')
		i++;

	int num;
	num = 0;
	while(str[i])
	{
		if(str[i] >= '0' && str[i] <= '9')
			num = (10 * num) + str[i] - '0';
		i++;
	}
	return(sign * num);
}


int main()
{
	char *a = "-123";
	int i;

	i = ftatoi(a);
	printf("i: %d i+100: %d \n", i, i+100);
}
