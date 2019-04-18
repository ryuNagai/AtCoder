#include <iostream>


using namespace std;

int main(){
    int A, B;
    cin >> A;
    cin >> B;

    if (B % A) cout << B - A << '\n';
    else cout << B + A << '\n';
}

   