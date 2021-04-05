#include<iostream>
using namespace std;

struct Node{
	int data;
	Node *link;
};

class queue{
	Node *top, *bot;
	int len;
public:
	queue(){
		top = NULL;
        bot = NULL;
		len = 0;
	}	

	void push(int val){
        Node *temp = new Node;
		temp->data = val;
		temp->link = NULL;

		if(top == NULL){
            top = temp;
            bot = temp;
            len++;
        }
        else{
		    bot->link = temp;
            bot = temp;
		    len++;
        }
        cout<<"Que: "<<val<<endl;
	}

	void pop(){
		Node *temp;
        temp = top;

		if(len != 0){
            top = top->link;
            cout<<"Enque: "<<temp->data<<endl;
            delete temp;
            len--;
		}else{
			cout<<"Queue is empty !!!"<<endl;
		}
	}
};

int main(){
	queue q;
	q.push(3);
	q.push(2);
	q.push(1);
	q.pop();
	q.pop();
	q.pop();
	q.pop();
	return 0;
}