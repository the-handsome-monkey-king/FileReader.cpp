# makefile
#
# @author Ryan Morehouse
# license MIT

OBJ = FileReader.o test.o
DEPS = FileReader.o 
FLAGS = -Wall
CC = g++
.SUFFIXES: .cpp .o

.cpp.o:
	g++ -o $@ $^ $(FLAGS)

all: $(OBJ)

FileReader.o: FileReader.cpp
	$(CC) -c -o $@ $< $(FLAGS)

test.o: test.cpp $(DEPS)

clean:
	\rm -f *.o
