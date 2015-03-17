#include<iostream>
#include<vector>
#include<cstring>

using namespace std;

#define MAXN 50000

int N, M;
bool window[MAXN], visited[MAXN], path[MAXN];
vector<int> edges[MAXN];

bool dfs1(int node) {
  int neighbours = edges[node].size();
  visited[node] = true;
  bool ans = false;
  for(int i = 0; i < neighbours; i++) {
    if(!visited[edges[node][i]])
       ans |= dfs1(edges[node][i]);
  }
  if(ans || window[node]) {
    path[node] = true;
    ans = true;
  }
  return ans;
}

long long dfs(int node) {
  long long ans = 0;
  int neighbours = edges[node].size();
  visited[node] = true;
  for(int i = 0; i < neighbours; i++) {
    if(!visited[edges[node][i]]) {
      int ret = dfs(edges[node][i]);
      ans += ret;
    }
  }
  if(window[node])
    ans += 1;
  return ans;
}

int main() {
  cin>>N>>M;
  for(int i = 0; i < N; cin>>window[i++]);
  for(int i = 0; i < M; i++) {
    int a, b;
    cin>>a>>b;
    a--, b--;
    edges[a].push_back(b);
    edges[b].push_back(a);
  }
  pair<long long, long long> ans(0, 0);

  memset(visited, 0, sizeof(bool)*N);
  for(int i = 0; i < N; i++) {
    if(window[i] && !visited[i]) {
      long long n =  dfs(i);
      ans.first += (n*(n-1))/2;
    }
  }
  
  memset(visited, 0, sizeof(bool)*N);
  memset(path, 0, sizeof(bool)*N);
  for(int i = 0; i < N; i++) {
    if(window[i] && !visited[i]) {
      window[i] = false;
      dfs1(i);
      window[i] = true;
    }
  }
  for(int i = 0; i < N; i++)
    ans.second += path[i];

  cout<<ans.first<<" "<<ans.second<<endl;
}


