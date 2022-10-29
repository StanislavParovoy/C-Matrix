CC		= gcc

FLAGS	= -Wall -Wextra -Werror

INCLUDE = include

HEADERS = $(INCLUDE)/c_matrix.h


NAME_MATRIX_LIB = lib_c_matrix.a

F_NONE		= \033[37m
F_BOLD		= \033[1m
F_RED		= \033[31m
F_ORANGE	= \033[38m
F_YELLOW	= \033[0;33m
F_GREEN		= \033[32m
F_CYAN		= \033[36m
F_BLUE		= \033[34m 

SRCS = srcs/c_calc_complements.c       srcs/c_determinant.c            srcs/c_fill_matrix.c            srcs/c_mult_matrix.c            srcs/c_print_matrix.c           srcs/c_sub_matrix.c             srcs/c_transpose.c\
		srcs/c_create_matrix.c          srcs/c_eq_matrix.c              srcs/c_inverse_matrix.c         srcs/c_mult_number.c            srcs/c_remove_matrix.c          srcs/c_sum_matrix.c

OBJS	= $(SRCS:.c=.o)

AR		= ar rc



.c.o:
	$(CC) $(FLAGS) -c -I$(INCLUDE) $< -o $(<:.c=.o)

all: $(NAME_MATRIX_LIB)
	

$(NAME_MATRIX_LIB): $(OBJS)
	$(AR) $(NAME_MATRIX_LIB) $(OBJS)
	ranlib $(NAME_MATRIX_LIB)


clean:
	rm $(OBJS)


fclean: clean
	rm -rf $(NAME_MATRIX_LIB)

re: fclean all


code:
	@echo " ~~~~~~~~~~~~~~~~"
	@echo "$(F_BOLD)  * Make code, *"
	@echo "$(F_BOLD)   * not war! *"
	@echo "$(F_RED)    ..10101.."
	@echo "$(F_ORANGE)  01   1   011"
	@echo "$(F_YELLOW) 10     0     00"
	@echo "$(F_GREEN) 11   .010.   11"
	@echo "$(F_CYAN) 00 .01 1 01. 10"
	@echo "$(F_BLUE) 010   1   110"
	@echo "$(F_BLUE)   11011010**$(F_NONE)"

.PHONY:     all clean fclean re bonus code