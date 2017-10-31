#include <iostream>

using namespace std;

int main (){
    int x;

    cin >> x;
    
    while(x > 0){
        int h, m, p;
        
        cin >> h >> m >> p;
        
        if(h < 10){
            cout << 0;
        }
        
        cout << h;
        
        cout << ":";
        
        if(m < 10){
            cout << 0;
        }
        
        cout << m;
        
        if(p == 1){
            cout << " - A porta abriu!" << endl;
        }
        
        else{
            cout << " - A porta fechou!" << endl;
        }
        
        x--;
    }
    
}