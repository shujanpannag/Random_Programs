#include<iostream>
#include<string>
using std::string;
using namespace std;

int prior(char t){
	if(t == '^'){
		return 5;
	}
	else if(t == '*' || t == '/'){
		return 4;
	}
	else if(t == '+' || t == '-'){
		return 3;
	}
	else if(t == '('){
		return 2;
	}
	else if(t == ')'){
		return 1;
	}
	else{
		return 0;
	}
}

struct Node{
	char data;
	Node *link;
};

class stacks{
	Node *top;
	int len;
public:
	stacks(){
		top = NULL;
		len = 0;
	}	

	void push(char val){
		Node *temp = new Node;
		temp->data = val;
		temp->link = top;
		top = temp;
		len++;
	}

	void pop(){
		Node *temp = top;

		if(len != 0){
		cout<<temp->data;
		top = top->link;
		delete temp;
		len--;
		}else{
            return;
		}
	}
    
    int top_p(){
        if(len != 0){
        int r = prior(top->data);
		return r;
        }
        else{
            return 0;
        }
	}
};

bool ls(char k){
    char op[] = {'^','*','/','+','-','(',')'};
    for(int i=0; i<7; i++){
        if(k == op[i]){
            return true;
        }
    }
    return false;
}

void convo(string t, int n){
	stacks ops;
	int o = 0;

	for(int i = 0; i<n; i++){
		if(ls(t[i])){
			if((ops.top_p() >= prior(t[i])) && (prior(t[i]) > 1)){
				ops.pop();
				ops.push(t[i]);
			}
			if(prior(t[i]) == 1){
				while(ops.top_p() != 2){
					ops.pop();
					o-=1;
				}
				ops.pop();
				o-=1;
			}
			else{
				ops.push(t[i]);
				o+=1;
			}
		}else{
			cout<<t[i];
		}
	}
	for(int i=0;i<o;i++){
		ops.pop();
	}

    return;
}

int main(){
	string test = "2*3/2-1+5*3"; 
	convo(test, test.length());
    return 0;
}