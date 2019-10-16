CPP=g++ --std=c++11 -Wall


all :  Test

Test : Aeroport.o Avion.o Personne.o Siege.o test.o
	$(CPP) -o work Aeroport.o Avion.o Personne.o Siege.o Test.o

test.o : Test.cpp
	$(CPP) -c Test.cpp

Aeroport : Aeroport.o
	$(CPP) -o work Aeroport.o

Aeroport.o : Aeroport.hpp Aeroport.cpp
	$(CPP) -c Aeroport.cpp

Avion : Avion.o
	$(CPP) -o work Avion.o

Avion.o : Avion.hpp Avion.cpp
	$(CPP) -c Avion.cpp

Personne : Personne.o
	$(CPP) -o work Personne.o

Personne.o : Personne.hpp Personne.cpp
	$(CPP) -c Personne.cpp

Siege : Siege.o
	$(CPP) -o work Siege.o

Siege.o : Siege.hpp Siege.cpp
	$(CPP) -c Siege.cpp
re :
	$(CPP) -c Aeroport.cpp
	$(CPP) -c Siege.cpp
	$(CPP) -c Avion.cpp
	$(CPP) -c Personne.cpp
	$(CPP) -c Test.cpp
	$(CPP) -o work Aeroport.o Avion.o Personne.o Siege.o Test.o

clean :
	rm *.o
	rm work
