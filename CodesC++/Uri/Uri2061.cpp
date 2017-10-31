#include <iostream>

using namespace std;

int main(){
    int x, total = 0;
    
    string act;
    
    cin >> total >> x;
    
    while(x > 0){
        cin >> act;
        
        if(act == "fechou"){
            total++;
        }
        
        else{
            total--;
        }
        x--;
    }
     
     
     
    cout << total << endl; 
    
    
}