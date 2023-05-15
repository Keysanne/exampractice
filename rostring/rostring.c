/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2rostring.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbatteux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 14:42:20 by tbatteux          #+#    #+#             */
/*   Updated: 2023/05/15 15:25:04 by tbatteux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	chaine(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		while (str[i] && str[i] != ' ' && str[i] != '	' )
			write(1, &str[i++], 1);
		write(1, " ", 1);
		while (str[i] && (str[i] == ' ' || str[i] == '	'))
			i++;
	}
}

void    affiche(char *str)
{
        int     i;
	int	j;

        i = 0;
        while (str[i] && (str[i] == ' ' || str[i] == '	'))
                i++;
	j = i;
	while (str[i] && str[i] != ' ' && str[i] != '	')
		i++;
        while (str[i] && (str[i] == ' ' || str[i] == '	'))
                i++;
	chaine(&str[i]);
        while (str[j] && str[j] != ' ' && str[j] != '	')
                write(1, &str[j++], 1);
}

int     main(int argc, char **argv)
{
        if (argc >= 2)
                affiche(argv[1]);
        write(1, "\n", 1);
        return (0);
}
