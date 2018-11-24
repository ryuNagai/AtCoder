#include <stdio.h>
const int mod = 1000000007;
int power_ten(int x) {
	int ans = 1;
	for (int i = 0; i < 10; ++i) {
		ans = (long long)ans * x % mod;
	}
	return ans;
}

int main(void) {
	int N;
	scanf("%d", &N);
	int ans = 0;
	for (int pmax = 1; pmax <= N; ++pmax) {
		int pways = (power_ten(pmax) - power_ten(pmax - 1) + mod);
		int qways = power_ten(N / pmax);
		ans = (ans + (long long)pways * qways) % mod;
	}
	printf("%d\n", ans);
	return 0;
}
