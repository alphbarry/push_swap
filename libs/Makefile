DEF_COLOR 	=	\033[1;39m
WHITE_BOLD	=	\033[1m
BLACK		=	\033[1;30m
RED			=	\033[1;31m
GREEN		=	\033[1;32m
YELLOW		=	\033[1;33m
BLUE		=	\033[1;34m
PINK		=	\033[1;35m
CIAN		=	\033[1;36m

LIBFT_DIR	=	libft/
PRINTF_DIR	=	ft_printf/

RM			=	rm -f
MKFLAGS		=	--no-print-directory

#-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/RULES/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-#

all			:
	@$(MAKE) $(MKFLAGS) libft
	@$(MAKE) $(MKFLAGS) printf
	@echo ""

libft		:
	@$(MAKE) $(MKFLAGS) -C $(LIBFT_DIR)

printf		:
	@$(MAKE) $(MKFLAGS) -C $(PRINTF_DIR)

clean		:
	@$(MAKE) $(MKFLAGS) clean -C $(LIBFT_DIR)
	@$(MAKE) $(MKFLAGS) clean -C $(PRINTF_DIR)

fclean		:
	@$(MAKE) $(MKFLAGS) fclean -C $(LIBFT_DIR)
	@$(MAKE) $(MKFLAGS) fclean -C $(PRINTF_DIR)

re			:
	@$(MAKE) $(MKFLAGS) fclean
	@$(MAKE) $(MKFLAGS) all

.PHONY: all clean fclean re libft printf mlx
