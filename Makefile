# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dsilva-g <dsilva-g@student.42urduli>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/26 10:20:21 by dsilva-g          #+#    #+#              #
#    Updated: 2023/04/26 11:08:20 by dsilva-g         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a

SRCS	= ft_isalpha.c \
		  ft_isdigit.c \
		  ft_isalnum.c \
		  ft_isascii.c \
		  ft_isprint.c \
		  ft_strlen.c \
		  ft_strlcpy.c \
		  ft_strlcat.c \
		  ft_strchr.c \
		  ft_strrchr.c \
		  ft_strncmp.c \
		  ft_memset.c \
		  ft_memcpy.c \
		  ft_memchr.c \
		  ft_memcmp.c \
		  ft_memmove.c \
		  ft_bzero.c \
		  ft_toupper.c \
		  ft_tolower.c \
		  ft_calloc.c \
		  ft_strdup.c

OBJS	= $(SRCS:%.c=%.0)

CC		= gcc

FLAGS	= -Wall -Werror -Wextra

$(NAME):
		$(CC) $(FLAGS) $(SRCS) -I ./
	   	ar rc $(NAME) $(OBJS)	

all:	$(NAME)

clean:
		rm -f $(OBJS)

fclean: clean
		rm -f $(NAME)