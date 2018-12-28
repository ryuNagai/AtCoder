#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <string>

using namespace std;

int main(){
    int N, Q, i;
    cin >> N;
    string S;
    cin >> S;

    cin >> Q;
    vector< int > k(Q);
    for (i=0; i<Q; i++){
        cin >> k[i];
    }
    

    vector< int > D;
    vector< int > M;
    vector< int > C;
    vector< int > cnt(Q);

    for (i=0; i<N; i++){
        if(S[i]=='D') D.push_back(i);
        else if(S[i]=='M') M.push_back(i);
        else if(S[i]=='C') C.push_back(i);
    }

    

    cout << '\n' << 2 << '\n';
}