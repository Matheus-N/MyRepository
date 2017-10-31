#include <iostream>

using namespace std;

int main(){
    int x, total = 0;
    
    int y[5];
    
    cin >> x;
    

    for(int i = 0; i < 5; i++){
        cin >> y[i];
    }
    
    for(int i = 0; i < 5; i++){
        if(x == y[i]){
            total++;
        }
    }
    
    
    cout << total << endl;
    
}