#include <iostream>

using namespace std;

int main(){
    int x;
    string raj, sheldon;
    cin >> x;
    
    for(int t = 1; t <= x; t++){
        cin >> sheldon >> raj;
        if(sheldon == raj){
            cout << "Caso #" << t << ": De novo!" << endl;
            goto final;
        }
    
        if(sheldon == "tesoura"){
            if(raj == "Spock" || raj == "pedra"){
                cout << "Caso #" << t << ": Raj trapaceou!" << endl;
                goto final;
            }
                
             else{
                cout << "Caso #" << t << ": Bazinga!" << endl;
                goto final;
            }
        }
       
       
        if(sheldon == "papel"){
            if(raj == "tesoura" || raj == "lagarto"){
                cout << "Caso #" << t << ": Raj trapaceou!" << endl;
                goto final;
            }
                
             else{
                cout << "Caso #" << t << ": Bazinga!" << endl;
                goto final;
            }
        }
              
       
        if(sheldon == "pedra"){
            if(raj == "Spock" || raj == "papel"){
                cout << "Caso #" << t << ": Raj trapaceou!" << endl;
                goto final;
            }
                
             else{
                cout << "Caso #" << t << ": Bazinga!" << endl;
                goto final;
            }
        }
              
       
        if(sheldon == "lagarto"){
            if(raj == "tesoura" || raj == "pedra"){
                cout << "Caso #" << t << ": Raj trapaceou!" << endl;
                goto final;
            }
                
             else{
                cout << "Caso #" << t << ": Bazinga!" << endl;
                goto final;
            }
        }
              
       
       
        if(sheldon == "Spock"){
            if(raj == "lagarto" || raj == "papel"){
                cout << "Caso #" << t << ": Raj trapaceou!" << endl;
                goto final;
            }
                
             else{
                cout << "Caso #" << t << ": Bazinga!" << endl;
                goto final;
            }
        }
       
    
        final:;
    
    }
    
    
    
    return 0;
    
}