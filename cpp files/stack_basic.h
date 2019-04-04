#include<iostream>
using namespace std;
#define SIZE 20
class Stack {
private:
	int tos;
	int st[SIZE];
	//void displayStack();
public:
	void init();
	void push(int i);
	int pop();
	void displayStack();
};
void Stack::init()
{
	tos = 0;
}
void Stack::push(int i) {
	if (tos == SIZE) {
		cout << "Stack is full" << endl;
		return;

	}
	st[tos] = i;
	tos++;
	   	 }
int Stack::pop() {
	if (tos == 0)
	{
		cout << "stack is empty" << endl;
		return 0;
	}
	tos--;
	return st[tos];
}
void Stack::displayStack()
{
	for (int p = 0; p <5; p++)
	{
		cout<<st[p] <<endl;
	}
}

int main()
{
	Stack myStack1, myStack2;
	myStack1.init();
	myStack2.init();

	myStack1.push(1);
	myStack1.push(2);
	myStack1.push(3);
	myStack2.push(4);
	//myStack1.pop();
	//myStack2.pop();
	//for(st)

	myStack1.displayStack();

	return 0;
}