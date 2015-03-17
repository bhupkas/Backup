#include<vector>
using namespace std;

class CyclesInPermutations
{
public:
	static int maxCycle( vector <int> board)
	{
	int j,length[52];
	int max=0,temp,size,i;
	for(i=0;i<52;i++)	length[i]=0;
	vector<int>::iterator it;
	size=(int) board.size();
	for(j=0;j<size;j++) board[j]--;
	for(j=0;j<size;j++)
		{
			temp=j;
			while(board[j]!=temp)
				{
					length[j]++;
					j=board[j];
				}
		}
	for(j=0;j<size;j++)
		{
		if(length[j]>max)	max=length[j];
		}
	return max;
	}
};