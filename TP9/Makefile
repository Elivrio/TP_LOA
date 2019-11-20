CPP=g++ --std=c++11 -Wall


all :  Test run

Test : Test.o
	$(CPP) -o work *.o

Test.o : Pile.hpp Test.cpp
	$(CPP) -c Test.cpp


re :
	$(CPP) -c Test.cpp
	$(CPP) -o work *.o

run :
	./work

clean :
	rm *.o
	rm work
