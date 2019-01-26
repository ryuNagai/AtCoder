#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int N, A, B, i;
    cin >> N >> A >> B;
    vector< int > P(N);
    vector< int > E(3);

    for (i=0; i<N; i++){
        cin >> P[i];
    }
    
    for (i=0; i<N; i++){
        if (P[i] <= A) E[0]++;
        else if (P[i] <= B) E[1]++;
        else E[2]++;
    }
    
    int min = *min_element(E.begin(), E.end());

    cout << min << '\n';
}

   