CPP=g++ --std=c++11 -Wall


all :  Test

Test : Calendar.o Date.o Horloge.o test.o
	$(CPP) -o work Calendar.o Test.o Horloge.o Date.o

test.o : Test.cpp
	$(CPP) -c Test.cpp

Calendar : Calendar.o
	$(CPP) -o work Calendar.o

Calendar.o : Calendar.hpp Calendar.cpp
	$(CPP) -c Calendar.cpp

Date : Date.o
	$(CPP) -o work Date.o

Date.o : Date.hpp Date.cpp
	$(CPP) -c Date.cpp

Horloge : Horloge.o test.o
	$(CPP) -o work Horloge.o

Horloge.o : Horloge.hpp Horloge.cpp
	$(CPP) -c Horloge.cpp


re :
	$(CPP) -c Horloge.cpp
	$(CPP) -c Test.cpp
	$(CPP) -o work Horloge.o Test.o

clean :
	rm *.o
	rm work
