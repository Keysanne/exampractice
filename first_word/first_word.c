/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbatteux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 14:33:28 by tbatteux          #+#    #+#             */
/*   Updated: 2023/05/12 14:39:19 by tbatteux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	first(char *str)
{
	int	i;

	i = 0;
	while (str[i] && (str[i] == ' ' || str[i] == '	'))
		i++;
	while (str[i] && str[i] != ' ' && str[i] != '	')
		write(1, &str[i++], 1);
	write(1, "\n", 1);
}

int	main(int argc, char **argv)
{
	if (argc != 2)
		write(1, "\n", 1);
	else
		first(argv[1]);
	return (0);
}
