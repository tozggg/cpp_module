# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: taejkim <taejkim@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/28 17:07:21 by taejkim           #+#    #+#              #
#    Updated: 2022/01/31 18:53:28 by taejkim          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = bsp

CXX = clang++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -f

SRCS = Fixed.cpp Point.cpp bsp.cpp main.cpp
OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
		$(CXX) $(CXXFLAGS) $^ -o $@

%.o: %.cpp
		$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
		$(RM) $(OBJS)

fclean: clean
		$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
