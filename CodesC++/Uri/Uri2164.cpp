#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main(){
    double n, result;
    
    cin >> n;    
    
    result = (((1.618 * n) - (-0.618 * n)) / 2.236); 
    
    cout << fixed << setprecision(1);
    
    cout << result << endl;
    
    
    
}