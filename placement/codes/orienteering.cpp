using namespace std;

#include "bits/stdc++.h"

#define INF (int)(1e9)

char B[105][105]; 
 
int dx[4] = {0,1,0,-1};
int dy[4] = {-1,0,1,0}; 
 
int dp[20][1000005]; 

int D[20][105][105];

int w,h;

int sx,sy,gx,gy;

int cpcount;

vector < pair < int , int > > cp;

bool check(int x , int y)
{
        return (x >= 0 && x < h && y >= 0 && y < w);
}
 
queue < pair < int , int > > q; 
 
void bfs(int num , int x , int y)
{
        for(int i = 0 ; i < h ; ++i)    for(int j = 0 ; j < w ; ++j)    D[num][i][j] = INF;
        int xk,yk,x1,y1;
        D[num][x][y] = 0;
        q.push(make_pair(x,y));
        while(!q.empty())
        {
                x1 = q.front().first;
                y1 = q.front().second;
                q.pop();
                for(int i = 0 ; i < 4 ; ++i)    
                {
                        xk = x1 + dx[i];
                        yk = y1 + dy[i];
                        if(check(xk,yk) && B[xk][yk] != '#' && D[num][xk][yk] == INF)
                        {
                                D[num][xk][yk] = D[num][x1][y1] + 1;
                                q.push(make_pair(xk,yk));
                        }
                }
        }
} 

int recur(int x , int mask)
{
        if(dp[x][mask] != -1)   return dp[x][mask];
        int re = INF;   
        int val = x;
        for(int i = 0 ; i < cpcount ; ++i)
        {
                if(i == x)      continue;
                if((1<<i) & mask)
                        re = min(re , recur(i,mask - (1<<x)) + D[i+1][cp[x].first][cp[x].second]);
        }
        return dp[x][mask] = re;
}

class Orienteering {
public:
void main();
};
 
void Orienteering::main() {
        scanf("%d %d",&w,&h);
        if(!(w >= 1 && w <= 100 && h >= 1 && h <= 100))
        {
                for(int i = 0 ; i < h ; ++i)
                {
                        for(int j = 0 ; j < w ; ++j)    getchar();
                        getchar();
                }
                cout << -1 << endl;
                return;
        }
        char ch;
        getchar();
        int scount,gcount;
        scount = gcount = 0;
        for(int i = 0 ; i < h ; ++i)
        {
                for(int j = 0 ; j < w ; ++j)
                {
                        B[i][j] = (char)(getchar());
                        if(B[i][j] == 'S')
                        {
                                sx = i;
                                sy = j;
                                scount++;
                        }
                        else if(B[i][j] == 'G')
                        {
                                gx = i;
                                gy = j;
                                gcount++;
                        }
                        else if(B[i][j] == '@')
                                cp.push_back(make_pair(i,j));       
                }
                getchar();
        }
        if(cp.size() > 18 || scount != 1 || gcount != 1)
        {
                cout << -1 << endl;
                return;
        }      
        bfs(0,sx,sy);
        for(int i = 0 ; i < cp.size() ; ++i)    bfs(i+1,cp[i].first,cp[i].second);
        bfs(cp.size() + 1 , gx,gy);
        cp.push_back(make_pair(gx,gy));
        cpcount = cp.size();
        for(int i = 0 ; i < cpcount ; ++i)      for(int j = 0 ; j < (1 << cpcount) ; ++j)        dp[i][j] = -1;
        for(int i = 0 ; i < cpcount ; ++i)      dp[i][(1<<i)] = D[0][cp[i].first][cp[i].second];
        cout << recur(cpcount - 1 , (1<<cpcount) - 1) << endl;
}
 
int main(int argc, char* argv[]) {
        Orienteering o;
        o.main();
        return 0;
}

