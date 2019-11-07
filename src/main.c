/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarmelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 19:42:01 by lcarmelo          #+#    #+#             */
/*   Updated: 2019/11/07 19:42:04 by lcarmelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "solve.h"
#include "take_tetrimino.h"

int		main(int argc, char *argv[])
{
	int fd;

	if (argc == 2)
	{
		fd = open(argv[1], O_RDONLY);
		parse_file(fd);
		search_solve(g_max_size);
	}
	return (0);
}
