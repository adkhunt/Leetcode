#include<iostream>
#include<map>
#include<vector>

using namespace std;

vector<vector<string>> groupAnagrams(vector<string>& strs) {
    
  vector<vector<string>> res;
  
  if (strs.empty()){
    return res;
  }
    
  map<string, vector<string>> look_up;
    
  for (auto i : strs){
    look_up[_sort(i)].push_back(i);
  }
    
  for (auto i : look_up){
    res.push_back(i.second);
  }
    
  return res;
}

int main(int argc, char *argv[]){
    
  vector<string> str = {"eat","tea","tan","ate","nat","bat"};
    
  vector<vector<string>>result = groupAnagrams(str);
    
  for (auto i : result){
    for (auto j : i){
      cout << j << endl;
    }
      cout << "--------" << endl;
  }
    
    return 0;
}
