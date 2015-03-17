#include <iostream>
using namespace std;

int main(int argc,char *argv[])
{
	int num,ans=1,i;
	num=*argv[1]-'0';
	for(i=2;i<num;)
		ans*=i;
	cout<<ans<<endl;
	return 0;
}
