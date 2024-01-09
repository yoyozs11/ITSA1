#include <stdio.h>

int N, M, H, K;
int ans = 0;
int road[][2] = {{1,2}, {1,-2}, {-1,2}, {-1,-2}, {2,1}, {2,-1}, {-2,1}, {-2,-1}};

void cal_route(int x, int y, int table[N+1][M+1])
{
    if(x==H && y==K && table[H][K])
    {
        ans+=1;
        return;
    }
    for(int i=0;i<8;i++)
    {
        int a = x + road[i][0];
        int b = y + road[i][1];
        if(a>=0 && a<=N && b>=0 && b<=M && !table[a][b])
        {
            table[a][b] = 1;
            cal_route(a, b, table);
            table[a][b] = 0;
        }
    }
}

int main()
{
    scanf("%d %d %d %d", &N, &M, &H, &K);
    int table[N+1][M+1];
    for(int i=0;i<=N;i++)
        for(int j=0;j<=M;j++)
            table[i][j]=0;
    cal_route(H, K, table);
    printf("%d\n", ans);
}
