#include <bits/stdc++.h>
using namespace std;

class Queue
{
	int f, r, cap, *arr;
	public:
		Queue(int n = 3)
		{
			f = r = -1;
			cap = n;
			arr = new int[cap];		
		}
		void enQueue();
		int deQueue();
		bool isEmpty();
		bool isFull();
		int size();
		void printQueue();
};

bool Queue :: isEmpty()
{
	return f == -1;
}

bool Queue :: isFull()
{
	return (r + 1) % cap == f;
}

void Queue :: enQueue()
{
	if(isFull())
	{
		cout << "Overflow!\n Delete some items to continue..." << endl;
		exit(0);
	}
	int x;
	cin >> x;
	if(r == -1)
	{
		f = 0;
	}
	r = (r + 1) % cap;
	arr[r] = x;
}

int Queue :: deQueue()
{
	if(isEmpty())
	{
		cout << "Underflow!\n Add some items" << endl;
		return -1;
	}
	int data = arr[f];
	f = (f + 1) % cap;
	return data;
}

int Queue :: size()
{
	if(isEmpty())  return 0;
	else if(isFull())  return cap;
	else  return (cap - f + r + 1) % cap ;
}

void Queue :: printQueue()
{
	for(int i = f%cap; i <= r%cap; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

int main()
{
	Queue q;
	
	q.enQueue();
	q.enQueue();
	q.enQueue();
	
	q.printQueue();
	cout << q.size() << endl;
	
	cout << "Element deleted from Queue is: " << q.deQueue() << endl;
	cout << q.size() << endl;
	q.printQueue();
	
	q.enQueue();

	cout << q.size() << endl;
	q.printQueue();
	
	cout << "Element deleted from Queue is: " << q.deQueue() << endl;
	
	cout << q.size() << endl;
	q.printQueue();
}
