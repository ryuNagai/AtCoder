#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int s, i, tmp;
    cin >> s;

    vector< int > L;
    L.push_back(s);
    tmp = s;
    for (i=2; i<1000001; i++){
        if (tmp%2) tmp = 3 * tmp +1;
        else tmp = tmp / 2;
        auto result = std::find(L.begin(), L.end(), tmp);
        if (result != L.end()) break;
        L.push_back(tmp);
    }

    cout << i << '\n';
}

   