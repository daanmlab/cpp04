# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dabalm <dabalm@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/08 17:20:22 by dabalm            #+#    #+#              #
#    Updated: 2024/03/10 00:20:05 by dabalm           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = clap

C = c++

FLAGS = -Wall -Wextra -Werror -g -std=c++98

DIR_S = ./

DIR_O = obj

SOURCES =	main.cpp \
			Cat.cpp \
			Dog.cpp \
			Animal.cpp \
			WrongAnimal.cpp \
			WrongCat.cpp

SRCS = $(addprefix $(DIR_S)/,$(SOURCES))

OBJS = $(addprefix $(DIR_O)/,$(SOURCES:.cpp=.o))

all: $(NAME)

$(NAME): $(OBJS)
	$(C) $(FLAGS) -o $(NAME) $(OBJS) $(LIB)

$(DIR_O)/%.o: $(DIR_S)/%.cpp
	@mkdir -p $(DIR_O)
	$(C) $(FLAGS) -o $@ -c $<

clean:
	@rm -f $(OBJS)
	@rm -rf $(DIR_O)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re