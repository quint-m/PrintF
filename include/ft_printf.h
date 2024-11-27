/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qmennen <qmennen@student.codam.nl>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 14:34:12 by qmennen           #+#    #+#             */
/*   Updated: 2024/10/30 15:08:15 by qmennen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# define BUFFER_SIZE 1024
# define TOKEN_COUNT 9
# include <stddef.h>
# include <stdarg.h>
# include <stdlib.h>

typedef struct s_fmt
{
	char	token;
	int		(*fn)(va_list, const char *, char *);
}				t_fmt;

int		ft_isdigit(int c);
int		ft_isalpha(int c);
int		ft_isalnum(int c);
void	*ft_calloc(size_t nmemb, size_t size);
void	ft_bzero(void *s, size_t n);
int		print_token(const char *format, char *buffer, va_list args, int *fmt_i);
int		print_char(va_list args, const char *fmt, char *buf);
int		print_str(va_list args, const char *fmt, char *buf);
int		print_hex_l(va_list args, const char *fmt, char *buf);
int		print_hex_u(va_list args, const char *fmt, char *buf);
int		print_pointer(va_list args, const char *fmt, char *buf);
int		print_int(va_list args, const char *fmt, char *buf);
int		print_int_unsigned(va_list args, const char *fmt, char *buf);
int		print_percent(va_list args, const char *fmt, char *buf);
int		handle_hex(unsigned long n, const char *char_set, char *buffer);
int		handle_int(int n, char *buffer);
int		handle_int_u(unsigned int n, char *buffer);
size_t	ft_strlen(const char *c);
int		ft_printf(const char *format, ...);

#endif
