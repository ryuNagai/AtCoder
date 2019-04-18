#include <iostream>
#include <string>
#include <set>

using namespace std;


int N, l, i, n=0, tmp=0;

int judge(string S){
    if (S=="AGC" or S=="ACG" or S=="GAC")
    return 1;
    else return 0;
}

string rec(string S){
    int l = S.length();
    if (l>3){
        judge(S.substr(l-3, 3));
    }
}

int main(){
    string S, ans;
    cin >> N;

    l = S.length();

    for (i=0; i<l; i++){
        if (S[i]=='A' or S[i]=='G' or S[i]=='C' or S[i]=='T'){
            tmp++;
            if (tmp > n) n = tmp;
        }
        else {
            tmp = 0;
        }
    }
    cout << n << '\n';
}

   