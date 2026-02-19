// Credit: Zariah A.
#include <iostream>
#include <string>

using namespace std;

int main() {
    //read in string
    string remix;
    cin >> remix;
    
    bool space = false;//whether a space is needed(whether WUB is preceeded by a word or another WUB)

    //traverse string
    for(int i = 0; i < remix.size(); i++){
        //if WUB is found skip to next char
        //if WUB comes after a word print a space
        if(remix[i] == 'W' && remix[i+1] == 'U' && remix[i+2] == 'B'){ 
            i+=2;
            if(space){
                cout << " ";
            }
            space = false;
        }
        else{
            cout << remix[i];
            space = true;
        }
    }
    return 0;
}
