#include <iostream>

using namespace std;

int main(){
    string txt;
    
    getline(cin, txt);
    
    if(txt.length() <= 140){
        cout << "TWEET" << endl;
    }
    
    else{
        cout << "MUTE" << endl;
    }
    
}