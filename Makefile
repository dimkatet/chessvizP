CFLAGS = -Wall -Werror 
OBJ = g++ -c $< -o $@ $(CFLAGS)

.PHONY: clean

all: bin build bin/cessviz.exe

bin/test.exe: build/main.o build/print_plain.o build/board_start.o build/board.o build/board_read.o
	g++ $^ -o $@ $(CFLAGS)

build/main.o: src/main.cpp
	$(OBJ)

build/print_plain.o: src/print_board_html.cpp src/print_board_html.h
	$(OBJ)


build/board.o: src/board.cpp src/board.h
	$(OBJ)

build/board_read.o: src/board_read.cpp src/board_read.h
	$(OBJ)


bin: 
	mkdir bin
build:
	mkdir build

clean:
	rm build/*.o
	rm bin/*.exe
