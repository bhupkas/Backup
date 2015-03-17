#include <cstdio>
#include <cmath>
#include <algorithm>
#define eps 1e-9
using namespace std;

class Point
{
	public:
		double x,y;
		Point const operator-(Point& a)
		{
			Point r;
			r.x=x-a.x;
			r.y=y-a.y;
			return r;
		}
};

int n;
Point* points;

double dist(int idx1,int idx2)
{
	Point r=points[idx1]-points[idx2];
	return sqrt((r.x)*(r.x)+(r.y)*(r.y));
}

double DotProduct(Point a,Point b)
{
	return ((a.x)*(b.x)+(a.y)*(b.y));
}

double CrossProduct(Point a,Point b)
{
	return ((a.x)*(b.y)-(a.y)*(b.x));
}

double ComputeDiameter()
{
	double temp,diameter=0,a,b,c,TwiceArea;
	for(int i=0;i<n;i++)
		for(int j=i+1;j<n;j++)
			for(int k=j+1;k<n;k++)
			{
				a=dist(i,j);
				b=dist(j,k);
				c=dist(k,i);
				if(DotProduct(points[i]-points[k],points[j]-points[k])<0)
					temp=a;
				else if(DotProduct(points[i]-points[j],points[k]-points[j])<0)
					temp=c;
				else if(DotProduct(points[k]-points[i],points[j]-points[i])<0)
					temp=b;
				else
				{
					TwiceArea=fabs(CrossProduct(points[i]-points[j],points[k]-points[j]));
					temp=(a*b*c)/TwiceArea;
				}
				diameter=max(diameter,temp);
			}
	return diameter;
}

int main()
{
	scanf("%d",&n);
	points=new Point[n];
	for(int i=0;i<n;i++)
		scanf("%lf %lf",&points[i].x,&points[i].y);
	double diameter=ComputeDiameter();
	printf("%.2lf\n",diameter);
	return 0;
}