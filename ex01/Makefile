# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: clement-ghirardi <clement-ghirardi@stud    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/08/03 13:42:50 by clement-ghi       #+#    #+#              #
#    Updated: 2026/08/03 15:56:06 by clement-ghi      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY: all clean fclean re

NAME	= phonebook
CC		= c++
CFLAGS	= -Wall -Wextra -Werror -std=c++98

#	DIRECTORIES   #
SRC_DIR = sources/
INC_DIR = includes/
OBJ_DIR = objects/


#	FILES	#
SRC_FILES = main.cpp \
			PhoneBook.cpp \
			Contact.cpp
OBJ_FILES = $(SRC_FILES:.cpp=.o)


#	PATHS	#
SRC = $(addprefix $(SRC_DIR),$(SRC_FILES))
OBJ = $(addprefix $(OBJ_DIR),$(OBJ_FILES))


#	COLOR CODES AND VARS   #
TOTAL	= $(words $(OBJ))
COUNT	= 0

RED		= \033[1;31m
GREEN	= \033[1;32m
YELLOW	= \033[1;33m
BLUE	= \033[0;34m
ORANGE	= \033[1;38;5;208m
RESET	= \033[0m


#	RULES   #
all: $(NAME)

$(NAME): $(OBJ)
	@$(CC) $(CFLAGS) $(OBJ) -o $(NAME)
	@printf "$(GREEN)\n✓ $(NAME) $(GREEN)created !$(RESET)\n"

$(OBJ_DIR)%.o: $(SRC_DIR)%.cpp
	@mkdir -p $(dir $@)
	@$(eval COUNT=$(shell echo $$(($(COUNT)+1))))
	@printf "$(BLUE)[%d/%d]$(RESET) Compiling $(YELLOW)%-30s$(RESET)\n" \
		$(COUNT) $(TOTAL) $<
	@$(CC) $(CFLAGS) -I $(INC_DIR) -c $< -o $@

clean:
	@printf "$(ORANGE)~ Cleaning objects...%-30s\r$(RESET)"
	@if [ -d "$(OBJ_DIR)" ]; then \
		rm -rf $(OBJ_DIR); \
		printf "$(ORANGE)✓ Objects $(ORANGE)cleaned !%-30s\n$(RESET)"; \
	else \
		printf "$(ORANGE)~ No objects to remove.\n$(RESET)"; \
	fi;

fclean: clean
	@printf "$(RED)~ Cleaning $(NAME)...%-30s\r$(RESET)"
	@if [ -f "$(NAME)" ]; then \
		rm -f $(NAME); \
		printf "$(RED)✓ $(NAME) cleaned !%-30s\n$(RESET)"; \
	else \
		printf "$(RED)~ No executable to remove.\n$(RESET)"; \
	fi;

re: fclean all
