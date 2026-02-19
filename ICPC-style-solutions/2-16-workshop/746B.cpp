// Credit: Zariah A.

#include <vector>
#include <iostream>
using namespace std;
//can also be solves with a double ended queue for better time complexity

int main(){
  int wordLen;
  cin >> wordLen;
  vector<char> v;//vector of chars representing the coded string
  
  for(int i = 0; i < wordLen; i++){
    char temp;
    cin >> temp;
    v.push_back(temp);
  }
  vector<char> decodedWord;

  /*starting from the end, take each letter of the coded string
  and insert it in the middle of the decoded string*/
  for(int i = wordLen -1 ; i >= 0; i--){
    int ind = decodedWord.size() /2;
    decodedWord.insert(decodedWord.begin() + ind , v[i]);
  }
  
  for(int i =0; i < decodedWord.size(); i++){
    cout << decodedWord[i];
  }
  cout << endl;
  return 0;
}
