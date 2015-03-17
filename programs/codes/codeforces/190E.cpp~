/* bhupkas */

#include "bits/stdc++.h"

using namespace std;

#define NMAX 500005

int nt,mt;

struct node
{
	set < int > comp,miss;
};
typedef struct node Node;

set < int > adj[NMAX + 5];

set < int > :: iterator it;

vector < Node > ans;

bool visi[NMAX + 5];
bool B[NMAX + 5];

int bsearch()
{
	int low = 0;
	int high = nt - 1;
	while(low <= high)
	{
		int mid = (low + high) >> 1;
		if(mid == 0)
			if(!B[mid])	return 0;	
		if(!B[mid] && B[mid-1])	return mid;
		if(!B[mid])	high = mid - 1;
		else		low = mid + 1;
	}
	return -1;
}

vector < int > remove_conflict(vector < int > re1)
{
	vector < int > re;
	if(re1.size())
	{
		re.push_back(re1[0]);
		for(int i = 1 ; i < re1.size() ; i++)
		{	
			if(re1[i] == re[re.size() - 1])	i++;
			else				re.pop_back() , re.push_back(re1[i]);
		}	
	}
	return re;
}

vector < int > merge_vectors(vector < int > a , vector < int > b)
{
	int n = a.size();
	int m = b.size();
	vector < int > re1;
	int i = 0;
	int j = 0;
	while(i != n && j != m)	
	{
		if(visi[a[i]])	{i++;	continue;}
		if(visi[b[j]])	{j++;	continue;}
		if(a[i] < b[j])	re1.push_back(a[i++]);
		else		re1.push_back(b[j++]);
	}
	while(i < n)	if(!visi[a[i]])	re1.push_back(a[i++]);
	while(j < m)	if(!visi[b[j]])	re1.push_back(b[j++]);
	return re1;
}

Node merge(Node N , int vertex)
{
	visi[vertex] = true;
	N.comp.insert(vertex);
	vector < int > temp1,temp2,temp3;
	for(it = adj[vertex].begin() ; it != adj[vertex].end() ; it++)	temp1.push_back((*it));
	for(it = N.miss.begin() ; it != N.miss.end() ; it++)		temp2.push_back((*it));	
	temp3 = merge_vectors(temp1,temp2);
	if(temp3.size() >= 2)
		if(temp3[0] != temp3[1])	B[temp3[0]] = false;
	if(temp3.size())
	{	
		for(int i = 1 ; i < temp3.size() ; i++)
		{
			if(temp3[i] != temp3[i-1])	B[temp3[i]] = false;
			else				i++ , B[temp3[i]] = true; 
		}
	}
	temp3 = remove_conflict(temp3);
	N.miss.clear();
	for(int i = 0 ; i < temp3.size() ; i++)	N.miss.insert(temp3[i]);
	N.miss.insert(nt);
	B[vertex] = true;
	B[nt] = true;
	return N;	
}

void fun(int vertex)
{
	visi[vertex] = true;
	B[vertex] = true;
	Node N;
	N.comp.insert(vertex);
	for(it = adj[vertex].begin() ; it != adj[vertex].end() ; it++)	N.miss.insert((*it)) , B[(*it)] = true;
	N.miss.insert(nt);
	B[nt] = true;
	cout << "begin ";
	for(int i = 0 ; i < nt ; i++)	if(!B[i])	cout << i << endl;
	cout << endl;
	int idx;
	int off;
	while(1)
	{
		idx = bsearch();
		if(idx == -1)	break;
		N = merge(N,idx);
	}
	ans.push_back(N);
}

int main()
{
	scanf("%d %d",&nt,&mt);
	int u,v;
	for(int i = 0 ; i < mt ; i++)
	{	
		scanf("%d %d",&u,&v);
		u--;
		v--;
		adj[u].insert(v);
		adj[v].insert(u);
	}
	for(int i = 0 ; i < nt ; i++)	adj[i].insert(nt);
	memset(visi,false,sizeof(visi));
	memset(B,false,sizeof(B));
	B[nt] = true;
	fun(0);
	/*
	for(int i = 0 ; i < nt ; i++)
	{		
		if(!visi[i])
		{
			fun(i);
			memset(B,false,sizeof(B));
		}	
	}
	*/
	cout << ans.size() << endl;
	for(int i = 0 ; i < ans.size() ; i++)
	{	
		cout << ans[i].comp.size() << " ";
		for(it = ans[i].comp.begin() ; it != ans[i].comp.end() ; it++)	cout << (*it) + 1 << " ";
		cout << endl;
	}
	return 0;
}
