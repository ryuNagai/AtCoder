#include <iostream>
#include <vector>
#include <algorithm> // sort
#include <map> // pair
#include <functional> // greater

using namespace std;

int main(){
    int N, i, a, b, tmp;
    long long ans;
    cin >> N;
    vector<pair<int, int> > pairs_org(N);
    vector<pair<int, int> > pairs_sum(N);

    for (int i = 0; i < N; i++) {
        cin >> a;
        cin >> b;
        pairs_org[i] = make_pair(a, b);
        pairs_sum[i] = make_pair(a+b, i);
    }

    sort(pairs_sum.begin(), pairs_sum.end());

    ans = 0;
    for (int i = 0; i < N; i++) {
        if (i % 2){ //Aoki
            tmp = pairs_sum[N - 1 - i].second;
            ans -= pairs_org[tmp].second;
        }

        else{ //Takahashi
            tmp = pairs_sum[N - 1 - i].second;
            ans += pairs_org[tmp].first;
        }
    }
    cout << ans << '\n'; 
    
}

   