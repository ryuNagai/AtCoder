#include <iostream>
#include <vector>

using namespace std;

int main(){
    int N, H, W, i, j=0;

    cin >> N >> H >> W;

    vector< pair<int, int> > p(N);

    for (i=0; i<N; i++){
        cin >> p[i].first;
        cin >> p[i].second;
    }
    
    for (i=0; i<N; i++){
        if (p[i].first >= H && p[i].second >= W) j++;
    }

    cout << j << '\n';

}