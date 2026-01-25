# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: avelandr <avelandr@student.42barcelon      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/01/16 14:57:51 by avelandr          #+#    #+#              #
#    Updated: 2026/01/22 17:29:31 by avelandr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME        = harl

CXX         = c++
CXXFLAGS    = -Wall -Werror -Wextra -std=c++98

SRC         = main.cpp Fixed.cpp
OBJ         = $(SRC:.cpp=.o)

RESET       = \033[0m
PINK        = \033[1;35m
BLUE        = \033[1;36m
GREEN       = \033[1;32m
VIOLET		= \033[38;2;185;39;233m

TOTAL_SRCS := $(words $(SRC))

all: gamba $(NAME)

gamba:
	@echo "$(PINK)"
	@echo "                         ▒▒▒▒▒▒▒▒                  "
	@echo "                     ▒▒▒▒▒                     ▒▒▒▒▒▒  "
	@echo "                 ▒▒▒▒▒                      ▒▒▒▒        "
	@echo "               ░░                ░░░░░░░░░░░░                  "
	@echo "             ░░      ░░░░░░░░░░░░                                "
	@echo "           ░░░░▒▒░░░░░░                                          "
	@echo "           ▒▒                                                    "
	@echo "   ░░░░░░▒▒▒▒░░░░░░░░░░░░░░░░░░░░░░░░░░                          "
	@echo " ▒▒░░░░░░░░░░░░░░▒▒▒▒▒▒░░░░░░░░░░░░░░▒▒▒▒▒▒▒▒▒▒▒▒▒▒                "
	@echo "   ▒▒▒▒░░░░░░░░██  ▒▒░░▒▒░░░░░░░░░░░░▒▒░░░░░░░░░░░░▒▒              "
	@echo "       ▒▒░░░░░░████░░░░▒▒░░░░░░░░░░░░░░▒▒░░░░░░░░░░░░▒▒▒▒▒▒        "
	@echo "         ▒▒░░░░░░░░░░▒▒░░░░░░░░░░░░░░░░░░▒▒░░░░░░░░░░▒▒░░▒▒▒▒      "
	@echo "           ▒▒▒▒░░░░░░░░░░░░░░░░░░░░░░░░░░▒▒░░░░░░░░░░▒▒░░░░░░░░    "
	@echo "             ▒▒▒▒▒▒▒▒▒▒▒▒▒▒░░░░░░░░░░░░▒▒░░░░░░░░░░░░▒▒░░░░░░▒▒░░  "
	@echo "               ▒▒        ▒▒░░░░░░░░░░░░  ░░░░░░░░░░░░░░░░░░░░░░▒▒  "
	@echo "           ░░░░          ▒▒    ▒▒      ░░      ▒▒▒▒░░░░░░░░▒▒▒▒░░░░"
	@echo "       ▒▒▒▒            ▒▒▒▒    ▒▒        ▒▒      ▒▒░░▒▒▒▒▒▒░░░░░░▒▒"
	@echo "     ▒▒                ▒▒      ▒▒▒▒                ▒▒░░░░░░░░░░░░▒▒"
	@echo "     ░░                ▒▒        ▒▒                  ░░░░░░░░░░░░▒▒"
	@echo "                       ▒▒        ▒▒                    ▒▒▒▒▒▒▒▒▒▒▒▒  "
	@echo "                         ▒▒        ▒▒▒▒    avelandr    ▒▒▒▒▒▒░░░░▒▒  "
	@echo "                           ▒▒                          ▒▒░░░░░░▒▒"
	@echo "                             ▒▒                      ▒▒▒▒░░░░▒▒    "
	@echo "                                                 ░░░░▒▒░░░░▒▒      "
	@echo "                                             ░░░░▒▒▒▒▒▒░░░░        "
	@echo "                                         ░░░░▒▒░░░░▒▒▒▒            "
	@echo "                                             ▒▒░░░░▒▒              "
	@echo "                                       ░░░░░░                      "
	@echo "$(RESET)"
$(NAME): $(OBJ)
	@echo ""
	@echo "$(BLUE)Linking objects...$(RESET)"
	@$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)
	@echo "$(GREEN)Exercise $(NAME) compiled successfully!$(RESET)"

# mi barrita de carga
%.o: %.cpp
	@$(CXX) $(CXXFLAGS) -c $< -o $@
	@curr=$$(find . -type f -name "*.o" | wc -l); \
	percent=$$(( $$curr * 100 / $(TOTAL_SRCS) )); \
	bar_len=$$(( $$percent / 2 )); \
	bar_str=""; \
	i=0; \
	while [ $$i -lt $$bar_len ]; do bar_str="$${bar_str}▓"; i=$$((i+1)); done; \
	spaces=""; \
	i=0; \
	rest=$$((50 - $$bar_len)); \
	while [ $$i -lt $$rest ]; do spaces="$${spaces}░"; i=$$((i+1)); done; \
	printf "\r$(BLUE)Compiling: $(PINK)[$$bar_str$$spaces] $(PINK)$$percent%% $(RESET)"

clean:
	@rm -f $(OBJ)
	@echo "$(BLUE)Objects cleaned.$(RESET)"

fclean: clean
	@rm -f $(NAME)
	@echo "$(BLUE)Executable cleaned.$(RESET)"

re: fclean all

tests: $(NAME)
	c++ -Wall -Wextra -Werror main_tests.cpp utils.cpp -o tester
	./tester
	@rm -f tester

.PHONY: all clean fclean re tests
