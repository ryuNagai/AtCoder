#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){
    int i, res=0, s=0, e=0;
    string S, T;

    cin >> S;
    
    T = "keyence";
    if (S==T) res = 1;
    else{
        for (i=0; i<7; i++){
            if (S[i] == T[i]) s++;
            else break;
        }
        for (i=0; i<7; i++){
            if (T[6 - i] == S[S.size() - 1 - i]) e++;
            else break;
        }

        if (s+e >= 7) res = 1;
    }

    if (res) cout << "YES" << '\n';
    else cout << "NO" << '\n';
}

   