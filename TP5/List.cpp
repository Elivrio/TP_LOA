#include "List.hpp"

List::List(Cell* h, Cell* t):head(h), tail(t)
{
	if (head == nullptr) len = 0;

	Cell* current = head;
	len = 1;
	while (current != nullptr)
	{
		len++;
		current = current->get_next();
	}
}
List::List():head(nullptr), tail(nullptr) {}

int List::length()
{
	return len;
}

int List::get(int idx)
{
	if (idx < len)
	{
		Cell* current = head;
		for (size_t i = 0; i < idx; i++) {
			current = current->get_next();
		}
		return current->get_content();
	}
	return (-1);
}
