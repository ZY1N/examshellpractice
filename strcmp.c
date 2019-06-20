/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strcmp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yinzhang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/03 22:42:53 by yinzhang          #+#    #+#             */
/*   Updated: 2019/05/03 22:53:05 by yinzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int		ft_strcmp(char *s1, char *s2)
{
	int i;

	while(*s1 == *s2)
	{
		s1++;
		s2++;
	}
	return((unsigned char)*s1 - (unsigned char)*s2);
}


/*
int		ft_strcmp(const char *s1, const char *s2)
{
	int		i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
*/

int		main()
{
	char s1[] = "abcdef";
	char s2[] = "abcdef";

	int i;
	i = ft_strcmp(s1, s2);
	printf("%d", i);
}
