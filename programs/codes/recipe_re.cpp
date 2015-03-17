#include<iostream>
#include<cstdio>
#include<deque>
#include<algorithm>
using namespace std;
char ibuf[BUF];
int ipt = BUF;
int read_uint() {
	while (ipt < BUF && ibuf[ipt] < '0') ipt++;
	if (ipt == BUF) {
    	fread(ibuf, 1, BUF, stdin);
   	 ipt = 0;
   	 while (ipt < BUF && ibuf[ipt] < '0') ipt++;
	}
	int n = 0;
	while (ipt < BUF && ibuf[ipt] >= '0') n = (n*10)+(ibuf[ipt++]-'0');
	if (ipt == BUF) {
    	fread(ibuf, 1, BUF, stdin);
    	ipt = 0;
   	 while (ipt < BUF && ibuf[ipt] >= '0') n = (n*10)+(ibuf[ipt++]-'0');
	}
	return n;
	}
int main()
	{	
	int t;
	char c;
	t=read_uint();
	deque<char> mydeque;
	while(t--)
		{
		c=(char)getchar();
		while(c!='\n')
		{		
			mydeque.push_back(c);
			c=(char)getchar();
		}
		while(!mydeque.empty())
			{
			c=mydeque.pop_back();	
			printf("%c\n",c);
			}
		}
	return 0;
	}

