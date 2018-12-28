#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>

using namespace std;

int main(){
    int N, i;
    double sum = 0;
    cin >> N;
    
    vector< int > a(N);
    for (i=0; i<N; i++){
        cin >> a[i];
    }
    for (i=0; i<N; i++){
        sum += a[i];
    }
    //cout << "sum : " << sum << '\n';
    double mean = sum / N;
    //cout << "mean : " << mean << '\n';

    double diff = 100;
    double diff_;
    int ans = 0;
    for (i=0; i<N; i++){
        diff_ = abs(mean - a[i]);
        //cout << diff_ << '\n';
        if (diff_ < diff ){
            ans = i;
            diff = diff_;
        }
    }

    cout << ans << '\n';

}