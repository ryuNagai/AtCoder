#include <iostream>

using namespace std;

int main(){
    int N, H, W, row, col;
    cin >> N >> H >> W;
    
    row = N - H + 1;
    col = N - W + 1;

    cout << row * col << '\n';
}

   