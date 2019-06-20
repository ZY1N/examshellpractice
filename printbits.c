/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printbits.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yinzhang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/03 22:55:19 by yinzhang          #+#    #+#             */
/*   Updated: 2019/05/07 21:57:08 by yinzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	print_bits(unsigned char octet)
{
	char s[8] = "00000000";

	int i;
	i = 7;
	while(octet)
	{
		if(octet % 2 == 1)
			s[i] = '1';
		i--;
		octet = octet / 2;
	}

	
		write(1, s, 8);
}

int main()
{
	char c;

	c = 2;
	print_bits(c);
}
