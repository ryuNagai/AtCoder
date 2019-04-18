#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int N, K;
    cin >> N >> K;

    if (N%2) {
        if (K <= (N+1)/2) cout << "YES\n";
        else cout << "NO\n";
    }
    else {
        if (K <= N/2) cout << "YES\n";
        else cout << "NO\n";
    }
}
   