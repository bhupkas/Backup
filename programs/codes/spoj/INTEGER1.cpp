/* bhupkas */

#include "bits/stdc++.h"

using namespace std;  

typedef long long LL;  

LL A[100];  
LL power(LL a,LL b)  
{  
    LL re = 1LL;
    while(b)
    {
    	if(b&1)	re = re * a;
    	a = a * a;
    	b /= 2;
    }
    return re;
}  
LL lim(LL a,LL i)  
{  
    LL k=pow(a,1.0/i)-1;  
    while(1)  
    {  
        if(pow(k*1.0,i*1.0)>1e18||power(k,i)>a) return k-1;  
        k++;  
    }  
}  
LL fun(LL a)  
{  
    LL re = a;  
    for(int i=2;;i++)  
    {  
        LL k = lim(a,(LL)i);  
        if(k==1) return re;  
        re += (k-1)*A[i];  
    }  
}  
int main()  
{  
    for(int i=1;i<100;i++) 	A[i] = i;  
    for(int i=1;i<100;i++) 
    	for(int j=1;j<i;j++) 
    		if(i%j==0) 
    			A[i] -= A[j];  
    LL a,b;  
    while(1) 
    {
    	cin >> a >> b;
    	if(a + b == 0)	break;
    	cout<< fun(b) - fun(a-1) << endl;  
    }
    return 0;  
}  
