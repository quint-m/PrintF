NAME = libftprintf.a

LIBFT_DIR = libft
SRC_DIR = src
OBJ_DIR = obj
INCLUDES = include

SRC	=	$(SRC_DIR)/ft_printf.c		\
		$(SRC_DIR)/ft_print_token.c	\
		$(SRC_DIR)/print_util.c		\
		$(SRC_DIR)/print_util_2.c	\
		$(SRC_DIR)/handlers.c		

OBJ = $(SRC:$(SRC_DIR)/%.c=$(OBJ_DIR)/%.o)

LIBFT = $(LIBFT_DIR)/libft.a

CC = cc
CFLAGS = -Wall -Werror -Wextra
RM = rm -rf
AR = ar crs

all: $(NAME)

$(OBJ_DIR):
	@mkdir -p $(OBJ_DIR)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c | $(OBJ_DIR)
	$(CC) $(CFLAGS) -I $(INCLUDES) -c $< -o $@

$(LIBFT):
	@make -C $(LIBFT_DIR)

$(NAME): $(OBJ) $(LIBFT)
	@cp $(LIBFT) $(NAME)
	$(AR) $@ $(OBJ)

clean:
	$(RM) $(OBJ_DIR) $(OBJ)
	@make -C $(LIBFT_DIR) clean

fclean:	clean
	$(RM) $(NAME) libft.a
	@make -C $(LIBFT_DIR) fclean

re:	fclean all

.PHONY:	all clean fclean re bonus
