#include <iostream>
#include <vector>

using namespace std;

int main(){
    int N, M, i, K, j, tmp, ans=0;
    cin >> N >> M;

    vector< int > F(M);

    for (i=0; i<N; i++){
        cin >> K;
        for (j = 0; j<K; j++){
            cin >> tmp;
            F[tmp-1]++;
        }
    }

    for (i=0; i<M; i++){
        if (F[i]==N) ans++;
    }

    cout << ans << '\n';
}

   