#include <iostream>
#include <string>
#include <vector>
#include <functional>
#include <algorithm>

using namespace std;

int N, K;
vector< int > w(N); // weight
vector< int > v(N); // value

int rec(int i, int j){ // i:residual num, j:residual weight
    int res; // value
    if (i==N){
        res = 0;
    }
    else if (j < w[i]){ // weight over
        res = rec(i + 1, j);
    }
    else {
        res = max(rec(i+1, j), rec(i + 1, j - w[i]) + v[i] ); // in or NOT
    }
    return res;
}

int main(){
    cin >> N;
    cin >> K;
    int i, temp;

    for (i=0; i<N; i++){
        cin >> w[i];
        cin >> v[i];
    }

    cout << rec(0, K) << '\n';
}

/*for input test
4
5
2 1 3 2
3 2 4 2
*/