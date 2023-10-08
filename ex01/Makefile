# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tmoumni <tmoumni@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/10 16:49:48 by tmoumni           #+#    #+#              #
#    Updated: 2023/10/08 11:27:33 by tmoumni          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook
HEADER = Contacts.hpp Phonebook.hpp

CC = c++
FLAGS = -Wall -Wextra -Werror
STD = -std=c++98

SRC = Contacts.cpp main.cpp Phonebook.cpp
OBJ = $(SRC:.cpp=.o)
RM = rm -rf

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) $(OBJ) $(STD) -o $@

%.o : %.cpp $(HEADER)
	$(CC) $(FLAGS) -c $< $(STD) -o $@

clean:
	$(RM) $(OBJ)
fclean: clean
	$(RM) $(NAME)
re: fclean all