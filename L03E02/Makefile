CC=g++
CFLAGS=--std=c++11 

EXECUTABLE_NAME=vpl_execution

BUILD_DIR=./build
SRC_DIR=./src/entidades
INCL_DIR=./include

all: main
	$(CC) $(CFLAGS) $(BUILD_DIR)/*.o -o $(EXECUTABLE_NAME)

Vilao: Personagem
	$(CC) $(CFLAGS) -I $(INCL_DIR)/ -c $(SRC_DIR)/Vilao.cpp -o $(BUILD_DIR)/Vilao.o

Heroi: Personagem 
	$(CC) $(CFLAGS) -I $(INCL_DIR)/ -c $(SRC_DIR)/Heroi.cpp -o $(BUILD_DIR)/Heroi.o

Personagem: 
	$(CC) $(CFLAGS) -I $(INCL_DIR)/ -c $(SRC_DIR)/Personagem.cpp -o $(BUILD_DIR)/Personagem.o

main: Vilao Personagem Heroi
	$(CC) $(CFLAGS) -I $(INCL_DIR)/ -c src/main.cpp -o $(BUILD_DIR)/main.o
