/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slaszlo- <slaszlo-@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 12:22:43 by slaszlo-          #+#    #+#             */
/*   Updated: 2022/03/31 15:34:47 by slaszlo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>
# include <unistd.h>

int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
size_t	ft_strlen(const char *s);
void	*ft_memset(void *b, int c, size_t len);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *dst, const void *src, size_t n);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
//size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);

int		ft_toupper(int c);
int		ft_tolower(int c);
int		ft_strchr(const char *s, int c);
//strrchr
//strncmp
//memchr
//memcmp
//strnstr
//atoi

//calloc
//strdup

char	*ft_strjoin(char const	*s1, char const	*s2);

#endif