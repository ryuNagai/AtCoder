#include <iostream>
#include <vector>
#include <algorithm>
#include <bitset>
#include <string>
#include <sstream>

using namespace std;

long deciToBinary(long decimal){
    long binary = 0;
    long base = 1;
    while(decimal>0){
        binary = binary + ( decimal % 2 ) * base;
        decimal = decimal / 2;
        base = base * 10;
    }
    return binary;
}

long binaryToDeci(long binary){
    long decimal = 0;
    long base = 1;
    while(binary>0){
    decimal = decimal + ( binary % 10 ) * base;
    binary = binary / 10;
    base = base * 2;
    }
    return decimal;
}

int main(){
    long N, K, i, j;
    int decimal;
    int binary = 0;
    int base = 1;

    cin >> N >> K;
    vector<long> Along(N);
    vector<string> A(N);

    long tmp;
    for (i=0;i<N;i++){
        cin >> Along[i];
 
        stringstream ss;
        ss << deciToBinary(Along[i]);
        A[i] = ss.str();
    }

    tmp = 2;
    int MaxBit = 0;
    for (i=0;;i++){
        if (K < tmp){
            MaxBit = i;
            break;
        }
        tmp *= 2;
    }

    string Ans;

    long tmp1 = 0;
    long tmp2 = 0;
    for (i=0; i<=MaxBit; i++){
        tmp1 = 0;
        tmp2 = 0;
        for (j=0; j<N; j++){
            if (A[i][j] == 0) tmp1++;
            else tmp2++;
        }
        if (tmp1 > tmp2) Ans[i] = '1';
        else Ans[i] = '0';
    }

    int Ansi = binaryToDeci(stoi( Ans ));

    long ans=0;
    for (i=0; i<N; i++){
        ans += (Along[i]^Ansi);
        cout << Along[i] << " XOR " << Ansi << '\n';
    }
    cout << ans << '\n';
}