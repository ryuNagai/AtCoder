#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    int i, j=0;
    char c[4];
    for (i=0; i<4; i++){
        cin >> c[i];
    }
    
    for (i=0; i<4; i++){
        if (c[i]=='2') j++;
    }

    cout << j << '\n';

}