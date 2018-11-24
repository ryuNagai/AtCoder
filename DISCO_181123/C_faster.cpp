// A little mistake
#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>

using namespace std;
const int mod = 1000000007;

int power(int x) {
	int ans = 1;
	for (int i = 0; i < 10; ++i) {
		ans = (long long)ans * x % mod;
	}
	return ans;
}

int main(){
    int N, M, i;
    long long ans = 0;
    long long j = 0;
    cin >> N;
    int d = 1000000007;

    M = sqrt(N);
    vector< pair<int, int> > p(N);


    for (i=1; i<=M; i++){
        p[i] = make_pair(i, N / i);
        j =  power(p[i].first) - power(p[i].first - 1); // Max = p[i]
        j = j * power(p[i].second);
        j = j * 2;
        j = j - (power(p[i].first) - power(p[i].first - 1) ) * (power(p[i].first) - power(p[i].first - 1));
        ans += (j % mod);
        ans = ans % mod;
        cout << ans << '\n';
    }

    cout << ans << '\n';
}