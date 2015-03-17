#include"iostream"
#include"stdio.h"
#include"vector"
#include"algorithm"
#include"set"
#include"map"
#include"math.h"
#include"string.h"
#include"string"
using namespace std;
#define FOR(i,a,b)	for(i=a;i<b;i++)
#define PI 3.14159265
typedef long long int LL;
int main()
	{
	double w,h;
	int alp;
	double dd,to,ans;
	cin>>w>>h>>alp;
	alp=min(alp,180-alp);
	if(alp==90)
		{
		h=min(w,h);
		printf("%0.9lf\n",h*h);	return 0;
		}
	if(alp==0)
		{
		printf("%0.9lf\n",w*h);	return 0;
		}
	dd=(double)alp;
	to=(double)(w*h);
	double ar1,ar2;
	double t1,t2;
	double ang=dd*PI/180;
	t1= w/2 -(h/2)*sin(ang) + (h/2)*(1-cos(ang))/(tan(ang));
	t2= h/2 -(w/2)*sin(ang) + (w/2)*(1-cos(ang))/(tan(ang));
	ar1= t1*t1*tan(ang);
	ar2= t2*t2*(tan(ang));
	printf("%0.9lf\n",to-ar1-ar2);
	return 0;
	}
