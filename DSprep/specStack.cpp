#include<bits/stdc++.h>
#define fl(a,b,c) for(a=b;a<c;a++)
#define flr(a,b,c) for(a=b-1;a>=0;a--)
#define MOD 10000000007

using namespace std;

class Stack
{
	static const int max=100;
	int arr[max];
	int top;
public:
	Stack(){
		top=-1;
	}
	bool isEmpty();
	bool isFull();
	int pop();
	void push(int x);
};
bool Stack::isEmpty()
{
	if(top==-1)
		return true;
	return false;
}
bool Stack::isFull()
{
	if(top==max-1)
		return true;
	return false;
}
int Stack::pop()
{
	if(isEmpty())
	{
		cout<<"Stack Underflow";
		abort();
	}
	int x=arr[top];
	top--;
	return x;
}
void Stack::push(int x)
{
	if(isFull())
	{
		cout<<"Stack Overflow\n";
		abort();
	}
	top++;
	arr[top]=x;
}
class SpecialStack:public Stack
{
	Stack min;
public:
	int pop();
	void push(int x);
	int getMin();
};
void SpecialStack::push(int x)
{
	if(isEmpty()==true)
	{
		Stack::push(x);
		min.push(x);
	}
	else
	{
		Stack::push(x);
		int y=min.pop();
		min.push(y);
		if(x<y)
			min.push(x);
		else
			min.push(y);
	}
}
int SpecialStack::pop()
{
	int x=Stack::pop();
	min.pop();
	return x;
}
int SpecialStack::getMin()
{
	int x=min.pop();
	min.push(x);
	return x;
}
int main()
{
		SpecialStack s;
		s.push(10);
		s.push(20);
		s.push(30);
		cout<<s.getMin()<<endl;
		s.push(5);
		cout<<s.getMin();
		return 0;
}