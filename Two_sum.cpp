#include<iostream>
#include<vector>
#include<map>

using namespace std;

pair<int, int> findSumElem(vector<int> arr, int sum){

	if (arr.empty()){
		cout << "Array can not be empty." << endl;
		return {0, 0};
	}

	map<int, int> look_up;

	for (int i=0 ; i < (int)arr.size() ; ++i){
		int second_elem = sum - arr[i];
		if (look_up.find(second_elem) != look_up.end()){
			//pair found
			auto res = look_up[second_elem];
			return {i, res};
		}

		look_up[arr[i]] = i;
	}

	return {0, 0};
}

int main(){

	vector<int> arr = {2,7,11,15};
	int target = 33;

	pair<int, int> result = findSumElem(arr, target);

	if (result.first == 0 && result.second == 0){
		cout << "No such pair exist." << endl;
	} else{
		cout << arr[result.first] << " + " << arr[result.second] << " = " << target << endl;
	}

	return 0;
}
