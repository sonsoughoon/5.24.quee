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

	T Top() // 출력
	{
		return Database[Cursor];
	}
};


int main()
{
	//Stack<int> IntStack;

	//for (int i = 1; i <= 10; ++i)
	//{
	//	IntStack.Push(i * 1); //푸쉬는 입력
	//}

	//for (int i = 1; i <= 10; ++i)
	//{
	//	cout << IntStack.Top() << ",  "; //톱은 출력
	//	IntStack.Pop();		//원위치
	//}


	quee<float> Intque;

	for (int i = 1; i <= 10; ++i)
	{
		Intque.Push(i * 1.1f); //푸쉬는 입력
	}


	Intque.Pop();
	//원위치


	for (int i = 1; i <= 10; ++i)
	{
		cout << Intque.Top() << ",  "; //톱은 출력
		Intque.Pop2();

	}



	return 0;

}