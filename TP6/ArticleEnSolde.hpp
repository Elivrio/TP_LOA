#ifndef ARTICLEENSOLDE
#define ARTICLEENSOLDE

#include "Article.hpp"

class ArticleEnSolde : public Article
{
private:
	int remise;

public:
	ArticleEnSolde (string n, double d, int r);
	ArticleEnSolde (string n, double d);
	ArticleEnSolde (Article a, int r);
	ArticleEnSolde (Article a);

	virtual ~ArticleEnSolde();

	virtual double getPrice() const;
	int getRemise() const;

	void setRemise(int i);

	string toString() const;

};
#endif
