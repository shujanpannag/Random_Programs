/*
 * Queue_linked_list.cpp
 *
 *  Created on: 03-Apr-2017
 *      Author: sharmila
 */

#include <iostream>
using namespace std;

struct node{
	int data;
	node *link;
};

class queue{
public:
	node *front, *rear;

public:
	queue();
	void insert(int num);// FI
	void display();
	int del();//FO
	~queue();
};

//Constructor for creating a first empty node
queue::queue(){
	front = rear = NULL;
}

//add a new node at the end of double linked list

void queue::insert(int num){
	node *temp;

	//Check first node
	temp = new node;
	temp->data = num;
	temp->link = NULL;

	if(front == NULL){
		front = rear = temp;
		//rear->link = front;            //circular queue
		return;
	}

	rear->link = temp;
	rear = rear->link;// rear = temp
	temp->link = front; //rear->link = front;			// Circular queue
}

void queue::display(){
	node *temp;
	temp = front;
	if(temp == NULL){ //Circular queue
		cout << "Queue is empty" <<endl;
		return ;
	}
	if(temp->link == front){
		cout << "Only one node in the list" << endl;
		cout << temp->data <<endl;
		return;
	}
	while(temp->link != front)
	{
		cout << temp->data << endl;
		temp = temp->link;
	}
	cout << temp->data << endl;

	/*if(temp == NULL){ // Queue
			cout << "Queue is empty" <<endl;
			return ;
		}
	while(temp != NULL)
		{
			cout << temp->data << endl;
			temp = temp->link;
		}*/
}

int queue::del(){

	if(front == NULL){
		cout << "\n Queue is Empty\n";
		return 0;
	}

	node *temp;
	int item;
	item = front->data;// 5
	temp = front;
	front = front->link;
	rear->link = front; //Circular queue
	delete temp;
	return item;
}


queue::~queue(){
	if (front == NULL)
		return;

	node *temp;
	while (front != NULL)
	{
		temp = front;
		front = front->link;
		delete temp;
	}
}

int main(){
	queue obj;
	obj.insert(30);
	obj.insert(0);
	obj.insert(55);
	obj.insert(60);
	obj.insert(70);
	obj.display();


	int i = obj.del();
	cout << "\n Extracted output" << i;

	i = obj.del();
		cout << "\n Extracted output" << i;

	i = obj.del();
	cout << "\n Extracted output" << i;

	i = obj.del();
	cout << "\n Extracted output" << i;

	i = obj.del();
	cout << "\n Extracted output" << i;

	i = obj.del();
	cout << "\n Extracted output" << i;

	return 0;

}



