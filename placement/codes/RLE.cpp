using namespace std;

#include "bits/stdc++.h"

string nlen(int num)
{
        string re;
        while(num)
        {
                re.push_back((num % 10) + '0');
                num /= 10; 
        }
        reverse(re.begin(),re.end());
        return re;
}

int main()
{
        char S[100005];
        int cnt;
        int i,len;
        int j;
        int tot;
        int k;
        char ch;
        string temp;
        while(scanf("%s",S) != EOF)
        {       
                len = strlen(S);
                cnt = 0; 
                tot = 0;
                i = 0;
                for(i = 0 ; i < len ; ++i)
                {
                        cnt = 0;
                        j = i;
                        ch = S[i];
                        while(j < len && S[j] == S[i])  j++ , cnt++;
                        if(cnt > 3)
                        {
                                temp = nlen(cnt);
                                for(k = 0 ; k < temp.size() ; ++k)      
                                        S[tot++] = temp[k];
                                S[tot++] = '!';
                                S[tot++] = ch;                                                                                            
                        }
                        else
                                for(k = i ; k < j ; ++k)        S[tot++] = S[k];
                        i = j - 1;       
                }
                for(k = 0 ; k < tot ; ++k)      cout << S[k];
                cout << endl;
        }
        return 0;
}
