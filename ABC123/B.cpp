#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    int ans, k, i, j, t;
    vector< int > T(5);
    vector< int > T2(5);

    cin >> T[0] >> T[1] >> T[2] >> T[3] >> T[4];

    t = 0;
    for (i=0; i<5; i++){
        T2[i] = T[i] % 10;
        if (T2[i] != 0) T2[i] = 10 - T2[i];
        t += T2[i];
    }

    int max = *std::max_element(T2.begin(), T2.end());
    ans = T[0] + T[1] + T[2] + T[3] + T[4] + t - max;

    cout << ans << "\n";
}

   