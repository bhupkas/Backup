#include"stdio.h"
#include"vector"
#include"map"
#include"algorithm"
using namespace std;
struct node
	{
		int x,y;
	};
typedef struct node Node;
Node A,B,C;
bool angle()
	{
		if((A.y-B.y)*(C.y-B.y)==-1*((A.x-B.x)*(C.x-B.x)))	return true;
		return false;
	}
int main()
	{
		
		scanf("%d %d",&A.x,&A.y);
		scanf("%d %d",&B.x,&B.y);
		scanf("%d %d",&C.x,&C.y);
		if(angle()==false)	printf("TOWARDS");
		else
			{
				
			}
		return 0;
	}