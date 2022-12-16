#include<iostream>
using namespace std;

class CirQueue {
	// rear and front
	int rear, front;

	// the queue
	int* arr, size;

	public:
	CirQueue(int s) {
		rear = -1;
		front = -1;
		arr = new int[s];
		size = s;
	}

	bool isFull() {
		if(front==0 && rear==size-1 || (front==rear+1)) 
			return true;
		else 
			return false;
	}
	bool isEmpty() {
		if(front == -1)	
			return true;
		else
			return false;
	}

	void enQueue(int val) {
		if(isFull()) {
			cout<<"Full!";
			return;
		}
		if(isEmpty())
			front++;
		rear = (rear!=size-1)? rear+1:0;
		arr[rear] = val;
	}

	int deQueue() {
		if(isEmpty()) {
			cout<<"Empty!"<<endl;
			return int(NULL);
		}
		int item = arr[front];
		front = (front!=size-1)? front+1:0;
		return item;
	} 

	void display() {
		if(isEmpty()) {
			cout<<"Empty!"<<endl;
			return;
		}
		int i = front-1;
		do {
			i=(i!=size-1)? i+1:0;
			cout<<arr[i]<<" ";	
		} while(i!=rear);
	}

};
int main() {
	CirQueue q = CirQueue(10);

	q.enQueue(4);
	q.enQueue(4);
	q.enQueue(2);
	q.enQueue(3);
	q.enQueue(8);
	q.enQueue(4);
	q.enQueue(4);
	q.enQueue(2);
	q.enQueue(3);
	q.enQueue(8);

	q.deQueue();
	q.deQueue();
	q.deQueue();

	q.enQueue(3);

	
	q.display();
	return 0;
}
