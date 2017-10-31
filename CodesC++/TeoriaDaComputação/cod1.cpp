#include <iostream>
#include <string>


using namespace std;


void q0(string, int);
void q1(string, int);
void q2(string, int);
void q3(string, int);


int main(){
    string ent;

    getline(cin, ent);
        
    int i = 0;
    
    q0(ent, i);
    
    
    


}





void q0(string ent, int i){
    if(i > ent.length()){
        cout << "0";
        
    }
    
    else if(ent[i] == 'a'){
        i++;
        q1(ent, i);
    }
    else if(ent[i] == 'b'){
        i++;
        q2(ent, i);
    }
}

void q1(string ent, int i){
    if(i > ent.length()){
        cout << "0";
        
    }
    
    else if(ent[i] == 'a'){
        i++;
        q3(ent, i);
    }
    else if(ent[i] == 'b'){
        i++;
        q2(ent, i);
    }
}

void q2(string ent, int i){
    if(i > ent.length()){
        cout << "0";
        
    }
    
    else if(ent[i] == 'a'){
        i++;
        q1(ent, i);
    }
    else if(ent[i] == 'b'){
        i++;
        q3(ent, i);
    }
}

void q3(string ent, int i){
    if(i > ent.length()){
        cout << "1";
        
    }
    
    else if(ent[i] == 'a'){
        i++;
        q3(ent, i);
    }
    else if(ent[i] == 'b'){
        i++;
        q3(ent, i);
    }
}


