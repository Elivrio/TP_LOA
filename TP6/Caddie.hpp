#ifndef CADDIE
#define CADDIE

#include "ArticleEnSolde.hpp"
#include <vector>

class Caddie {
private:
	vector<Article> content;

public:
	Caddie ();
	virtual ~Caddie ();

	void add(Article &a);

	string toString() const;

};

#endif
