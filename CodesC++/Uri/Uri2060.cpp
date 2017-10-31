#include <iostream>

using namespace std;

int main(){
    int tam, mult2 = 0, mult3 = 0, mult4 = 0, mult5 = 0;
    
    cin >> tam;
    
    int num[tam];
    
    for(int i = 0; i < tam; i++){
        cin >> num[i];
    }
    
    for(int i = 0; i < tam; i++){
        if(num[i] % 2 == 0){
            mult2++;
        }
        if(num[i] % 3 == 0){
            mult3++;
        }

        if(num[i] % 4 == 0){
            mult4++;
        }
        
        if(num[i] % 5 == 0){
            mult5++;
        }        
    }
    
    cout << mult2 << " Multiplo(s) de 2" << endl;
    cout << mult3 << " Multiplo(s) de 3" << endl;
    cout << mult4 << " Multiplo(s) de 4" << endl;
    cout << mult5 << " Multiplo(s) de 5" << endl;    
     
    
    
}