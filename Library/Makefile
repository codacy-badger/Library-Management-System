all: all.out 
all:./all.out
all.out : book.o operations.o library_test.o
	g++ $^ -o $@ -lgtest -lgtest_main -lpthread
library_test.o : test/library_test.cpp 
	g++ $< -c
operations.o : src/operations.cpp inc/operations.h 
	g++ $< -c    
book.o : src/book.cpp inc/book.h
	g++ $< -c
run:
	./all.out
clean:
	rm -rf *.o *.out
