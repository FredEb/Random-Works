#include <iostream>

using namespace std;

class node{
	public:
		char data; // This is the actual data
		node * next; // Location of the next element in the linked list
		node(char c);
};

node::node(char c){
	data = c;
	next = NULL;
}

class linkedlist{
	public:
		//Create
		void add(char c);
		linkedlist();
		//Read
		void find(int position);
		void printlist(char c);
		//Update
		void change(int position, char newData);
		//Delete
		void remove(int position);
	private:
		int size; // Keep track of how many things that have been added to the list
		node * list; // This is the actual linked list, this is where the data actually is going to go
};

linkedlist::linkedlist(){
	size = 0; // Nothing has been added to the linked list
	list = NULL; // NULL marker begins in the first position
}

void linkedlist::add(char c){
	if(size = 0){ // Adding the first element into the linked list
		list = new node(c); // Because the node constructor sets next to null the net effect is moving the NULL down a position
	}
	else{ 
		// Adding some later element into the linked list
		//Create a temporary copy of the linked list, use this copy to move throgh the linked list
		node * temp = list;

		//find the end of the list
		while(temp->next != NULL){
			temp = temp->next;
		}

		temp->next = new node(c);
	}
	size++;
}

void linkedlist::printlist(char c){
	if(size == 0){ 
		cout << "List is empty" << endl;
	}
	else{ 

		node * temp = list;

		while(temp->next != NULL){
			cout << temp->data << endl;
			temp = temp->next;
		}

		temp->next = new node(c);
	}
}

void main(void){
	/*
		For pointers we can not use dots to refer to nodes
		Ex: 
			string s;
			s.length();

			string * t;
			t->length();
	*/
	linkedlist * l = new linkedlist();

	l->add('s');
	l->add('A');
	l->add('Y');
	l->add('T');
	
}