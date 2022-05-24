#include <iostream>
#include <stack>
using namespace std;


template<typename T>
class Stack //���� ������
{
public:
	Stack();
	virtual ~Stack();

	T DataBase[10];

	int Cursor = -1;

	void Push(T A)
	{
				//��������
		DataBase[++Cursor] = A;
	}

	T Pop()
	{
						//��������
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

	//������ϽἭ �غ���
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

