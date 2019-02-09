#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int N, i;
    cin >> N;
    vector<int> L(N);

    for (i=0;i<N;i++){
        cin >> L[i];
    }
    sort( L.begin(), L.end() );

    int sum=0;
    for (i=0;i<N-1;i++){
        sum += L[i];
    }

    if (L[N-1] >= sum) cout << "No\n";
    else cout << "Yes\n";
}
   