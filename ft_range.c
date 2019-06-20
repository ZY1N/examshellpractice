/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yinzhang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/06 13:16:47 by yinzhang          #+#    #+#             */
/*   Updated: 2019/05/06 13:27:39 by yinzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int start, int end)
{
	int length;

	length = end - start + 1;
	
	int *array;
	array = malloc(sizeof(int) * length);

	int i;
	i = 0;
	while(length > 0)
	{
		array[i] = start;
		start++;
		i++;
		length--;
	}
	return(array);
}

int		main()
{
	int start;
	int end;

	start = 0;
	end = 0;
	int *array;

	array = ft_range(start, end);
	int i = 0;
	while(i <= 0)
	{
		printf("%d", array[i]);
		i++;
	}
}
