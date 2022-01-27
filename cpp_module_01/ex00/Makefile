# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: taejkim <taejkim@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/26 16:28:18 by taejkim           #+#    #+#              #
#    Updated: 2022/01/27 15:34:26 by taejkim          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = brainz

CC = clang++
CFLAGS = -Wall -Wextra -Werror
RM = rm -f

SRCS = Zombie.cpp newZombie.cpp randomChump.cppn main.cpp
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
