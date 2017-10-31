#include <iostream>

using namespace std;

int main(){
    string x;
    int total = 0;
    
    cin >> x;
    
    for(int i = x.length(); i >= 0; i--){
        if(x[i] == '1'){
            total += 1;
        }
    }
    
    if(total % 2 == 0){
        cout << x << 0 << endl;
    }
    else{
        cout << x << 1 << endl;
    }
    
}