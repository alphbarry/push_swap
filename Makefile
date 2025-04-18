# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alphbarr <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/02 14:10:47 by alphbarr          #+#    #+#              #
#    Updated: 2024/07/11 17:35:50 by alphbarr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#<--------------------------------->COLORS<----------------------------------->#
DEF_COLOR	=	\033[1;99m
WHITE_BOLD	=	\033[1m
BLACK		=	\033[1;90m
RED			=	\033[1;91m
GREEN		=	\033[1;92m
YELLOW		=	\033[1;93m
BLUE		=	\033[1;94m
PINK		=	\033[1;95m
CIAN		=	\033[1;96m

#<--------------------------------->NAME<------------------------------------>#
NAME		=	push_swap

#<-------------------------------->LIBRARY<---------------------------------->#
LIBRARY		=	libs/
LIB_A		=	libs/libft/libft.a libs/ft_printf/libftprintf.a
LIB_SEARCH	=	-L./libs/libft -L./libs/ft_printf

#<-------------------------------->HEADERS<---------------------------------->#
HEADER		=	./includes/
PRINTF_H	=	./libs/ft_printf/inc/
LIBFT_H		=	./libs/libft/

#<--------------------------------->DIRS<------------------------------------>#
SRC_DIR		=	src/
OBJ_DIR		=	objects/

#<--------------------------------->FILES<---------------------------------->#
FILES		=	main.c \
				push.c \
				swap.c \
				rotate.c \
				rrotate.c \
				arguments_check.c \
				stack_manage.c \
				smallsort.c \
				bigsort.c \
				chunksort.c

#<--------------------------------->SRCS<----------------------------------->#
SRCS		=	$(addprefix $(SRC_DIR), $(addsuffix .c, $(FILES)))

#<----------------------------->OBJS && DEPS<------------------------------->#
OBJS		=	$(addprefix $(OBJ_DIR), $(subst .c,.o,$(FILES)))
DEPS		=	$(subst .o,.d,$(OBJS))

#<-------------------------------->COMANDS<---------------------------------->#
INCLUDE		=	-I$(HEADER) -I$(PRINTF_H) -I$(LIBFT_H)
RM			=	rm -rf
MKD			=	mkdir -p
MK			=	Makefile
CC			=	cc
CFLAGS		=	-Wall -Wextra -Werror
MKFLAGS		=	--no-print-directory

ARG_FILE := args.txt
# 5 nums max 12 moves
# 100 max 700
# 500 max 5500
NUM_QTY := 500
MAX_MOVES := 5500
generate_arg: 
	@shuf -i 0-5000000 -n $(NUM_QTY) > $(ARG_FILE)

test: $(NAME) generate_arg
	@ARG=$$(cat $(ARG_FILE)); \
	RESULT=$$(./$(NAME) $$ARG | ./checker_linux $$ARG); \
	if [ "$$RESULT" = "OK" ]; then \
		COLOR="\033[0;32m"; \
	else \
		COLOR="\033[0;31m"; \
	fi; \
	echo "󱝿⚙️ Checker verify: $$COLOR$$RESULT\033[0m"; \
	echo -n "🔢 Num of moves:    "; \
	NUM_MOVES=$$(./$(NAME) $$ARG | wc -l); \
	if [ "$$NUM_MOVES" -lt $(MAX_MOVES) ]; then \
		COLOR="\033[0;32m"; \
	else \
		COLOR="\033[0;31m"; \
	fi; \
	echo "$$COLOR$$NUM_MOVES\033[0m"

#<--------------------------------->RULES<----------------------------------->#
$(OBJ_DIR)%.o	:$(SRC_DIR)%.c $(LIB_A) $(MK)
	@$(MKD) $(dir $@)
	@printf "$(PINK)    \rCompiling: $(YELLOW)$(notdir $<)...$(DEF_COLOR)       \r"
	@$(CC) -MT $@ $(CFLAGS) -MMD -MP $(INCLUDE) -c $< -o $@

all				:
	@$(MAKE) $(MKFLAGS) -C $(LIBRARY)
	@$(MAKE) $(MKFLAGS) $(NAME)


$(NAME)			:	$(OBJS)
	@$(CC) $(CFLAGS) $(OBJS) $(LIB_A) -o $@
	@echo "\n$(GREEN)push_swap has been compiled$(DEF_COLOR)"

clean			:
	@$(MAKE) $(MKFLAGS) clean -C $(LIBRARY)
	@$(RM) $(OBJ_DIR) $(B_OBJ_DIR)
	@echo ""
	@echo "$(RED)All OBJS && DEPS has been removed$(DEF_COLOR)"
	@echo ""

fclean			:
	@$(MAKE) $(MKFLAGS) clean
	@$(MAKE) $(MKFLAGS) fclean -C $(LIBRARY)
	@$(RM) $(NAME) $(B_NAME)
	@echo ""
	@echo "$(RED)Program has been removed$(DEF_COLOR)"

re				:
	@$(MAKE) $(MKFLAGS) fclean
	@$(MAKE) $(MKFLAGS) all
	@echo ""
	@echo "$(CIAN)push_swap has been recompiled$(DEF_COLOR)"

.PHONY			: all clean fclean re

-include		$(DEPS)
