#include <iostream>

using namespace std;



class queueLink{
	public:
		queueLink();
		~queueLink();
		bool IsEmpty();
		bool IsFull();
		void Enqueue(int item);
		void Dequeue(int & item);
		void MakeEmpty();
		void DisplayQueue();

	private:
		struct node{
			int value;
			node * next;
		};
		node * front;
		node * rear;
};

queueLink::queueLink(){
	front = NULL;
	rear = NULL;
}

queueLink::~queueLink(){
	MakeEmpty();
}

void queueLink::MakeEmpty(){
	node * temp;

	while(front != NULL){
		temp = front;
		front = front->next;
		delete temp;
	}

	rear = NULL;
}

bool queueLink::IsEmpty(){
	if(front == NULL){
		cout << "IsEmpty: True"<<endl;
		return true;
	}else{
		cout << "IsEmpty: False"<<endl;
		return false;
	}
}

bool queueLink::IsFull(){
	node * temp = new node;
	
	if(temp == NULL)
		return true;
	else{
		delete temp;
		return false;
	}
}

void queueLink::Enqueue(int item){
	node * temp = new node;
	temp->value = item;
	temp->next = NULL;

	if(rear == NULL){
		front = temp;
	}else{
		rear->next = temp;
	}

	rear = temp;

	DisplayQueue();
}

void queueLink::Dequeue(int & item){
	node * temp;

	temp = front;
	item = front->value;
	front = front->next;
	if(front == NULL)
		rear = NULL;
	delete temp;

	DisplayQueue();
}

void queueLink::DisplayQueue(){
	node * temp;

	int item;
	cout << "Current elements of Queue: ";
	temp = front;
	while(temp != NULL){
		item = temp->value;
		cout << item <<" ";
		temp = temp->next;
	}
	cout<<endl;
}

void main(){
	queueLink * queue = new queueLink;

	for(int i = 0;i<5;i++){
		queue->Enqueue(i);
	}
	
	queue->IsEmpty();
}