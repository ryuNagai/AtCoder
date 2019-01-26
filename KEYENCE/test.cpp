#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>

using namespace std;

int main(){
    int N, i, res = 0;
    int minus_num = 0;
    long minus = 0;
    
    
    std::vector<long long> A(10000, 1000000000);

    long long A_sum = accumulate(A.begin(), A.end(), 0);

    cout << A_sum << '\n';
    cout << 2147483647 << '\n';

}