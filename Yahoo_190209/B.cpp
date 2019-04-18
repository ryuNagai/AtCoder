#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int N, i, flag=0;
    vector<int> L(6);
    vector<int> T(4);

    for (i=0;i<4;i++){
        T[i] = 0;
    }

    for (i=0;i<6;i++){
        cin >> L[i];
        T[L[i]-1]++;
        if (T[L[i]-1]==3) flag = 1;
    }
    
    for (i=0;i<4;i++){
        if(T[i] == 0) flag = 1;
    }

    if (flag) cout << "NO\n";
    else cout << "YES\n";
}
   