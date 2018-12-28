#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <string>

using namespace std;

vector< string > S;
int num, l, i, N, ans=0;

void f(string S){
    num = 0;
    l = S.size();
    if (l>=3){
        for (i=0; i<l; i++){
            num += (int)(S[i]-'0') * pow(10, l-1-i);
        }
    }
    if (num <= N){
        if ( (S.find('7') != std::string::npos) && (S.find('5') != std::string::npos) && (S.find('3') != std::string::npos) ){
            ans++;
        }
        string S1 = S + '3';
        string S2 = S + '5';
        string S3 = S + '7';
        f(S1);
        f(S2);
        f(S3);
    }
}

int main(){
    string S="";
    cin >> N;
    
    f(S);
    cout << ans << '\n';
}

   