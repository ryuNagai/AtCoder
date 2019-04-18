#include <iostream>
#include <algorithm>
#include <set>
#include <vector>

using namespace std;

int main(){
    int N, M, i, a, b, idx;
    cin >> N >> M;
    vector< set<int> > bridge(M);
    vector< set<int> > s;

    for (i=0; i<M; i++){
        cin >> a;
        cin >> b;
        bridge[i].insert(a);
        bridge[i].insert(b);
    }

    for (i=0; i<M; i++){
        idx = M-1-i;
        if (i==0) s.push_back(bridge[idx]);
        else {
            
        }
    }

    cout << min(zero, one) * 2 << '\n';
}

   