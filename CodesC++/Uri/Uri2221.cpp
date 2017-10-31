#include <iostream>

using namespace std;

int main(){
    int ent, a1, a2, d1, d2, l1, l2, bonus, total1 = 0, total2 = 0;
    
    cin >> ent;
    
    for(; ent > 0; ent--){
        cin >> bonus;
        cin >> a1 >> d1 >> l1;
        cin >> a2 >> d2 >> l2;
        
        total1 = (a1 + d1) / 2;
        total2 = (a2 + d2) / 2;
        
        if(l1 % 2 == 0){
            total1 += bonus;
        }
        if(l2 % 2 == 0){
            total2 += bonus;
        }
        
        if(total1 > total2){
            cout << "Dabriel" << endl;
        }
        else if(total2 > total1){
            cout << "Guarte" << endl;
        }
        else if(total1 == total2){
            cout << "Empate" << endl;
        }    
            
        total1 = 0;
        total2 = 0;
        
    }
    
    
    
    
    
}
