#include <iostream>
#include <vector>

using namespace std;

int main(){
    int A, N, B, a, b;

    cin >> N >> A >> B;
    a = min(A, B);
    b = max(A + B - N, 0);
    cout << a << ' ' << b << '\n';
}

   