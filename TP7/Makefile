CPP=g++ --std=c++11 -Wall


all :  Test run

Test : Vecteur.o Test.o
	$(CPP) -o work *.o

Test.o : Test.cpp
	$(CPP) -c Test.cpp

Vecteur.o : Vecteur.hpp Vecteur.cpp
	$(CPP) -c Vecteur.cpp

re :
	$(CPP) -c Test.cpp
	$(CPP) -o work *.o

run :
	./work

clean :
	rm *.o
	rm work
