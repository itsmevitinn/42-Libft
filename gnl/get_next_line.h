/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsergio <vsergio@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 17:49:00 by vsergio           #+#    #+#             */
/*   Updated: 2023/04/07 17:54:40 by vsergio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include "../libft.h"

typedef struct s_list_gnl
{
	char				*string;
	struct s_list_gnl	*next;
}						t_list_gnl;

t_list_gnl	*ft_lstlast_gnl(t_list_gnl *lst);
char		*get_next_line(int fd);
char		*get_next_line_bonus(int fd);
void		read_and_stash(t_list_gnl **stash, int fd);
void		add_to_stash(t_list_gnl **stash, char *buffer, int readed);
void		extract_line(t_list_gnl *stash, char **line);
void		clean_stash(t_list_gnl **stash);
int			found_newline(t_list_gnl *stash);
void		generate_line(t_list_gnl *stash, char **list);
void		free_stash(t_list_gnl *stash);

#endif