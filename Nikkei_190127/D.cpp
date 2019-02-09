#include <iostream>
#include <vector>


using namespace std;

int N, i, M, j;

vector< pair<int, int> > pairs(N-1+M); // child, pairent
vector< int > C(N); // num of parent

int choice(int child1, int child2){

}

int main(){
    cin >> N >> M;

    for (i=0; i<N-1+M; i++){
        cin >> pairs[i].second;
        cin >> pairs[i].first;
        C[ pairs[i].first-1 ]++;
    }

    sort(pairs.begin(), pairs.end());

    int pos = 0;
    for (i=0; i<N; i++){
        if (C[i] <= 1) {
            pos++;
            continue;
        }
        else{
            
        }
    }

    cout << diff << '\n'; 
    
}

   