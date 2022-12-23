/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_minishell.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ridalgo- <ridalgo-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 11:14:30 by ridalgo-          #+#    #+#             */
/*   Updated: 2022/12/23 10:29:27 by ridalgo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/minishell.h"

static void	arguments(int ac)
{
	if (ac > 1)
	{
		ft_printf("Please run ./minishell");
		exit (1);
	}
}

int	main(int ac, char **av)
{
	t_shell	*shell;

	(void)av;
	arguments(ac);
	shell = ft_calloc(1, sizeof(t_shell));
	shell->state = 0;
	while (1)
	{
		if (shell->state == 1)
			ft_printf("Shellstate == %d\n", shell->state);
		else
			ft_printf("Olá\n");
	}
	return (0);
}
