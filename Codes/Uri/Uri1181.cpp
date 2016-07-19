#include <iostream>
#include <iomanip>

using namespace std;

int main (){
    cout << fixed << setprecision(1);
    
    double v[12][12];
    double total = 0;
    int j = 0;
    char tipo;
    
    cin >> tipo;
    
    for(int i = 0; i < 12; i++){
        for(int j = 0; j < 12; j++){
            cin >> v[i][j];
        }
    }
     
     
     
   
    for(int i = 0; i < 6; i++){
        int j = 12 - i;
        for(; j < 12; j++){
            total += v[i][j];
        }
    }


    for(int i = 6; i < 12; i++){
        int j = i + 1;
        for(; j < 12; j++){
            total += v[i][j];
        }
    }    







            
    
    
    if(tipo == 'S'){      
        cout << total << endl;
    }     
        
        
    else{
        cout << (total / 30) << endl;    
        
        
    }    
        

    return 0;
}    
