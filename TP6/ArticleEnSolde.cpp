#include "ArticleEnSolde.hpp"

ArticleEnSolde::ArticleEnSolde(string n, double d, int r) : Article(n, d), remise(r % 100) {}
ArticleEnSolde::ArticleEnSolde(string n, double d) : Article(n, d), remise(10) {}

ArticleEnSolde::ArticleEnSolde(Article a, int r) : Article(a), remise(r) {}
ArticleEnSolde::ArticleEnSolde(Article a) : Article(a), remise(10) {}

double ArticleEnSolde::getPrice() const
{
	return price-((price*remise)/100);
}

int ArticleEnSolde::getRemise() const
{
	return remise;
}

void ArticleEnSolde::setRemise(int i)
{
	remise = i;
}

string ArticleEnSolde::toString() const
{
	return name + " : " + to_string(getPrice()) + "€";
}

ArticleEnSolde::~ArticleEnSolde()
{
	std::cout << "DESTRUUUCTIIIOOOOOOOOON" << '\n';
}
