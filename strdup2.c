/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strdup2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yinzhang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/02 23:44:57 by yinzhang          #+#    #+#             */
/*   Updated: 2019/05/03 00:20:28 by yinzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>


char *ft_strdup(char *src)
{
	int i;
	char *s;

	int len;
	len = 0;
	while (src[len])
		len++;


	if (!(s = (char *)malloc(sizeof (char) * (i + 1))))
		return NULL;	
	
//	s[len] = '\0';
	
//	while (len > 4)
//	{
//		*s = *src;
//		s++;
//		src++;
//		len--;
//	}	


	while (*src)
	{
		*s = *src;
		src++;
		s++;
	}
	*s = '\0';

	while(len-- > 0)
		s--;

	return(s);
}





int 	main()
{
	char *s = "abcdefg";
	char *s2;

	s2 = ft_strdup(s);

	printf("s1:%s \n s2:%s", s, s2);

}
