#include <cstdio>
#include <vector>
#include <queue>  
using namespace std;
int main()
{
    int n, m;
    scanf(" %d %d", &n, &m);
    vector <int> adj[n];
    for(int i = 0; i < m; i ++)
    {
        int u, v;
        scanf(" %d %d", &u, &v);
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    bool visited[n];
    for(int i = 0; i < n; i ++)
        visited[i] = false;
    queue <int> q;
    q.push(0);
    while(!q.empty())
    {
        int curr = q.front();
        visited[curr] = true;
        q.pop();
        for(int i = 0; i < adj[curr].size(); i ++)
        {
            if(!visited[adj[curr][i]])
            {
                q.push(adj[curr][i]);
                visited[adj[curr][i]] = true;
            }
        }
    }
    return 0;
}
