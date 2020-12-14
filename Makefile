# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: romain <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/12/14 18:08:38 by romain            #+#    #+#              #
#    Updated: 2020/12/14 19:12:51 by romain           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a

CC	= clang

CFLAGS	= -Wall -Wextra -Werror

RM	= rm -f

YELLOW	= \e[93m

RED	= \e[31m

MAGENTA	= \e[35m

BLUE	= \e[34m

CYAN	= \e[36m

GREEN	= \e[92m

info_script = "The Hacking Project is a Peer-Learning training based in FRANCE"
			
i ?= 0

SRCS	= ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c \
	  ft_isascii.c ft_isdigit.c ft_isprint.c ft_memmove.c ft_memccpy.c \
	  ft_memcmp.c ft_memcpy.c ft_memchr.c ft_memset.c ft_putchar_fd.c \
	  ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_substr.c \
	  ft_split.c ft_strtrim.c ft_strjoin.c ft_strmapi.c ft_strchr.c \
	  ft_strdup.c ft_strlcpy.c ft_strlcat.c ft_strlen.c ft_strrchr.c \
	  ft_strnstr.c ft_strncmp.c ft_tolower.c ft_toupper.c ft_itoa.c 

OBJS	= ${SRCS:.c=.o}

BSRCS	= ft_lstnew.c ft_lstadd_front.c ft_lstadd_back.c ft_lstsize.c \
	  ft_lstlast.c ft_lstclear.c ft_lstdelone.c ft_lstiter.c ft_lstmap.c

BOBJS	= ${BSRCS:.c=.o}

$(NAME):	${OBJS}
			ar rcs ${NAME} ${OBJS}

all:		${NAME}

clean:
		@${RM} ${OBJS} ${BOBJS}
		@printf '  🧼 $(YELLOW)Cleaning 🧼\n'
		@printf '  🧼 $(RED)Cleaning 🧼\n'
		@printf '  🧼 $(MAGENTA)Cleaning 🧼\n'
		@printf '  🧼 $(BLUE)Cleaning 🧼\n'
		@printf '  🧼 $(CYAN)Cleaning 🧼\n'
		@printf '  🧼 $(GREEN)Cleaning 🧼\n'

fclean:		clean
		@${RM} ${NAME}; \
			i=${i}; \
		while [ $${i} -lt $${#info_script} ]; do \
			sleep 0.0000000000000001; \
			echo -ne "${YELLOW}$${info_script:$$i:1}" | tr -d "%"; \
			i=`expr $$i + 1`; \
		done; \
		true

		
		
		@printf '🧽 $(YELLOW)HardCleaning 🧽\n'
		@printf '🧽 $(RED)HardCleaning 🧽\n'
		@printf '🧽 $(MAGENTA)HardCleaning 🧽\n'
		@printf '🧽 $(BLUE)HardCleaning 🧽\n'
		@printf '🧽 $(CYAN)HardCleaning 🧽\n'
		@printf '🧽 $(GREEN)HardCleaning 🧽\n'

re:			fclean all

bonus:		${BOBJS} ${OBJS}
			ar rcs ${NAME} ${OBJS} ${BOBJS}

.PHONY:		all clean fclean re bonus
