CC = gcc
CFLAGS = -Iinclude -Wall

SRCDIR = src
INCDIR = include
BINDIR = bin

# List your source files here (excluding main.c)

SRC = $(wildcard $(SRCDIR)/*.c)

# Generate a list of object files from source files
OBJ = $(patsubst $(SRCDIR)/%.c, $(BINDIR)/%.o, $(SRC))

# The final executable
TARGET = $(BINDIR)/calc

all: $(TARGET)

$(TARGET): $(OBJ) $(SRCDIR)/main.c
	$(CC) $(CFLAGS) -o $@ $^

# Rule to compile each source file into an object file

$(BINDIR)/%.o: $(SRCDIR)/%.c $(INCDIR)/%.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(BINDIR)/*.o $(TARGET)
