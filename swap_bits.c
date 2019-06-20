/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_bits.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yinzhang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/04 19:34:50 by yinzhang          #+#    #+#             */
/*   Updated: 2019/05/04 19:37:14 by yinzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned char	swap_bits(unsigned char octet)
{
	return(octet >> 4 | octet << 4);
}

int		main(void)
{
	char c;

	c = 't';
	write(1, &c, 1);
	c = swap_bits(c);
	write(1, &c, 1);
	return (0);
}
