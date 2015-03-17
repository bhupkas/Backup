using namespace std;

#include "bits/stdc++.h"

vector < string > inp;

vector < string > num;

vector < int > ini;

vector < string > kharab;

bool check(string str1 , string str2)
{
        for(int i = 0 ; i < 7 ; ++i)
                if(str1[i] == '0' && str2[i] == '1')    return false;  
        return true;
}

int A[10];

void update(string str1 , string str2)
{
        for(int i = 0 ; i < 7 ; ++i)
        {
                if(A[i] != 0)   continue;
                if(str1[i] == '1' && str2[i] == '1')      
                {
                        A[i] = 1;
                        continue;
                }    
                if(str1[i] == '1' && str2[i] == '0')    
                {
                        A[i] = -1;
                        continue;
                }
        }
}

int main()
{
        int t;
        int n;
        cin >> t;
        string str;
        num.push_back("1111110");
        num.push_back("1100000");
        num.push_back("1101101");
        num.push_back("1111001");
        num.push_back("0110011");
        num.push_back("1011011");
        num.push_back("1011111");
        num.push_back("1110000");
        num.push_back("1111111");
        num.push_back("1111011");
        int cnt;
        int re;
        for(int tc = 1 ; tc <= t ; ++tc)
        {
                for(int i = 0 ; i < 7 ; ++i)    A[i] = 0;
                ini.clear();
                cnt = 0;
                cin >> n;
                inp.clear();
                for(int i = 0 ; i < n ; ++i)
                {       
                        cin >> str;
                        inp.push_back(str);
                }
                for(int i = 0 ; i <= 9 ; ++i)   
                        if(check(num[i],inp[0])) ini.push_back(i);
                int val;
                bool b;
                for(int i = 0 ; i < ini.size() ; ++i)
                {
                        b = true;
                        val = ini[i];
                        for(int j = 0 ; j < min(10,n) ; ++j)
                        {
                                if(!check(num[val],inp[j]))
                                {       
                                        b = false;
                                        break;       
                                }                     
                                val = ((val - 1) % 10 + 10) % 10; 
                        }
                        if(b)   cout << ini[i] << endl;
                        /*
                        if(b)   
                        {
                                re = ini[i];
                                cnt++;
                                if(cnt > 1)     break;
                        }
                        */                
                }
                printf("Case #%d: ",tc);
                int temp;
                if(cnt != 1)
                        puts("ERROR!");             
                else
                {
                        val = re;
                        temp = re;
                        for(int i = 0 ; i < min(n,10) ; ++i)
                        {
                                update(num[temp],inp[i]);
                                temp = ((temp - 1) % 10 + 10) % 10;
                        }                
                        for(int i = 0 ; i < n ; ++i)    
                                val = ((val - 1) % 10 + 10) % 10;
                        re = val;
                        bool foo = true;
                        for(int i = 0 ; i < 7 ; ++i)
                                if(A[i] == 0)   foo = false;
                        string pr;
                        if(!foo)        puts("ERROR!");
                        else
                        {
                                for(int i = 0 ; i < 7 ; ++i)
                                {
                                        if(num[re][i] == '0')   pr.push_back('0');
                                        else
                                        {
                                                if(A[i] == 1)   pr.push_back('1');
                                                else            pr.push_back('0');
                                        }
                                }
                                cout << pr << endl;
                        }
                }
        }
        return 0;       
}
