# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pcervant <pcervant@student.42malaga.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/27 17:44:36 by pcervant          #+#    #+#              #
#    Updated: 2024/11/05 18:37:52 by pcervant         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = gcc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f

SRCS =	ft_printchar.c \
				ft_printf.c \
				ft_printhex.c \
				ft_printnbr.c \
				ft_printporc.c \
				ft_printptr.c \
				ft_printstr.c \
				ft_printunsigned.c
				
								
OBJS = $(SRCS:.c=.o) 

$(NAME) : $(OBJS)
	@ar crs $(NAME) $(OBJS) 

all: $(NAME)

clean:
	@$(RM) $(OBJS)
fclean: clean
	@rm -f $(NAME)
re: fclean all
.PHONY: all re clean fclean