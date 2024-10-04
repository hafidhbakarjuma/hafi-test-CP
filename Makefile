NAME = libft.a

SRC =	ft_atoi.c \
			ft_bzero \
			ft_calloc.c \
			ft_strlen \
			ft_strlcpy \
			ft_strlcat \
			ft_strchr \
			ft_strrchr \
			ft_strnstr.c \
			ft_strncmp.c \
			ft_isalnum.c \
			ft_isalpha.c \
			ft_isascii.c \
			ft_isdigit.c \	
			ft_isprint.c \
			ft_memchr.c \
			ft_memcmp.c \
			ft_memmove.c \
			ft_memcpy.c \
			ft_memset.c \
			ft_toupper.c \
			ft_tolower.c \
			ft_calloc.c \
			ft_strdup.c \
			ft_substr.c \
			ft_strjoin.c \
			ft_strtim.c \
			ft_strmapi.c \
			ft_split.c \
			ft_itoa.c \
			ft_putchar_fd.c \
			ft_putstr_fd.c \
			ft_putendl_fd.c \
			ft_striteri,c \
			ft_putnbr_fd.c \

	OBJS	= $(SRC:.c=.o)

	LIBC	= ar rcs
	CC		= gcc
	RM		= rm -rf
	CFLAGS	= -Wall -Wextra -Werror
	INCS	= libf.h

	$(NAME): §(OBJS) $(INCLUDE)
			$(LIBC) $(NAME) $(OJBS)

	all:	$(NAME)

	clean:
			$(RM) $(OBJS) $(BONUS_OBJS)

	fclean: clean
			$(RM) $(NAME)

	re:		fclean all

	.PHONY: all bonus clean fclean re .c .o