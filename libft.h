/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yufonten <yufonten@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 12:48:01 by yufonten          #+#    #+#             */
/*   Updated: 2023/10/17 14:50:32 by yufonten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>

int		ft_isalpha(int c);

int		ft_isdigit(int c);

int		ft_isalnum(int c);

int		ft_isascii(int c);

int		ft_isprint(int c);

size_t	ft_strlen(const char *s);

void	*ft_memset(void *s, int c, size_t n);

void	ft_bzero(void *s, size_t n);

void	*ft_memcpy(void *dest, const void *src, size_t n);

void	*ft_memmove(void *dest, const void *src, size_t n);

size_t	ft_strlcpy(char *dst, const char *src, size_t size);

size_t	ft_strlcat(char *dst, const char *src, size_t size);

int		ft_toupper(int c);

int		ft_tolower(int c);

char	*ft_strchr(const char *s, int c);

char	*ft_strrchr(const char *s, int c);

void	ft_putchar_fd(char c, int fd);

void	ft_putstr_fd(char *s, int fd);

void	ft_putendl_fd(char *s, int fd);

#endif
