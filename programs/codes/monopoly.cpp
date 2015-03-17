#include <iostream>
#include <cstdio>
#include <vector>
#include <cstring>
#include <string>
#include <algorithm>
#define MINPRICE 150
#define push_back PB
using namespace std;

class property 
{
	public:
		int colorCode,owner,purchasePrice,rent,buildingAmount,numHouses,mortgageFlag,saleFlag;
};
class player
{
	int position,cash;
};
vector<int> groups[9],ownGroups[9];
property site[40];
player Players[3];

void init(int id)
{
	groups[0].PB(1);groups[0].PB(3);
	groups[1].PB(6);groups[1].PB(8);groups[1].PB(9);
	groups[2].PB(11);groups[2].PB(13);groups[2].PB(14);
	groups[3].PB(16);groups[3].PB(18);groups[3].PB(19);
	groups[4].PB(21);groups[4].PB(23);groups[4].PB(24);
	groups[5].PB(26);groups[5].PB(27);groups[5].PB(29);
	groups[6].PB(31);groups[6].PB(32);groups[6].PB(34);
	groups[7].PB(37);groups[7].PB(39);
	groups[8].PB(5);groups[8].PB(12);groups[8].PB(15);groups[8].PB(25);groups[8].PB(28);groups[8].PB(35);
}

vector<int> incompleteGroups;		
vector<int> ownIncompleteGroups;	//stores which elements of incomplete groups are owned by us and at the same time haven't been mortgaged

int Mortgage(int id)
{
	for(int i=0;i<9;i++)
		for(int j=0;j<groups[i].size();j++)
			if(property[groups[i][j]].owner!=id || ((property[groups[i][j]].owner==id)&&(property[groups[i][j]].mortgageFlag==1)))
			{
				incompleteGroups.PB(i);
				break;
			}
	if(incompleteGroups.size()>0)
	{
		for(int i=0;i<incompleteGroups.size();i++)
			for(j=0;j<groups[incompleteGroups[i]].size();j++)
			{
				if(property[groups[incompleteGroups[i]][j]].owner==id && property[groups[incompleteGroups[i]][j]].mortgageFlag==0)
					ownIncompleteGroups.PB(groups[incompleteGroups[i]][j]);
			}
	}
	sort(ownIncompleteGroups,ownIncompleteGroups+ownIncompleteGroups.size());
	for(int i=0;i<ownIncompleteGroups.size();i++)
		if((property[ownIncompleteGroups[i]].purchasePrice*4)/5+Players[id].cash>0)
		{
			cout<<"MORTGAGE "<<ownIncompleteGroups[i]<<endl;
			return 0;
		}
	int cnt=0;
	for(i=0;i<6;i++)
		if(property[groups[8][i]].owner==id && property[groups[8][i]].mortgageFlag==0)
			cnt++;
	if(cnt==6)
	{
		
	}

}

int main()
{
	int id,temp,index;
	cin>>id;
	for(int i=0;i<40;i++)
		cin>>temp>>site[i].colorCode>>site[i].owner>>site[i].purchasePrice>>site[i].rent>>site[i].buildingAmount>>site[i].numHouses>>site[i].mortgageFlag>>site[i].saleFlag;
	for(int i=0;i<2;i++)
		cin>>Players[i].position>>Players[i].cash;
	init(id);
	if(player[id].cash<0)
	{
		index=Mortgage();
		cout<<"MORTGAGE "<<index<<endl;
	}
	return 0;
}