#include <iostream>
#include <algorithm>
#include <string>  

using namespace std;

int main(){
    string S;
    int i, l, zero=0, one=0;
    cin >> S;
    l = S.length();

    for (i=0; i<l; i++){
        if (S[i]=='0') zero++;
        else one++;
    }

    cout << min(zero, one) * 2 << '\n';
}

   