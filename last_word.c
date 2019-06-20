/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yinzhang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/03 17:01:53 by yinzhang          #+#    #+#             */
/*   Updated: 2019/05/03 17:31:15 by yinzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int strlenft(char *s)
{
	int i;
	i = 0;
	while(s[i])
		i++;
	return(i - 1);
}


int main(int argc, char **argv)
{
	int i;

	if (argc == 2)
	{
		i = strlenft(argv[1]);
		printf("%d", i);
		while ((argv[1][i] == ' ' || argv[1][i] == '\t' || argv[1][i] == '\n') && i > 0)
		{
			i--;
		}


		while ((argv[1][i] != ' ' && argv[1][i] != '\t' && argv[1][i] != '\n') && i > 0)
		{
			i--;
			printf("%d", i);
		}
		i++;
		while (argv[1][i] && (argv[1][i] != ' ' && argv[1][i] != '\t'))
		{
			write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}
