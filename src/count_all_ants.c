/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_all_ants.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmabuza <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/29 14:27:13 by vmabuza           #+#    #+#             */
/*   Updated: 2020/01/29 14:28:16 by vmabuza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lem_in.h"

void	count_all_ants(t_map *m, char *line)
{
	int		i;
	char	*s;

	i = 0;
	m->val_started = 1;
	m->ants_str = join_str(m->ants_str, line, 0);
	if (line[0] == '#')
		return ;
	s = ft_strtrim(line);
	if ((m->quant_ants = ft_atoi(s)) <= 0)
		exit_func(m, 1);
	while (s[i] != '\n' && s[i] != 0)
	{
		if (!ft_isdigit(s[i++]))
			exit_func(m, 1);
	}
}
