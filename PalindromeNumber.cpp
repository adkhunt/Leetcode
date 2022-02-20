#include<iostream>

using namespace std;

int reverse_number(int num){

	if (num >= 0 && num < 10){
		return num;
	}

	int new_num = 0;

	while(num){
		int rem = num % 10;
		new_num = (new_num*10) + rem;
		num /= 10;
	}

	return new_num;
}

bool isPelindrome(int num){

	return num == reverse_number(num);
}

int main(){

	int num = 321;

	if (isPelindrome(num)){
		cout << num << " is pelindrome number." << endl;
	} else{
		cout << num << " is not pelindrome number." << endl;
	}

	return 0;
}
