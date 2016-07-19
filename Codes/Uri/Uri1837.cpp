#include <iostream>

using namespace std;

int main(){
    int a, b, q, r;
    
    cin >> a >> b;
    
    r = a % b;
    q = a / b;
    
    cout << q << " " << r << endl;
    
    return 0;
}