#include <iostream>

using namespace std;

int main(){
    int x;
    string text;
    int leds = 0;
    
    cin >> x;
    
    cin.ignore();
    
    for(int i = x; i > 0; i--){
        
        getline(cin, text);
        
        leds = 0;
        
        for(int j = 0; j < text.length(); j++){
            if(text[j] == '0' || text[j] == '6' || text[j] == '9'){
                leds += 6;
            }
   
            else if(text[j] == '1'){
                leds += 2;
            }   
   
   
            else if(text[j] == '2' || text[j] == '3' || text[j] == '5'){
                leds += 5;
            }   
   
            else if(text[j] == '4'){
                leds += 4;
            }   
   
            else if(text[j] == '7'){
                leds += 3;
            }   
   
            else if(text[j] == '8'){
                leds += 7;
            }   

        }
        
        cout << leds << " leds" << endl;
        
        
        
        
    }
    
    
    
    
    
    
}