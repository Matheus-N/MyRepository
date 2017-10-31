#include <iostream>

using namespace std;

int main(){
    int v[60];
    
    int num, i = 0, j;
    
    cin >> j;
    
    v[i] = 0;
    i++;
    v[i] = 1;
    i++;

    for(i; i < 70; i++){
        v[i] = v[i - 1] + v[i - 2];
    }
    
    while(j > 0){
    
        
        cin >> num;
        
        cout << "Fib(" << num << ") = " << v[num] << endl;
        
        j++;
    }
    
    
}