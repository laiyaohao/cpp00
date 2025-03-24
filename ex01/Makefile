NAME := phonebook
CC := g++
CFLAGS := -Wall -Werror -Wextra -std=c++98
SRC_FOLDER := src

MAIN_FOLDER := ${addprefix ${SRC_FOLDER}, /main/}
MAIN_FILENAMES := main.cpp
MAIN_FILES := ${addprefix ${MAIN_FOLDER}, ${MAIN_FILENAMES}}

ADD_FOLDER := ${addprefix ${SRC_FOLDER}, /add/}
ADD_FILENAMES := addContact.cpp
ADD_FILES := ${addprefix ${ADD_FOLDER}, ${ADD_FILENAMES}}

SRC := ${MAIN_FILES} ${UTILS_FILES} ${ADD_FILES}
OBJS := ${SRC:.cpp=.o}

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
