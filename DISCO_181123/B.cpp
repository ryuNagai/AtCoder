#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    int N, M, i, sum, ans;
    cin >> N;

    if (N%2){ // N is odd
        M = (N+1) / 2; 
        for (i=0; i<=M; i++){
            sum += i;
        }
        ans = N*N - 4 * sum +4;
    }
    else {
        M = N / 2;
        for (i=0; i<=M; i++){
            sum += i;
        }
        ans = N*N - 4 * sum;
    }

    cout << ans << '\n';

}