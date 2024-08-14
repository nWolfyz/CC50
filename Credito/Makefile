# Nome do executável
TARGET = main

# Compilador e flags
CC = gcc
CFLAGS = -Wall -Wextra -std=c11
LDFLAGS = -L/usr/local/lib -lcs50

# Lista de arquivos fonte
SRCS = main.c

# Regra para construir o executável
$(TARGET): $(SRCS)
	$(CC) $(CFLAGS) -o $(TARGET) $(SRCS) $(LDFLAGS)

# Regra para limpar os arquivos gerados
clean:
	rm -f $(TARGET)