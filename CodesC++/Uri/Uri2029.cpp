#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    cout << fixed << setprecision(2);
    
    double b, h, d, v;
    
    while (!cin.eof()){
    
        cin >> v;
        cin >> d;
        
        b = ((d / 2) * (d / 2)) * 3.14;
        
        h = v / b;
        
        
        cout << "ALTURA = " << h << endl;
        cout << "AREA = " << b << endl;
    
    
    }
    
    
    
}