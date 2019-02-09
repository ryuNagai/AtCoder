#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int N, M, i;
    cin >> N >> M;
    vector<int> X(M);
    vector<int> D(M-1);

    for (i=0;i<M;i++){
        cin >> X[i];
    }

    sort( X.begin(),X.end() );

    for (i=0;i<M-1;i++){
        D[i] = X[i+1] - X[i];
    }

    sort( D.begin(),D.end() );

    int sum = 0;
    for (i=0; i<M-N; i++){
        sum += D[i];
    }

    cout << sum << '\n';
}