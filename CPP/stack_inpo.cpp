#include<iostream>
#include<stack>
using std::stack;
using namespace std;

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
		return -1;
	}
}

void convert(string s){
    stack<char> ops;
    ops.push('#');
    int len = s.length();
    string res;
    
    for(int i=0;i<len;i++){
        if((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z')){
            res += s[i];
        }
        else if(s[i] == '('){
            ops.push('(');
        }
        else if(s[i] == ')'){
            while(ops.top() != '#' && ops.top() != '('){
                res += ops.top();
                ops.pop();
            }
            if(ops.top() == '('){
                ops.pop();
            }
        }
        else{
            while(prior(s[i] <= prior(ops.top())) && ops.top() != '#'){
                res += ops.top();
                ops.pop();
            }
            ops.push(s[i]);
        }
    }

    while(ops.top() != '#'){
        res += ops.top();
        ops.pop();
    }
    cout<<res<<endl;
}

int main(){
    string a = "a+b*(c^d-e)^(f+g*h)-i";
    convert(a);
    return 0;
}