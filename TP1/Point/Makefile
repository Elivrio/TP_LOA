CPP=g++ --std=c++11 -Wall


all :  point

point : point.o test.o
	@$(CPP) -o work Point.o Test.o

point.o : Point.cpp
	$(CPP) -c Point.cpp

test.o : Test.cpp Point.hpp
	$(CPP) -c Test.cpp

clean :
	rm *.o
	rm work
