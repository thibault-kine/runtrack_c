CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRCS = main.c create_album.c ../../Jour03/Job02/my_itoa.c
TARGET = job4

all: $(TARGET)

$(TARGET):
	$(CC) $(CFLAGS) -o $@ $(SRCS)

run: $(TARGET)
	./$<