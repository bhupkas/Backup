/* bhupkas */

#include "bits/stdc++.h"

using namespace std;

int read () {
	bool minus = false;
	int result = 0;
	char ch;
	ch = getchar();
	while (true) {
		if (ch == '-') break;
		if (ch >= '0' && ch <= '9') break;
		ch = getchar();
	}
	if (ch == '-') minus = true; else result = ch-'0';
	while (true) {
		ch = getchar();
		if (ch < '0' || ch > '9') break;
		result = result*10 + (ch - '0');
	}
	if (minus)
		return -result;
	else
		return result;
}

int M[100005],F[100005];

pair < int , int > p[100005];

map < int , int > mymap1,mymap2;

int array[100005];
int dummyArray[100005];

long long mergesort(int start, int end)
{ 
    if (start == end)
    {  
        return 0;
    }
    
    int mid = start + (end - start) / 2;
 
    long long ret1 = mergesort(start, mid);
    long long ret2 = mergesort(mid + 1, end);
 
    int i = start;
    int j = mid + 1;
    int k = start;
    long long ret3 = 0;
 
    while(i <= mid && j <= end)
    {
        if (array[i] < array[j])
        {
            dummyArray[k++] = array[i++];    
        } 
        else
        {
            ret3 += (mid - i) + 1;
            dummyArray[k++] = array[j++];   
        }
    }
    while(i <= mid)
    {
        dummyArray[k++] = array[i++];
    }
    while(j <= end)
    { 
        dummyArray[k++] = array[j++];
    }
 
    memcpy(array+start,dummyArray+start,sizeof(array[0])*(end-start+1)); 
    return (ret1 + ret2 + ret3);
}

int main()
{	
	int n;
	n = read();
	for(int i = 0 ; i < n ; i++)
		M[i] = read() , F[i] = read() , p[i] = make_pair(M[i],F[i]);
	sort(M,M+n);
	sort(F,F+n);
	for(int i = 0 ; i < n ; i++)	mymap1[M[i]] = i , mymap2[F[i]] = i;
	for(int i = 0 ; i < n ; i++)	array[mymap1[p[i].first]] = mymap2[p[i].second];
	printf("%lld\n",mergesort(0,n-1));
	return 0;
}
