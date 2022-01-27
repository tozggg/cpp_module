# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: taejkim <taejkim@student.42seoul.kr>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/26 17:45:51 by taejkim           #+#    #+#              #
#    Updated: 2022/01/26 17:48:14 by taejkim          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = hibrain

CC = clang++
CFLAGS = -Wall -Wextra -Werror
RM = rm -f

SRCS = main.cpp
OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
		$(CC) $(CFLAGS) $^ -o $@

%.o: %.cpp
		$(CC) $(CFLAGS) -c $< -o $@

clean:
		$(RM) $(OBJS)

fclean: clean
		$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
