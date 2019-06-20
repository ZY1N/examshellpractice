/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strdup.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yinzhang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/02 22:51:31 by yinzhang          #+#    #+#             */
/*   Updated: 2019/05/02 23:44:40 by yinzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int ftstrlen(char *src)
{
	int i;

	i = 0;
	while (src[i])
		i++;

	return (i);
}


char	*ft_strdup(char *src)
{
	int i;
	char *s;

	i = ftstrlen(src);	
	if (!(s = (char *)malloc(sizeof (char) * (i + 1))))
		return NULL;
//	s[i] = '\0';
	
	
	
	i = 0;	
	while (src[i] && src[i])
	{
		s[i] = src[i];
		//s++;
		//src++;
		i++;
	}
	return(s);
}

int 	main()
{
	char *s = "abcdefg";
	char *s2;

	s2 = ft_strdup(s);
	
	printf("%s \n %s", s, s2);

}
