#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <string>

using namespace std;
int num = 0;
vector< string > S;
void combi(int A[], int p, int w, int n, int r);

int main(){
    int N, K, i, j, k, NN;
    cin >> N;
    cin >> K;

    NN = N * (N + 1) / 2;
    
    vector< int > a(N);
    vector< int > b(NN);
    for (i=0; i<N; i++){
        cin >> a[i];
    }

    int sum;
    int cnt = 0;
    for (i=0; i<N; i++){
        for (j=0; j<N-i; j++){
            sum = 0;
            for (k=0; k<=j; k++){
                sum += a[i + k];
            }
            b[cnt] = sum;
            //cout << b[cnt] << '\n';
            cnt++;
        }
    }
    int n = NN;
    int r = K;
    int KK[K];//K
    combi(KK, r, n-r, n, r);

    int max_seki = 0;
    for (i=0;i<S.size();i++){
        int cnt = 0;
        int seki=0;
        for (j=0;j<S[i].length();j++){
            if (S[i][j]=='1' && cnt == 0){
                seki = b[j];
                cnt++;
            }
            else if (S[i][j]=='1' && cnt){
                seki = (seki&b[j]);
            } 
        }
        if (seki>max_seki) max_seki = seki;
    }
    cout << max_seki << '\n';
}

void combi(int A[], int p, int w, int n, int r){
    if(p > 0){
        int i;
        for(i = 0;i <= w;i++)
        {
            A[p] = i;
            combi(A, p - 1, w - i, n, r);
        }
    } else {
    int i, j, m;
    //printf("%d:\t", num);
    S.push_back("");
    num++;
    m = 0;
    for(i = 1;i <= r;i++){
        for(j = 0;j < A[i];j++, m++) S[num-1].append("0");
        S[num-1].append("1");
        m++;
    }
    for(;m < n;m++) S[num-1].append("0");
    }
}