#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    int input;
    int DDD[8] = {61,71,11,21,32,19,27,31};
    char Destination [8][15] = {
        "Brasilia" ,
        "Salvador",
        "Sao Paulo",
        "Rio de Janeiro",
        "Juiz de Fora",
        "Campinas",
        "Vitoria",
        "Belo Horizonte"
    };
    int n = -1;
    
    cin >> input;
    
    for(int i = 0; i<8; i++){
        if(input==DDD[i]){
            n = i;
            break;
        }
    }
    if(n==-1){
        cout << "DDD nao cadastrado\n";
    }
    else{
        cout << Destination[n] << "\n";
    }
    return 0;
}
