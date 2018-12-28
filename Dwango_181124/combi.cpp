#include <stdio.h>
using namespace std;

int num = 0;
void combi(int A[], int p, int w, int n, int r);

int main(void)
{
    int n = 10;
    int r = 3;
    int K[128];//K
    combi(K, r, n-r, n, r);
    return 0;
}

void combi(int A[], int p, int w, int n, int r){
    if(p > 0){
        int i;
        for(i = 0;i <= w;i++)
        {
            A[p] = i;
            combi(A, p - 1, w - i, n, r);
        }
    } else {
    int i, j, m;
    num++;
    printf("%d:\t", num);
    m = 0;
    for(i = 1;i <= r;i++){
        for(j = 0;j < A[i];j++, m++) printf("0");
        printf("1");
        m++;
    }
    for(;m < n;m++) printf("0");
    printf("\n");
    }
}