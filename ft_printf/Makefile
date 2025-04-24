# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aosmenaj <aosmenaj@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/07 11:56:41 by aosmenaj          #+#    #+#              #
#    Updated: 2023/11/07 12:39:52 by aosmenaj         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC			=	ft_char.c ft_contr.c ft_hexlow.c ft_hexupp.c ft_int.c ft_perc.c \
				ft_point.c ft_printf.c ft_scrivi.c ft_string.c ft_uns.c 
				
OBJS		= $(SRC:.c=.o)

CC			= cc
RM			= rm -f
CFLAGS		= -Wall -Werror -Wextra 

NAME		= libftprintf.a

all:		$(NAME)

$(NAME):	$(OBJS)
					$(CC) $(CFLAGS) -c $(SRC)
					ar -rc $(NAME) $(OBJS)

clean:
			$(RM) $(OBJS)

fclean:	clean
			$(RM) $(NAME) 
			
re:			fclean $(NAME)

.PHONY:		all clean fclean re bonus
