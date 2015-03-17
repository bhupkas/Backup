using namespace std;

#include "bits/stdc++.h"

string W[105];

int wcnt;

bool G[27][27];

bool B[27];

string R[27];

int out[27];

void topo()
{
        for(int i = 0 ; i < 26 ; ++i)   out[i] = 0;
        for(int i = 0 ; i < 26 ; ++i)   
        {
                for(int j = 0 ; j < 26 ; ++j)   if(G[i][j])     out[j]++;
        }
        int rem = 26;        
        for(int i = 0 ; i < 26 ; ++i)   if(!B[i])       rem-- , out[i] = -1;   
        int r = 0;
        while(rem > 0)
        {
                vector < int > v;
                for(int i = 0 ; i < 26 ; ++i)
                {
                        if(out[i] == 0)
                        {
                                rem--;
                                v.push_back(i);
                                out[i] = -1;
                        }
                }
                for(int i = 0 ; i < v.size() ; ++i)
                {
                        R[r].push_back(v[i] + 'a');
                        for(int j = 0 ; j < 26 ; ++j)
                        {
                                if(G[v[i]][j] && out[j] > 0)       out[j]--;   
                        }
                }
                ++r;
        }
}

int main()
{
        cin >> wcnt;
        for(int i = 0 ; i < wcnt ; ++i)
                cin >> W[i];
        for(int i = 0 ; i < 27 ; ++i)   B[i] = false;
        for(int i = 0 ; i < wcnt ; ++i) for(int j = 0 ; j < W[i].size() ; ++j)  B[W[i][j]-'a']=true;
        for(int i = 0 ; i < 27 ; ++i)   for(int j = 0 ; j < 27 ; ++j)   G[i][j] = false;
        for(int i = 0 ; i < wcnt - 1 ; ++i)
        {
                int j = i + 1;
                for(int k = 0 ; k < W[i].size() && k < W[j].size() ; ++k)
                {
                        if(W[i][k] != W[j][k])  
                        {
                                G[W[i][k]-'a'][W[j][k]-'a'] = true;
                                break;
                        }
                }
        }
        topo();
        for(int i = 0; i < 26; ++i)     if(R[i] != "") cout << R[i] << endl;
        return 0;
}
