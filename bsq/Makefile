# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: croussea <croussea@student.42madrid>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/29 17:55:47 by croussea          #+#    #+#              #
#    Updated: 2023/11/29 18:06:04 by croussea         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = bsq

SCRS = bsq.c annexe.c attribution.c aux.c bsq.c

OBJS = $(SRCS:.c=.o)

CC = cc

CFLAGS = -Wall -Wextra -Werror

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
	
clean: 
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean $(NAME)

.PHOMY: clean fclean re

