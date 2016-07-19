#include <iostream>

using namespace std;

int main(){
    int x;
    
    cin >> x;
    
    string msg = "LIFE IS NOT A PROBLEM TO BE SOLVED";
    
    for(int i = 0; i < x; i++){
        cout << msg[i];
    }
    
    cout << endl;
    return 0;
    
}