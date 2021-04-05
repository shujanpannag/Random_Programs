#include<iostream>
#include<string.h>
using namespace std;

struct Node{
	char data;
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

	void push(char val){
		Node *temp = new Node;
		temp->data = val;
		temp->link = top;
		top = temp;
		len++;
		return;
	}

	void pop(){
		Node *temp;
		temp = top;

		if(len != 0){
		cout<<temp->data<<endl;
		top = top->link;
		delete temp;
		len--;
		}else{
			return;
		}
	}

	int prior(char t){
		if(t == '^'){
			return 3;
		}
		else if(t == '*' || t == '/'){
			return 2;
		}
		else if(t == '+' || t == '-'){
			return 1;
		}
		else{
			return 0;
		}
	}
	
	int top_p(){
		return prior(top->data);
	}
};

int prior(char t){
	if(t == '^'){
		return 3;
	}
	else if(t == '*' || t == '/'){
		return 2;
	}
	else if(t == '+' || t == '-'){
		return 1;
	}
	else{
		return 0;
	}
}

bool ls(char ar[], char k, int n){
    for(int i =0; i<n;i++){
        if(k == ar[i]){
            return true;
        }
    }
    return false;
}

void convo(string t, int n){
	char op[] = {'^','*','/','+','-'};
	stacks ops;
	int o = 0;

	for(int i; i<n; i++){
		cout<<t[i]<<endl;
		if(ls(op,t[i],5)){
			if(ops.top_p() >= ops.prior(t[i])){
				ops.pop();
				ops.push(t[i]);
			}
			else{
				ops.push(t[i]);
				o++;
			}
		}else{
			cout<<t[i];
		}
	}

	for(int i=0;i<o;i++){
		ops.pop();
	}
}

int main(){
	string test = "2*3/2-1+5*3"; 
	convo(test, test.length());
	return 0;
}