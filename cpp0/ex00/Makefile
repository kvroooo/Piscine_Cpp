# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: smlamali <smlamali@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/14 16:39:39 by smlamali          #+#    #+#              #
#    Updated: 2024/01/09 13:54:47 by smlamali         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS =	megaphone.cpp 

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

OBJS = $(SRCS:.cpp=.o)

NAME = megaphone

all: $(NAME)

.cpp.o:
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all