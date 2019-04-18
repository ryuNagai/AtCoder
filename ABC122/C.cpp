#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    string S;
    int N, Q, i, j, n=0, tmp=0, len, lenAC, ll, rr;
    cin >> N >> Q;
    cin >> S;
    vector< int > l(Q);
    vector< int > r(Q);
    vector< int > AC;

    for (i=0; i<Q; i++){
        cin >> l[i] >> r[i];
    }

    len = S.length();

    for (i=1; i<len; i++){
        if (S[i-1]=='A' and S[i]=='C'){
            AC.push_back(i-1);
        }
    }
    std::sort(AC.begin(), AC.end());

    lenAC = AC.size();

    for (j=0; j<Q; j++){
        ll = 0;
        for (i=0; i<lenAC; i++){
            if (AC[i] < l[j]-1) ll++;
            else break;
        }
        rr = 0;
        for (i=lenAC-1; i>=0; i--){
            if (AC[i]+1 > r[j]-1) rr++;
            else break;
        }
        cout << lenAC - ll - rr << '\n';
    }
}
