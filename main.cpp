#include <iostream>
#include <stack>
using namespace std;


template<typename T>
class Stack //스텍 만들어보기
{
public:
	Stack();
	virtual ~Stack();

	T DataBase[10];

	int Cursor = -1;

	void Push(T A)
	{
				//전의증가
		DataBase[++Cursor] = A;
	}

	T Pop()
	{
						//후위감소
		return DataBase[Cursor--];
	}
};

main()
{
	Stack<int> IntStack;

	for (int i = 1; i <= 10; ++i)
	{
		IntStack.Push(i * 1);
	}

	for (int i = 1; i <= 10; ++i)
	{
		cout << IntStack.Pop() << ", ";
	}

	//헤더파일써서 해본것
	stack<float> FloatStackSTL;
	for (int i = 1; i <= 10; ++i)
	{
		FloatStackSTL.pop();
	}

	for (int i = 1; i <= 10; ++i)
	{
		cout << FloatStackSTL.top() << ", ";
		FloatStackSTL.pop();
	}

	return 0;
}

