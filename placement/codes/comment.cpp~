using namespace std;

#include "bits/stdc++.h"

char ch;

int main()
{
        string re;
        while(scanf("%c",&ch) != EOF)
        {       
                  if(ch == '/')
                  {     
                        ch = (char)getchar();
                        if(ch == EOF)
                        {
                                re.push_back('/');
                                cout << re << endl;
                                return 0;
                        }
                        if(ch == '*')
                        {
                                ch = (char)getchar();
                                while(ch != '*')   ch = (char)getchar();
                                getchar();
                                continue;
                        }
                        if(ch != '/')
                        {
                                re.push_back('/');
                                continue; 
                        }
                        if(ch == '/')   
                        {
                                while(ch != EOF && ch != '\n')  ch = (char)getchar();
                                re.push_back('\n');
                                continue;
                        }
                  }              
                  else  re.push_back(ch);
        }
        cout << re << endl;
        return 0;
}
