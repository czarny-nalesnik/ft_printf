/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                         :+:      :+:    :+:      */
/*                                                    +:+ +:+         +:+     */
/*   By: smalinow <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 19:36:28 by smalinow          #+#    #+#             */
/*   Updated: 2024/12/16 19:36:30 by smalinow         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdio.h>
# include <stddef.h>
# include <unistd.h>
# include <limits.h>
# include <stdlib.h>
# include <stdint.h>

int		ft_isalpha(int param);
int		ft_isdigit(int param);
int		ft_isalnum(int param);
int		ft_isascii(int param);
int		ft_isprint(int param);
int		ft_toupper(int param);
int		ft_tolower(int param);
int		ft_memcmp(const void *str1, const void *str2, size_t n);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
int		ft_atoi(const char *str);
size_t	ft_strlen(const char *str);
size_t	ft_strlcpy(char *dest, const char *str, size_t n);
size_t	ft_strlcat(char *dest, const char *str, size_t n);
void	ft_bzero(void *str, size_t n);
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
void	ft_putstr_fd(char *s, int fd);
void	ft_putchar_fd(char c, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
void	*ft_memset(void *ptr, int c, size_t n);
void	*ft_memcpy(void *dest, const void *str, size_t n);
void	*ft_memchr(const void *str, int c, size_t n);
void	*ft_memmove(void *dest, const void *str, size_t n);
void	*ft_calloc(size_t n, size_t size);
char	*ft_strnstr(const char *str1, const char *str2, size_t n);
char	*ft_strchr(const char *str, int c);
char	*ft_strrchr(const char *str, int c);
char	*ft_strdup(const char *str);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s1, char const *set);
char	*ft_itoa(int n);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char	**ft_split(char const *s, char c);

#endif