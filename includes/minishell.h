/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ridalgo- <ridalgo-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 11:11:48 by ridalgo-          #+#    #+#             */
/*   Updated: 2022/12/23 10:25:42 by ridalgo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINISHELL_H
# define MINISHELL_H

# include "../libft/includes/libft.h"

typedef struct s_tokens
{
	char			*value;
	int				type;
	int				index;
	struct s_tokens	*next;
}				t_tokens;

typedef struct s_shell
{
	int			state;
	t_tokens	*tokens;
}				t_shell;

#endif