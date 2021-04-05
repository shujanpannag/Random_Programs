#include<iostream>
using namespace std;

struct Node{
	int data;
	Node *link;
};

class stacks{
	Node *top;
	int len;
public:
	stacks(){
		top = new Node;
		top = NULL;
		len = 0;
	}	

	void push(int val){
		Node *temp = new Node;
		temp->data = val;
		temp->link = top;
		top = temp;
		len++;
	}

	void pop(){
		Node *temp;
		temp = top;

		if(len != 0){
		cout<<"Popped data is "<<temp->data<<endl;
		top = top->link;
		delete temp;
		len--;
		}else{
			cout<<"Stack is empty !!!"<<endl;
		}
	}
};

int main(){
	stacks s;
	s.push(1);
	s.push(2);
	s.push(3);
	s.pop();
	s.pop();
	s.pop();
	s.pop();
	return 0;
}