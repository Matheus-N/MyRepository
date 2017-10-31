#include <iostream>

using namespace std;

int main(){
    string textIn, textOut;
    int x;
    cin >> x;
    
    for(;x > 0; x--){
    
        getline(cin, textIn);
        
        int j = 0;
        
        for(int i = (textIn.length() / 2); i >=0 ; i--){
            textOut[j] = textIn[i];
            j++;
        }
        
        
        for(int i = textIn.length(); i >= (textIn.length() / 2) ; i--){
            textOut[j] = textIn[i];
            j++;
        }        
        
        
            
        cout << textOut << endl;
    
    }
}
    
