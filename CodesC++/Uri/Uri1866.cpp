#include <iostream>
#include <iomanip>

using namespace std;

int main (){
    cout << fixed << setprecision(1);
    
    int L;
    double v[12][12];
    double total = 0;
    
    char T;
    
    cin >> L;
    cin >> T;
    
    for(int i = 0; i < 12; i++){
        cin >> v[L][i];
    }
     

   
    for(int i = 0; i < 12; i++){
            total += v[L][i];
    }
    
    if(T == 'S'){      
        cout << total << endl;
    }     
        
        
    else{
        cout << (total / 12) << endl;    
        
        
    }    
        

    return 0;
}    