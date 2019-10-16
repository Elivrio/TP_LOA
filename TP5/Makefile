CPP=g++ --std=c++11 -Wall


all :  Test

Test : Cell.o test.o
	$(CPP) -o work Cell.o Test.o

test.o : Test.cpp
	$(CPP) -c Test.cpp

Cell : Cell.o
	$(CPP) -o work Cell.o

Cell.o : Cell.hpp Cell.cpp
	$(CPP) -c Cell.cpp

re :
	$(CPP) -c Cell.cpp
	$(CPP) -c Test.cpp
	$(CPP) -o work Cell.o Test.o

clean :
	rm *.o
	rm work
