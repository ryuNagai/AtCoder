#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <string>

using namespace std;


int main(){
    int l, i, min, diff, x;
    string S;
    cin >> S;
    
    l = S.size();
    min = 753;

    for (i=0; i<l-2; i++){
        x = (int)(S[i]-'0')*100 + (int)(S[i+1]-'0')*10 + (int)(S[i+2]-'0');
        diff = abs(x - 753);
        if (diff < min) min = diff;
    }
    cout << min << '\n';
}

   