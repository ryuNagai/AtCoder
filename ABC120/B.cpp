#include <iostream>
#include <limits>
#include <numeric>
#include <type_traits>
#include <algorithm>  

using namespace std;

int main(){
    int a, b, k, i, g, ite=0;
    cin >> a;
    cin >> b;
    cin >> k;

    for (i=0; i<100; i++){
        g = 100-i;
        if (a%g==0 & b%g==0){
            ite++;
        }
        if (ite == k) break;
    }

    cout << g << '\n';
}

   