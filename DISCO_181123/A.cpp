#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    int N, i, j;
    cin >> N;
    j = 1;
    for (i=0;i<N;i++)
        j = j * 4;

    cout << j << '\n';

}