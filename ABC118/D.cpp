#include <iostream>
#include <string>
#include <vector>
#include <functional>
#include <algorithm>

using namespace std;

int N, M;
int dp[9][10000];
vector< int > w(9); // weight

int solve(){ // i:residual num, j:residual weight
    int i,j;
    for (i=0; i<M; i++){
        for (j=0; j<=N; j++){
            if (j < w[i]){
                dp[i+1][j] = dp[i][j];
            }
            else {
                dp[i+1][j] = max(dp[i][j], dp[i+1][ j-w[i] ] + 1);
            }
        }
    }
    return dp[M][N];
}

int main(){
    cin >> N;
    cin >> M;
    int k, tmp;

    for (k=0; k<M; k++){
        cin >> tmp;
        if (tmp==1) w[k]=2;
        else if (tmp==2 or tmp==3 or tmp==5) w[k] = 5;
        else if (tmp==4) w[k] = 4;
        else if (tmp==6 or tmp == 9) w[k] = 6;
        else if (tmp==7) w[k] = 3;
        else if (tmp==8) w[k] = 7;
    }

    cout << solve() << '\n';
}

/*for input test
4
5
2 1 3 2
3 2 4 2
*/