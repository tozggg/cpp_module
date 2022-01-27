# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: taejkim <taejkim@student.42seoul.kr>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/26 16:28:18 by taejkim           #+#    #+#              #
#    Updated: 2022/01/26 17:41:57 by taejkim          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = horde

CC = clang++
CFLAGS = -Wall -Wextra -Werror
RM = rm -f

SRCS = main.cpp Zombie.cpp ZombieHorde.cpp
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
