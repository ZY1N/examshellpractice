/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strrev.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yinzhang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/03 21:08:51 by yinzhang          #+#    #+#             */
/*   Updated: 2019/05/03 21:49:00 by yinzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ftstrlen(char *str)
{
	int i;

	i = 0;
	while(str[i])
		i++;
	return(i);
}


char *ft_strev(char *str)
{
	char c;
	int i;
	int strlen;

	int mid;
	i = 0;
	strlen = ftstrlen(str);
	mid = strlen / 2;
	char d;

	while(mid > 0)
	{
		c = str[i];
		d = str[strlen - 1];
		str[i] = d;
		str[strlen - 1] = c;
		i++;
		strlen--;
		mid--;
	}
	return(str);
}

/*
int main()
{
    char *str  = strdup("Quentin <3");
    printf("%s\n", ft_strev(str));
    return (0);
}
*/


int		main(int argc, char **argv)
{
	char *s;
   s = "abcdefghijklmnopq";
	char *d;

	d = ft_strev(s);
//	printf("%s", d);
}

