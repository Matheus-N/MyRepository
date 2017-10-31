#include <iostream>

using namespace std;

int main(){
    unsigned long long int x, total = 0;
    
    cin >> x;
    
    unsigned long long int v[x];
    
    for(int i = 0; i < x; i++){
        for(int j = (i + 1); j < x; j++){
            total++;
        } 
    }
    
    
    total -= x;
    
    cout << total << endl;
    
}