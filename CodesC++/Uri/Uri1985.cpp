#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int i;
    double cdg, qtd, total;
    
    cout << fixed << setprecision(2);
    
    cin >> i;
    
    while(i > 0){
        cin >> cdg >> qtd;
        
        if(cdg == 1001){
            total += qtd * 1.5;
        }
        else if(cdg == 1002){
            total += qtd * 2.5;
        }
        else if(cdg == 1003){
            total += qtd * 3.5;
        } 
        else if(cdg == 1004){
            total += qtd * 4.5;
        } 
        else if(cdg == 1005){
            total += qtd * 5.5;
        } 
        
        i--;
    }
    
    cout << total << endl;
    
    
    
}