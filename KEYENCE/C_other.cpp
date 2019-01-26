#include<cstdio>
#include<cmath>
#include<cstring>
#include<algorithm>
#include<queue>
#include<map>
#include<vector>
#include<functional>
#include <random>

using namespace std;

long long N;
long long A[100000], B[100000];
long long to_fix;
long long ans;
long long diff[100000];

int main(void) {
	scanf("%lld", &N);
	for (int i = 0; i < N; i++) {
		scanf("%lld", &A[i]);
	}
	for (int i = 0; i < N; i++) {
		scanf("%lld", &B[i]);
	}

	ans = 0;

	/*A_i < B_iとなってる分差の和を計算*/
	to_fix = 0;
	for (int i = 0; i < N; i++) {
		if (A[i] < B[i]) {
			to_fix += B[i] - A[i];
			ans++;
		}
	}

	/*A_i > B_iとなってる分を取得*/
	for (int i = 0; i < N; i++) {
		diff[i] = A[i] - B[i];
	}
	sort(diff, diff + N, greater<long long>());

	if (to_fix == 0) {
		printf("0\n");
		return 0;
	}
	for (int i = 0; i < N; i++) {
		if (diff[i] <= 0) {
			printf("-1\n");
			return 0;
		}
		to_fix -= diff[i];
		if (to_fix <= 0) {
			ans += i + 1;
			break;
		}
	}
	if (to_fix > 0) {
		printf("-1\n");
		return 0;
	}
	printf("%lld\n", ans);
	return 0;
}
