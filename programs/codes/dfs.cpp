#include <cstdio>
#include <vector>
#include <queue>  
#include "iostream"
using namespace std;
vector <int> adj[100005];
bool visited[100005];
int cc;
void dfs(int vertex)
{
    visited[vertex] = true;
    for(int i = 0 ; i < adj[vertex].size() ; i++)
    {
        int curr = adj[vertex][i];
        if(!visited[curr]) dfs(curr);
    }
}
int main()
{
    int n, m;
    scanf(" %d %d", &n, &m);
    
    for(int i = 0; i < m; i ++)
    {
        int u, v;
        scanf(" %d %d", &u, &v);
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    
    for(int i = 0; i < n; i ++)
        visited[i] = false;
    cc = 0;
    for(int i = 0; i < n ;i++)
    {
        if(!visited[i]) dfs(i),cc++;
    }
    cout<<cc<<endl;
    return 0;
}
