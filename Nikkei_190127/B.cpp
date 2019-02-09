#include <iostream>
#include <string>

using namespace std;

int main(){
    int N, i, diff = 0;
    cin >> N;

    string A, B, C;
    cin >> A >> B >> C;

    for (i=0; i<N; i++){
        if (B[i] != A[i]) diff++;
        if (C[i] != A[i] && C[i] != B[i]) diff++;
    }

    cout << diff << '\n'; 
    
}

   