# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ayel-mou <ayel-mou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/23 07:04:36 by ayel-mou          #+#    #+#              #
#    Updated: 2025/05/01 07:00:29 by ayel-mou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME:=Abstract
BINDIR:=bin/

CC:=c++
CFLAGS:=-Wall -Wextra -Werror -std=c++98 -g3
DEBUGFLAG:=gdb

OBJ:= $(patsubst %.cpp, $(BINDIR)%.o, $(wildcard *.cpp))
INC:= $(wildcard *.h) $(wildcard *.hpp)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ)

fclean: clean
	rm -rf $(NAME)

clean:
	rm -rf $(BINDIR)

re: fclean $(NAME)

debug: CFLAGS += -g $(DEBUGFLAG)
debug: fclean $(NAME)

$(BINDIR)%.o: %.cpp $(INC) | $(BINDIR)
	$(CC) $(CFLAGS) $< -c -o $@

$(BINDIR):
	@mkdir -p $(BINDIR)

.DEFAULT_GOAL:= $(NAME)
.SECONDARY: $(OBJ)
.PHONY: debug all clean fclean re