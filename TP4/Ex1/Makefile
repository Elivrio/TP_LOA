CPP=g++ --std=c++11 -Wall


all :  Test

Test : BoxInt.o test.o
	$(CPP) -o work BoxInt.o Test.o

test.o : Test.cpp
	$(CPP) -c Test.cpp

BoxInt : BoxInt.o
	$(CPP) -o work BoxInt.o

BoxInt.o : BoxInt.hpp BoxInt.cpp
	$(CPP) -c BoxInt.cpp

re :
	$(CPP) -c BoxInt.cpp
	$(CPP) -c Test.cpp
	$(CPP) -o work BoxInt.o Test.o

clean :
	rm *.o
	rm work
