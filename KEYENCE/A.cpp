#include <iostream>
#include <vector>

using namespace std;

int main(){
    int i;
    vector<int> N(4);
    bool a=false, b=false, c=false, d=false;

    for (i=0; i<4; i++) cin >> N[i];
    
    for (i=0; i<4; i++){
        if (N[i]==1) a = true;
        else if (N[i]==9) b = true;
        else if (N[i]==7) c = true;
        else if (N[i]==4) d = true;
    }

    if (a && b && c && d) cout << "YES" << '\n';
    else cout << "NO" << '\n';
}

   