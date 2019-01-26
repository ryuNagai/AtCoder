// An exzample of Depth-First Search
#include <iostream>
#include <set>
#include <vector>

using namespace std;

#define MAX 400
#define CONF 1


char S[MAX][MAX];
vector< pair<int, int> > done;
set< pair<int, int> > st;
char target;
int DX[4] = {1, -1, 0, 0};
int DY[4] = {0, 0, 1, -1};

void dfs(int y, int x, int H, int W){ // x, y ; current position
    if (S[y][x] == '#') target = '.';
    else target = '#';
    for (int l=0; l<4; l++){
        int nx = x + DX[l];
        int ny = y + DY[l];
        if (0 <= nx && 0 <= ny && nx < W && ny < H && S[ny][nx] == target){
            auto result = std::find(done.begin(), done.end(), make_pair(nx, ny));
            if (result == done.end()){
                done.push_back(make_pair(nx, ny));
                if (S[ny][nx] == '.') {
                    st.insert(make_pair(nx, ny));
                    cout <<  x << ' ' << y << ' ' << nx << ' ' << ny << '\n';
                }
                dfs(ny, nx, H, W);
            }
        }
    }
}


int main(){
    int H, W;
    // Input
    cin >> H; //row
    cin >> W; //column

    for (int i = 0; i < H; i++){
        for (int j = 0; j < W; j++){
            cin >> S[i][j];
        }
    }

    // main argorithm
    int res = 0;
    for (int i = 0; i < H; i++){
        for (int j = 0; j < W; j++){
            if (S[i][j] == '#'){
                done.push_back(make_pair(j, i));
                dfs(i, j, H, W);
            }
            res += st.size();
            done.clear();
            st.clear();
        }
    }

    cout << res << '\n';
}