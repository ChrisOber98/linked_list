CC = gcc
CFLAGS = -Wall -Wextra -Iinclude
SRC = main.c linked_list.c
OBJ = $(SRC:.c=.o)
TARGET = linked_list

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(TARGET)

run: $(TARGET)
	./$(TARGET)