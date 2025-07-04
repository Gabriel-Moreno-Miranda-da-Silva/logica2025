#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n, a, b;
    
    
    
    for (cin >> n; n > 0; n--){
        cin >> a >> b;
        if (max(a,b) % min(a,b) ==0){
        }
        else{
            while(max(a,b) % min(a,b) !=0){
                if(a>b){
                    a = a-b;
                }
                else{
                    b = b-a;
                }
                
            }
        }
        cout << min(a,b) << '\n';
    }
    
    return 0;
}
