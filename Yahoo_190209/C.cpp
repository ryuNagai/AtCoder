#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    long long K, A, B, i, ans=0;
    cin >> K >> A >> B;

    if (A+2 >= B) ans  = K + 1;
    else if (K < A+1) ans = K + 1;
    else {
        long long ite = (K - (A-1)) / 2;
        long long res = (K - (A-1)) % 2;
        ans += A;
        ans += ite * (B-A);
        if (res) ans++;
    }

    cout << ans << '\n';
}
   