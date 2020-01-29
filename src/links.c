/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   links.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmabuza <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/29 14:31:19 by vmabuza           #+#    #+#             */
/*   Updated: 2020/01/29 14:31:21 by vmabuza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lem_in.h"

void	links(t_map *m, char *line)
{
	if (m->val_started == 2)
		m->val_started = 3;
	if (m->val_started != 3)
		exit_func(m, 1);
	m->links = join_str(m->links, line, 0);
}
