#include <iostream>
#include <string>
#include <stack>


using namespace std;

//#####						3,3
//#  ##						3,2	
//# # #						3,1
//#  P#						2,1
//#####						1,1
template<typename T>
class Stack
{
public:
	Stack() {}
	virtual ~Stack() {}

	T Database[10];

	int Cursor = -1;

	void Push(T A)
	{
		Database[++Cursor] = A;
	}

	void Pop()
	{
		Cursor--;
	}

	T Top()
	{
		return Database[Cursor];
	}
};

template<typename T>
class quee
{
public:
	quee() {}
	virtual ~quee() {}

	T Database[10];

	int Cursor = -1;

	void Push(T A)
	{
		Database[++Cursor] = A;
	}

	void Pop()
	{
		Cursor = 0;
	}

	void Pop2()
	{
		Cursor++;
	}

	T Top() // Ãâ·Â
	{
		return Database[Cursor];
	}
};


int main()
{
	
	quee<float> Intque;

	for (int i = 1; i <= 10; ++i)
	{
		Intque.Push(i * 1.1f); //Çª½¬´Â ÀÔ·Â
		cout << Intque.Top() << endl; //ÅéÀº Ãâ·Â
	}
	Intque.Pop();


	for (int i = 1; i <= 10; ++i)
	{
		Intque.Push(i * 1); //Çª½¬´Â ÀÔ·Â
		cout << Intque.Top() << endl; //ÅéÀº Ãâ·Â
	}
	Intque.Pop();
	


	return 0;

}