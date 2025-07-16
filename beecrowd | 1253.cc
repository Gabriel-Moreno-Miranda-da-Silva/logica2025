#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

 
int main() {
 
    string a;
    int C;
    int n;
    
    for(cin >> C;C>0;C--){
        cin >> a;
        cin >> n;
        
        for(int k = a.length();k>-1;k--){
            int V = (int)a[k];
            if ((V-n)<65){
                if(((V-n)-65)%26!=0){
                    int q = (-1)*(((V-n)-65)%26);
                    a[k] = (char)(91-q);
                }
                else{
                    a[k] = V;
                }
            }
            else{
                a[k] = (char)V-n;
            }
        }
        cout << a << '\n';
        
    }
    
 
    return 0;
}
