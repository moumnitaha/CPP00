# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tmoumni <tmoumni@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/10 16:49:48 by tmoumni           #+#    #+#              #
#    Updated: 2023/09/16 14:50:34 by tmoumni          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook

CC = c++
FLAGS = -Wall -Wextra -Werror
STD = -std=c++98

SRC = Contacts.cpp main.cpp Phonebook.cpp
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) $(OBJ) $(STD) -o $@
%.o : %.cpp
	$(CC) $(FLAGS) -c $< $(STD) -o $@

clean:
	rm $(OBJ)
fclean:
	rm $(OBJ) $(NAME)
re: fclean all