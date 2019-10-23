CPP=g++ --std=c++11 -Wall


all :  Test run

Test : Article.o ArticleEnSolde.o Caddie.o Test.o
	$(CPP) -o work *.o

Test.o : Test.cpp
	$(CPP) -c Test.cpp

Article.o : Article.hpp Article.cpp
	$(CPP) -c Article.cpp

ArticleEnSolde.o : ArticleEnSolde.hpp ArticleEnSolde.cpp
	$(CPP) -c ArticleEnSolde.cpp

Caddie.o : Caddie.hpp Caddie.cpp
	$(CPP) -c Caddie.cpp

re :
	$(CPP) -c Article.cpp
	$(CPP) -c ArticleEnSolde.cpp
	$(CPP) -c Test.cpp
	$(CPP) -c Caddie.cpp
	$(CPP) -o work *.o

run :
	./work

clean :
	rm *.o
	rm work
