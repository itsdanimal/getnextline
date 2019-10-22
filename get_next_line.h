/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danli <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 12:17:27 by danli             #+#    #+#             */
/*   Updated: 2019/10/14 12:21:57 by danli            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# define BUFF_SIZE 1

# include "libft/libft.h"
# include "sys/uio.h"
# include "sys/types.h"
# include "fcntl.h"
# include "stdlib.h"
# include "unistd.h"

int		ft_new_line(char **s, char **line, int fd, int ret);
int		get_next_line(const int fd, char **line);

#endif
