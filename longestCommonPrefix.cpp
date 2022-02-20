#include<iostream>
#include<vector>

using namespace std;

string subString(string str, string res){

	string result="";
	for (int i = 0 ; i < str.length() && i < res.length() ; ++i){
		if (str[i] != res[i]){
			break;
		}
		result.push_back(str[i]);
	}

	return result;
}

string longestPrefixString(vector<string> strs){

	string result = "";

	if (strs.empty()){
		return result;
	}

	result = strs[0];
	for (int i = 1 ; i < strs.size() ; ++i){
		result = subString(strs[i], result);
	}

	return result;
}

int main(){

	vector<string> strs = {"flower","flow","flight"};
	string res = longestPrefixString(strs);

	cout << "Common string : " << res << endl;

	return 0;
}
