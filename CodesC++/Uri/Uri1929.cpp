#include <iostream>

using namespace std;

int main(){
    int v[4];
    int cup = 0;
    
    
    for(int i = 0; i < 4; i++){
        cin >> v[i];
    }
    
    for(int i = 0; i < 4; i++){
        for(int j = (i + 1); j < 4; j++){
            if(v[i] > v[j]){
                cup = v[i];
                v[i] = v[j];
                v[j] = cup;
            }
        }
    }
    
    
    if(v[3] >= (v[0] + v[1]) && v[3] >= (v[1] + v[2]) && v[2] >= (v[0] + v[1])){
        cout << "N" << endl;
    }
    
    else{
        cout << "S" << endl;
    }
    
    
    return 0;
    
}