#include <iostream>

using namespace std;

int main(){
    int l, p, x, posl = 0, posp = 0;
    
    cin >> l >> p;
    
    int m[l][p];
    
    for(int i = 0; i < l; i++){
        for(int j = 0; j < p; j++){
            cin >> m[i][j];
        }
    }
    
    for(int i = 0; i < l; i++){
        for(int j = 0; j < p; j++){
            if(m[i][j] == 42 && m[i][j + 1] == 7 && m[i][j - 1] == 7 && m[i - 1][j - 1] == 7 && m[i - 1][j] == 7 && m[i - 1][j + 1] == 7 && m[i + 1][j - 1] == 7 && m[i + 1][j] == 7 && m[i + 1][j + 1] == 7){
                posl = i + 1;
                posp = j + 1;
            }
        }
    }    
    
    cout << posl << " " << posp << endl;
}