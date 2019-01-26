#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>

using namespace std;

int main(){
    int N, i;
    int minus_num = 0;
    long long minus = 0;
    vector<long long> Plus;
    cin >> N;

    vector<long long> A(N);
    vector<long long> B(N);
    for (i=0; i<N; i++) cin >> A[i];
    for (i=0; i<N; i++) cin >> B[i];

    //long long A_sum = accumulate(A.begin(), A.end(), 0);
    //long long B_sum = accumulate(B.begin(), B.end(), 0);

    for (i=0; i<N; i++){
        if (B[i] > A[i]) {
            minus += (B[i] - A[i]);
            minus_num++;
        }
    }
    // cout << minus_num << '\n';
    for (i=0; i<N; i++){
        if (B[i] < A[i]) Plus.push_back(A[i] - B[i]);
    }

    long long pos = 0;
    if (minus > 0){
        sort(Plus.begin(), Plus.end(), std::greater<long long>());


        for (i=0; i<Plus.size(); i++){
            pos += Plus[i];
            minus_num++;
            if (pos >= minus) break;
        }
    }

    if (pos < minus) cout << -1 << '\n';
    else cout << minus_num << '\n';

}