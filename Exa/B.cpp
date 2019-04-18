#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main(){
    string S;
    int N, l, i, r=0;
    cin >> N;
    cin >> S;

    l = S.length();
    for (i=0; i<l; i++){
        if (S[i]=='R') r++;
    }


    if (r > (l-r)) cout << "Yes" << '\n';
    else cout << "No" << '\n';
}

   