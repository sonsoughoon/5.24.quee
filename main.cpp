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

	T Top() // ���
	{
		return Database[Cursor];
	}
};


int main()
{
	//Stack<int> IntStack;

	//for (int i = 1; i <= 10; ++i)
	//{
	//	IntStack.Push(i * 1); //Ǫ���� �Է�
	//}

	//for (int i = 1; i <= 10; ++i)
	//{
	//	cout << IntStack.Top() << ",  "; //���� ���
	//	IntStack.Pop();		//����ġ
	//}


	quee<float> Intque;

	for (int i = 1; i <= 10; ++i)
	{
		Intque.Push(i * 1.1f); //Ǫ���� �Է�
	}


	Intque.Pop();
	//����ġ


	for (int i = 1; i <= 10; ++i)
	{
		cout << Intque.Top() << ",  "; //���� ���
		Intque.Pop2();

	}



	return 0;

}