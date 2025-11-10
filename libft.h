/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momahrou <momahrou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 14:29:58 by momahrou          #+#    #+#             */
/*   Updated: 2025/11/10 10:46:25 by momahrou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

#include <stddef.h>

int		ft_atoi(char *str);
void	ft_bzero(void *str, size_t n);
int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
void	*ft_memchr( void *memoryBlock, int searchedChar, size_t size );
int		ft_memcmp(void *pointer1, void *pointer2, size_t size);
void	*ft_memcpy(void *dest, void *src, size_t n);
void	*ft_memmove(void *dest, void *src, size_t count);
void	*ft_memset(void *dest, int c, size_t count);
char	*ft_strchr(char *string, int searchedChar );
size_t	ft_strlcat(char *dst, const char *src, size_t size);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
int		ft_strlen(char *string);
int		ft_strncmp(char *first, char *second, size_t length);
char	*ft_strnstr(char *str, char *to_find, size_t n);
int		ft_tolower(int c);
int		ft_toupper(int c);
void	*ft_calloc(size_t num, size_t size);
char	*ft_strdup(char *source);

#endif