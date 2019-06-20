/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse.bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yinzhang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/03 17:31:53 by yinzhang          #+#    #+#             */
/*   Updated: 2019/05/03 17:39:50 by yinzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned char	swap_bits(unsigned char octet)
{
	return ((octet >> 4) | (octet << 4));
}

int		main(void)
{
	char c;

	c = 't';
	write(1, &c, 1);
	c = swap_bits(c);


	char buffer [33];
	itoa (c,buffer,2);
	printf ("binary: %s\n",buffer);
	return (0);
}
