#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>

using namespace std;

int main(){
    long long ans, i, j, t, neck, N;
    vector< double > T(5);

    cin >> N >> T[0] >> T[1] >> T[2] >> T[3] >> T[4];

    decltype(T)::iterator min = std::min_element(T.begin(), T.end());
    int min_dis = std::distance(std::begin(T), min);
    neck = T[min_dis];

    if (N % neck != 0) ans = N / neck + 1;
    else ans = N / neck;

    cout << ans + 4 << "\n";
}