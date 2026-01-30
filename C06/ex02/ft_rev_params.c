/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarino <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 11:54:26 by cmarino           #+#    #+#             */
/*   Updated: 2026/01/30 12:05:45 by cmarino          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	n;

	if (argc == 1)
		return (0);
	n = argc - 1;
	while (n > 0)
	{
		i = 0;
		while (argv[n][i])
		{
			write(1, &argv[n][i]);
			i++;
		}
		write(1, "\n", 1);
		n--;
	}
	return (0);
}
