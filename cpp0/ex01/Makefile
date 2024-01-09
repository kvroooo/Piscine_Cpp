# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: smlamali <smlamali@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/14 16:39:39 by smlamali          #+#    #+#              #
#    Updated: 2024/01/09 14:09:39 by smlamali         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS =	Contact.cpp Main.cpp 	\
		PhoneBookClass.cpp 		

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98 -g

OBJS = $(SRCS:.cpp=.o)

NAME = Phone

all : $(NAME)

.cpp.o:
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all