/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   extra.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsergio <vsergio@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 17:51:28 by vsergio           #+#    #+#             */
/*   Updated: 2023/04/07 17:51:42 by vsergio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EXTRA_H
# define EXTRA_H

# include "../libft.h"

long int	ft_atol(const char *str);
char		*ft_strjoin_autofree(char *s1, char *s2, int free);
char		**ft_split_quotes(char const *s, char c);
char		*ft_strtrim_edges(char const *s1, char const *set);
int			ft_isspace(char value);

#endif