#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <iterator>

using namespace std;

int main(){
    string s;
    int N, Q, i, j, n=0, tmp=0, alpha, death, l, rr;
    cin >> N >> Q;
    cin >> s;
    vector< char > t(Q);
    vector< char > d(Q);
    vector< vector< int > > arr(26);
    vector< int > G(N, 1);
    vector< int > G1(N, 1);

    for (i=0; i<Q; i++){
        cin >> t[i] >> d[i];
    }


    for (i=0; i<N; i++){
        alpha = s[i] - 65;
        arr[alpha].push_back(i);
    }

    death = 0;
    for (i=0; i<Q; i++){
        alpha = t[i] - 65;
        l = arr[alpha].size();

        for (j=0; j<l; j++){
            if (d[i] == 'L'){
                if (arr[alpha][j]==0){
                    death += G[arr[alpha][j]];
                    G1[arr[alpha][j]] -= G[arr[alpha][j]];
                }
                else {
                    G1[arr[alpha][j] - 1] += G[arr[alpha][j]];
                    G1[arr[alpha][j]] -= G[arr[alpha][j]];
                }
            }

            else {
                if (arr[alpha][j]==N-1){
                    death += G[arr[alpha][j]];
                    G1[arr[alpha][j]] -= G[arr[alpha][j]];
                }
                else {
                    G1[arr[alpha][j] + 1] += G[arr[alpha][j]];
                    G1[arr[alpha][j]] -= G[arr[alpha][j]];
                }
            }
        }
        copy(G1.begin(), G1.end(), back_inserter(G) );
    }

    cout << N - death << '\n';
}

   