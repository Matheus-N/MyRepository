#include <iostream>

using namespace std;

int main(){
    int a, b, c;
    
    cin >> a >> b >> c;
    
    if(a > b && b <= c){
        cout << ":)" << endl;
        return 0;
    }
    
    else if(a < b && b >= c){
        cout << ":(" << endl;
        return 0;
    }    
    
    else if(a < b && b < c && (b - a) > (c - b)){
        cout << ":(" << endl;
        return 0;
    }    
    
    else if(a < b && b < c && (b - a) <= (c - b)){
        cout << ":)" << endl;
        return 0;
    }        
  
    else if(a > b && b > c && (a - b) > (b - c)){
        cout << ":)" << endl;
        return 0;
    }      
  
    else if(a > b && b > c && (a - b) <= (b - c)){
        cout << ":(" << endl;
        return 0;
    }   
  
    else if(a == b && b >= c){
        cout << ":(" << endl;
        return 0;        
    }  
  
    else if(a == b && b < c){
        cout << ":)" << endl;
        return 0;        
    }  
  
    
}