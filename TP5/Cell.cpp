#include "Cell.hpp"

Cell::Cell(int i): content(i), next(nullptr), previous(nullptr) {}

int Cell::get_content() const
{
	return content;
}

Cell* Cell::get_next() const
{
	return next;
}

Cell* Cell::get_previous() const
{
	return previous;
}

void Cell::set_content(int i)
{
	content = i;
}

void Cell::connect(Cell* c1, Cell* c2)
{
	if (c1 != nullptr)
	{
		if (c1->next != nullptr)
		{
			c1->next->previous = nullptr;
		}
		c1->next = c2;
	}
	if (c2 != nullptr)
	{
		if (c2->previous != nullptr)
		{
			c2->previous->next = nullptr;
		}
		c2->previous = c1;
	}
}

void Cell::connect(Cell* new_next)
{
	if (next != nullptr)
	{
		next->previous = nullptr;
	}
	next = new_next;
	if (new_next != nullptr)
	{
		new_next->previous = this;
	}
}

void Cell::disconnect_next()
{
	if (next != nullptr)
	{
		next->previous = nullptr;
		next = nullptr;
	}
}

void Cell::disconnect_previous()
{
	if (previous != nullptr)
	{
		previous->next = nullptr;
		previous = nullptr;
	}
}

void Cell::pretty_print(Cell* head)
{
	std::cout << "[";
	if (head != nullptr)
	{
		head->print_it();
	}
	std::cout << "]" << '\n';
}

void Cell::print_it() const
{
	std::cout << content << "";
	if (next != nullptr)
	{
		std::cout << ", ";
		next->print_it();
	}
}
