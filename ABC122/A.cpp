#include <iostream>
#include <algorithm>  

using namespace std;

int main(){
    char b, ans;
    cin >> b;


    if (b=='A') ans = 'T';
    else if (b=='C') ans = 'G';
    else if (b=='G') ans = 'C';
    else if (b=='T') ans = 'A';

    cout << ans << '\n';
}

   