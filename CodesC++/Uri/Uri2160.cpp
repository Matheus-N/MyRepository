#include <iostream>

using namespace std;

int main (){
    string txt;
    
    getline(cin, txt);
    
    if(txt.length() > 80){
        cout << "NO" << endl;
    }
    
    else{
        cout << "YES" << endl;
    }
    

    
}