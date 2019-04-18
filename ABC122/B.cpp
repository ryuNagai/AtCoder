#include <iostream>
#include <string>
#include <set>

using namespace std;

int main(){
    string S, ans;
    int l, i, n=0, tmp=0;
    cin >> S;

    l = S.length();

    for (i=0; i<l; i++){
        if (S[i]=='A' or S[i]=='G' or S[i]=='C' or S[i]=='T'){
            tmp++;
            if (tmp > n) n = tmp;
        }
        else {
            tmp = 0;
        }
    }
    cout << n << '\n';
}

   