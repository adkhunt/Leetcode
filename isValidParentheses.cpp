#include<iostream>
#include<stack>

using namespace std;

bool isValidParentheses(string str){

	stack<char> stc;
	char top;

	for (int i = 0 ; i < str.length() ; ++i){

		switch(str[i]){
			case '(':
			case '{':
			case '[':
				stc.push(str[i]);
				break;
			case ')':
			case '}':
			case ']':
				if (stc.empty()){
					return false;
				}
				top = stc.top();
				stc.pop();
				if ((str[i] == '(' && top != ')') ||
					 (str[i] == '{' && top != '}') ||
					 (str[i] == '[' && top != ']')){
					return false;
				}
				break;
			default:
				continue;
		}
	}

	return stc.empty();
}

using namespace std;

int main(){

	string s = "()[]{}";
	if (isValidParentheses(s)){
		cout << "Given parentheses are balanced." << endl;
	} else{
		cout << "Given parentheses are unbalanced." << endl;
	}

	return 0;
}
