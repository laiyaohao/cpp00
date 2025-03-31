NAME := megaphone
CC := c++
CFLAGS := -Wall -Werror -Wextra -std=c++98
FILES := megaphone.cpp
OBJS := ${FILES:.cpp=.o}

all: ${NAME}

clean: 
	rm -f ${OBJS}

fclean: clean
	rm -f ${NAME}

re: fclean all

${NAME}: ${OBJS}
	${CC} ${CFLAGS} ${OBJS} -o $@

%.o: %.cpp
	${CC} ${CFLAGS} -c $< -o $@

.PHONY: all clean fclean re
