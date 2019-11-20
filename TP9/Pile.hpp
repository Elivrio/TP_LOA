#ifndef PILE
#define PILE

#include <iostream>
#include <string>

using namespace std;

template <typename T> class Pile
{
	private:
		int size;
		int top;
		T* stacktab;

	public:
		Pile<T>(int a) : size(a), top(0)
		{
			if (a > 0)
			{
				stacktab = new T[a];
			}
		}
		Pile<T>():Pile<T>(32) {}

		bool isEmpty() const
		{
			return top == 0;
		}
		bool isFull() const
		{
			return top == size;
		}
		bool push(T tmp)
		{
			if (top != size)
			{
				stacktab[top] = tmp;
				top++;
				return true;
			}
			return false;
		}

		T pop()
		{
			T tmp = 0;
			if (top != 0)
			{
				tmp = stacktab[top-1];
				top--;
			}
			return tmp;
		}

		void print()
		{
			for (int i = 0; i < top; i++)
			{
				cout << stacktab[i] << ' ';
			}
			cout << '\n';
		}
};
#endif
