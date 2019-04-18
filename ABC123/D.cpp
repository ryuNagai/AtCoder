#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>

using namespace std;

int main(){
    int X, Y, Z, K;
    long long ans, i, j, t, neck, N;

    cin >> X >> Y >> Z >> K;
    vector< long > A(X);
    vector< long > B(Y);
    vector< long > C(Z);

    for (i=0; i<X; i++){
        cin >> A[i];
    }
    std::sort(A.begin(), A.end(), std::greater<long>());

    for (i=0; i<Y; i++){
        cin >> B[i];
    }
    std::sort(B.begin(), B.end(), std::greater<long>());

    for (i=0; i<Z; i++){
        cin >> C[i];
    }
    std::sort(C.begin(), C.end(), std::greater<long>());

    

    if (N % neck != 0) ans = N / neck + 1;
    else ans = N / neck;

    cout << ans + 4 << "\n";
}