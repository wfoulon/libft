# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wfoulon <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/08 09:29:04 by wfoulon           #+#    #+#              #
#    Updated: 2017/11/09 12:07:55 by wfoulon          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			= 	libft.a
HEADER			= 	libft.h
SRC 			= 	ft_memset.c \
					ft_bzero.c \
					ft_memcpy.c \
					ft_memccpy.c \
					ft_memmove.c \
					ft_memchr.c \
					ft_memcmp.c \
					ft_strlen.c \
					ft_strdup.c \
					ft_strcpy.c \
					ft_strncpy.c \
					ft_strcat.c \
					ft_strncat.c \
					ft_strlcat.c \
					ft_strchr.c \
					ft_strrchr.c \
					ft_strstr.c \
					ft_strnstr.c \
					ft_strcmp.c \
					ft_strncmp.c \
					ft_atoi.c \
					ft_isalpha.c \
					ft_isdigit.c \
					ft_isalnum.c \
					ft_isascii.c \
					ft_isprint.c \
					ft_toupper.c \
					ft_tolower.c \
					ft_memalloc.c \
					ft_memdel.c \
					ft_strnew.c \
					ft_strdel.c \
					ft_strclr.c \
					ft_striter.c \
					ft_striteri.c \
					ft_strmap.c \
					ft_strmapi.c \
					ft_strequ.c \
					ft_strnequ.c \
					ft_strsub.c \
					ft_strjoin.c \
					ft_strtrim.c \
					ft_putchar.c \
					ft_putstr.c \
					ft_putendl.c \
					ft_putnbr.c \
					ft_putchar_fd.c \
					ft_putstr_fd.c \
					ft_putendl_fd.c \
					ft_putnbr_fd.c
OBJ 			=	$(SRC:.c=.o)

all : $(NAME)

$(NAME):
	@gcc -Wall -Werror -Wextra -c $(SRC) -I $(HEADER)
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)
	@echo "\033[32;1mlibft is ready\033[0m"

clean:
	@/bin/rm -f $(OBJ)
	@echo "\033[37mall files.o are removed\033[0m"

fclean: clean
	@/bin/rm -f $(NAME)
	@echo "\033[31m$(NAME) is deleted\033[0m"

re: fclean all
