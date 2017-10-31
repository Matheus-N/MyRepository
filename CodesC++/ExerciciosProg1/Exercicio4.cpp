#include <iostream>

using namespace std;

int main(){
    int tempo, segundos = 0, minutos = 0, horas = 0;
    
    cout << "Informe o tempo de duracao do evento em segundos" << endl;
    
    cin >> tempo;
    
    for(; tempo > 3600;){
        horas += 1;
        tempo -= 3600;
    }
    
    for(; tempo > 60;){
        minutos += 1;
        tempo -= 60;
    }
    
    segundos = tempo;
    
    cout << "O tempo de duracao do evento: " << horas << " horas, " << minutos << " minutos, " << segundos << " segundos." << endl;
    return 0;
    
    
}