#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int N, i, j, end_address, tmpNum, contNum;
    cin >> N;
    vector< int > s(N); // start
    vector< int > h(N); // target
    vector< int > contin; // target

    for (i=0;i<N;i++){
        cin >> h[i];
        s[i] = 0;
    }

    for (j=0; ;j++){
        end_address = 0;
        tmpNum = 0;
        contNum = 0;
        for (i=0;i<N;i++){
            if (s[i] < h[i]){
                tmpNum++;
                if (tmpNum > contNum){
                    contNum = tmpNum;
                    end_address = i;
                }
            }
            else{
                tmpNum = 0;
                }   
            }

        //cout << contNum << '\n';
        if (contNum==0 && tmpNum==0) break;
        else{
            for (i=end_address-(contNum-1); i<=end_address; i++){
                s[i] += 1;
            }
        }
    }

    cout << j << '\n';
}

   