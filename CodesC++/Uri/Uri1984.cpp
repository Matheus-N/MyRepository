#include <iostream>

using namespace std;

int main(){
    
    string num;
    
    cin >> num;
  
    
    
    for(int i = 1; (num.length() - i) >= 1; i++){
        cout << num[num.length() - i];
    }
    
    cout << num[0];
    
    cout << endl;
    
}