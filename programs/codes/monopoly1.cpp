#include"stdio.h"
#include"vector"
#include"string.h"
#include"string"
#include"algorithm"
#include"iostream"
using namespace std;
struct prop
	{
		int index;
		int color;
		int owner;
		int price;
		int rent;
		int cost_of_house;
		int no_houses;
		int mot;
		int sale;
	};
typedef struct prop Prop;
Prop groups[10][10];
int co[10];
Prop P[40];
Prop Remain[40];
bool Incomplete[10];
int id,pos[3],val[3];
int Inco_mine[40];
int size_Inco_mine;
int group_8_sort[40];
int sellable[40];
bool Comp_house[10];
int sellable_size=0;
int Tocomplete_our[10];
int Tocomplete_opp[10];
void ini_structure(int index,int color,int owner,int price,int rent,int cost_of_house,int no_houses,int mot,int sale,int i,int j)
	{
		groups[i][j].index=index;
		groups[i][j].color=color;
		groups[i][j].owner=owner;
		groups[i][j].price=price;
		groups[i][j].rent=rent;
		groups[i][j].cost_of_house=cost_of_house;
		groups[i][j].no_houses=no_houses;		
		groups[i][j].mot=mot;
		groups[i][j].sale=sale;
	}
void init()
	{
		int i;
		for(i=0;i<10;i++)	co[i]=0;
		ini_structure(1,0,-1,-1,-1,-1,-1,-1,-1,0,0);
		ini_structure(3,0,-1,-1,-1,-1,-1,-1,-1,0,1);
		ini_structure(6,1,-1,-1,-1,-1,-1,-1,-1,1,0);
		ini_structure(8,1,-1,-1,-1,-1,-1,-1,-1,1,1);
		ini_structure(9,1,-1,-1,-1,-1,-1,-1,-1,1,2);
		ini_structure(11,2,-1,-1,-1,-1,-1,-1,-1,2,0);
		ini_structure(13,2,-1,-1,-1,-1,-1,-1,-1,2,1);
		ini_structure(14,2,-1,-1,-1,-1,-1,-1,-1,2,2);
		ini_structure(16,3,-1,-1,-1,-1,-1,-1,-1,3,0);
		ini_structure(18,3,-1,-1,-1,-1,-1,-1,-1,3,1);
		ini_structure(19,3,-1,-1,-1,-1,-1,-1,-1,3,2);
		ini_structure(21,4,-1,-1,-1,-1,-1,-1,-1,4,0);
		ini_structure(23,4,-1,-1,-1,-1,-1,-1,-1,4,1);
		ini_structure(24,4,-1,-1,-1,-1,-1,-1,-1,4,2);
		ini_structure(26,5,-1,-1,-1,-1,-1,-1,-1,5,0);
		ini_structure(27,5,-1,-1,-1,-1,-1,-1,-1,5,1);
		ini_structure(29,5,-1,-1,-1,-1,-1,-1,-1,5,2);
		ini_structure(31,6,-1,-1,-1,-1,-1,-1,-1,6,0);
		ini_structure(32,6,-1,-1,-1,-1,-1,-1,-1,6,1);
		ini_structure(34,6,-1,-1,-1,-1,-1,-1,-1,6,2);
		ini_structure(37,7,-1,-1,-1,-1,-1,-1,-1,7,0);
		ini_structure(39,7,-1,-1,-1,-1,-1,-1,-1,7,1);
		ini_structure(5,8,-1,-1,-1,-1,-1,-1,-1,8,0);
		ini_structure(12,8,-1,-1,-1,-1,-1,-1,-1,8,1);
		ini_structure(15,8,-1,-1,-1,-1,-1,-1,-1,8,2);
		ini_structure(25,8,-1,-1,-1,-1,-1,-1,-1,8,3);
		ini_structure(28,8,-1,-1,-1,-1,-1,-1,-1,8,4);
		ini_structure(35,8,-1,-1,-1,-1,-1,-1,-1,8,5);
		co[0]=2;
		co[1]=3;
		co[2]=3;
		co[3]=3;
		co[4]=3;
		co[5]=3;
		co[6]=3;
		co[7]=2;
		co[8]=6;
	}
void rearrange()
	{
		int i;
		int j;
		int k;
		int remain=0;
		bool flag;
		for(i=0;i<40;i++)
			{
				flag=false;
				for(j=0;j<9;j++)
				{
					for(k=0;k<co[j];k++)
					{
						if(P[i].index==groups[j][k].index)	
						{
							flag=true;
							ini_structure(P[i].index,P[i].color,P[i].owner,P[i].price,P[i].rent,P[i].cost_of_house,P[i].no_houses,P[i].mot,P[i].sale,j,k);
						}
					}
				}
				if(flag=false)
					{
						Remain[remain].index=P[i].index;
						Remain[remain].color=P[i].color;
						Remain[remain].owner=P[i].owner;
						Remain[remain].price=P[i].price;
						Remain[remain].rent=P[i].rent;
						Remain[remain].cost_of_house=P[i].cost_of_house;
						Remain[remain].no_houses=P[i].no_houses;		
						Remain[remain].mot=P[i].mot;
						Remain[remain].sale=P[i].sale;
						remain++;
					}
			}
	}
bool fun(int i,int j)
	{
		return P[Inco_mine[i]].price<P[Inco_mine[j]].price;
	}
bool fun1(int i,int j)
	{
		return P[group_8_sort[i]].price<P[group_8_sort[j]].price;
	}
bool fun2(int i,int j)
	{
		return P[sellable[i]].price<P[sellable[j]].price;
	}
void incom()
	{
		int i;
		for(i=0;i<10;i++)	Incomplete[i]=false;
		int j;
		for(i=0;i<9;i++)
			{
				for(j=0;j<co[i];j++)
					{
						if(groups[i][j].owner!=id||((groups[i][j].owner==id&&groups[i][j].mot==1)))
						{
							Incomplete[i]=true;
							break;
						}
					}
			}
		int temp=0;
		for(i=0;i<9;i++)
		{
			if(Incomplete[i])
			{
				for(j=0;j<co[i];j++)
				{
					if(groups[i][j].owner==id&&groups[i][j].mot==0)
						{
							Inco_mine[temp]=groups[i][j].index;
							temp++;
						}
				}
			}
		}
		sort(Inco_mine,Inco_mine+temp,fun);
		size_Inco_mine=temp;
	}
void MORTGAGE()
	{
		int i,j,total,maximum=-1000000000,ind_temp;
		bool sell=false;
		for(i=0;i<10;i++)	Comp_house[i]=false;
		for(i=0;i<size_Inco_mine;i++)
			{
				if(((4*P[Inco_mine[i]].price)/5) > maximum)
					{
						maximum = ((4*P[Inco_mine[i]].price)/5);
						ind_temp = Inco_mine[i];  
					}
				if(((4*P[Inco_mine[i]].price)/5)+val[id] > 0)
				{			
					cout<<"MORTGAGE"<<" "<<Inco_mine[i]<<endl;
					return;
				}
			}
		if(!Incomplete[8])
			{
			for(i=0;i<co[8];i++)
				group_8_sort[i]=groups[8][i].index;
			sort(group_8_sort,group_8_sort+co[8],fun1);
			for(i=0;i<co[8];i++)
				{
					if(((4*P[group_8_sort[i]].price)/5) > maximum)
					{
						maximum = ((4*P[group_8_sort[i]].price)/5);
						ind_temp = group_8_sort[i];  
					}
					if(((4*P[group_8_sort[i]].price)/5)+val[id] > 0)	
					{
						cout<<"MORTGAGE"<<" "<<group_8_sort[i]<<endl;
						return;
					}	
				}
			}
		for(i=0;i<8;i++)
			{
				if(!Incomplete[i])
				{
					for(j=0;j<co[i];j++)
					{
						if(groups[i][j].no_houses==1)
						{
							Comp_house[i]=true;
							break;
						}
					}
				}
			}
		for(i=0;i<8;i++)
			{
				if(!Incomplete[i] && !Comp_house[i])
					{
						for(j=0;j<co[i];j++)
						{
							if(((4*groups[i][j].price)/5) > maximum)
								{
									maximum = ((4*groups[i][j].price)/5);
									ind_temp = groups[i][j].index;  
								}
							if(((4*groups[i][j].price)/5)+val[id] > 0)
							{
								cout<<"MORTGAGE"<<" "<<groups[i][j].index<<endl;
								return;
							}
						}
					}	
			}
		for(i=0;i<8;i++)
			{
				total=0;
				if(!Incomplete[i] && Comp_house[i])
				{	
					for(j=0;j<co[i];j++)
					{
						total+=(((groups[i][j].no_houses)*(groups[i][j].cost_of_house))/2);
					}
					for(j=0;j<co[i];j++)
					{
						if(((4*groups[i][j].price)/5) > maximum)
							{
								maximum = ((4*groups[i][j].price)/5);
								ind_temp = groups[i][j].index;
								sell=true;  
							}
						if(total + (4*(groups[i][j].price)/5) + val[id] > 0)
							{
								cout<<"SELL"<<" "<<groups[i][j].index<<endl;
								return;
							} 
					}
				}
			}
		if(sell)
			{
				cout<<"SELL "<<ind_temp<<endl;	
			}
		else
			{
				cout<<"MORTGAGE "<<ind_temp<<endl;
			}
	return;
	}
void pri(int i)
	{
		if(pos[id] == sellable[i]) 
			{
				cout<<"BUY"<<endl;
			}
		else
			{
				cout<<"BUY "<<sellable[i]<<endl;	
			}
	}
void BUY()
	{
		int i,k,l,j;
		bool flag;
		for(i=0;i<9;i++)
		{
			for(j=0;j<co[i];j++)
			{
				if(groups[i][j].sale==1 || (groups[i][j].mot == 1 && groups[i][j].owner==id) || (pos[id]==groups[i][j].index && groups[i][j].owner == 0))
				sellable[sellable_size++]=groups[i][j].index;
			}
		}
		sort(sellable,sellable+sellable_size,fun2);
		for(i=0;i<9;i++)
			{
				Tocomplete_our[i]=0;Tocomplete_opp[i]=0;
				if(!Incomplete[i])	Tocomplete_opp[i]=co[i];
				if(Incomplete[i])
				{
					for(j=0;j<co[i];j++)
						{
							if(!(groups[i][j].owner==id && groups[i][j].mot==0))
							{
								Tocomplete_our[i]++;
							}
						}
					for(j=0;j<co[i];j++)
						{
							if(groups[i][j].owner==id || groups[i][j].owner==0)
								Tocomplete_opp[i]++;	
						}
				}
			}
		for(i=0;i<sellable_size;i++)
			{
				if((Tocomplete_our[P[sellable[i]].color - 1] == 1) && (P[sellable[i]].mot == 1) && (val[id] - P[sellable[i]].price > 150 ))
					{
						pri(i);
						return;
					}
			}
		for(i=0;i<sellable_size;i++)
			{
				if(((Tocomplete_our[P[sellable[i]].color - 1] == 1) &&  (val[id] - P[sellable[i]].price > 150 )))
					{
						pri(i);
						return;
					}
			}
		for(i=0;i<sellable_size;i++)
			{
				if(((Tocomplete_opp[P[sellable[i]].color - 1] == 1) &&  (val[id] - P[sellable[i]].price > 150 )))
					{
						pri(i);
						return;
					}
			}
		for(i=0;i<sellable_size;i++)
			{
				if(((P[sellable[i]].mot == 1) && (P[sellable[i]].owner==id) && (val[id] - P[sellable[i]].price > 150 )))
					{
						pri(i);
						return;
					}
			}
		for(i=0;i<sellable_size;i++)
			{
				if((Tocomplete_our[P[sellable[i]].color -1 ]==2) && (Tocomplete_opp[P[sellable[i]].color- 1]==co[i]) && (val[id]-P[sellable[i]].price > 150 ))
					{
						pri(i);
						return;
					}
			}	
		for(i=0;i<sellable_size;i++)
			{
				if((Tocomplete_opp[P[sellable[i]].color -1 ]==2) && (val[id]-P[sellable[i]].price >150 ))
					{
						pri(i);
						return;
					}
			}
		for(i=0;i<sellable_size;i++)
			{
				if((val[id]-P[sellable[i]].price > 150 ))
					{
						pri(i);
						return;
					}
			}
		for(i=0;i<9;i++)
			{
				if(!Incomplete[i])
					{
						for(j=0;j<co[i];j++)
							{
								flag=true;
								for(k=0;k<40;k++)
								{
									if(P[k].owner==id && P[k].mot==1)	flag =false;
								}
								if(flag && groups[i][j].no_houses>0 && (val[id] - groups[i][j].cost_of_house >=150) && groups[i][j].no_houses<4 )
								{
									cout<<"BUILD "<<groups[i][j].index<<endl;
									return;
								}
							}
					}
			}
		for(i=0;i<9;i++)
			{
				if(!Incomplete[i])
					{
						for(j=0;j<co[i];j++)
							{
								flag=true;
								for(k=0;k<40;k++)
								{
									if(P[k].owner==id && P[k].mot==1)	flag =false;
								}
								if(groups[i][j].index==5 || groups[i][j].index==12 || groups[i][j].index== 15 || groups[i][j].index== 25 || groups[i][j].index== 28 || groups[i][j].index== 35)	flag=false;
								if(flag && (val[id] - groups[i][j].cost_of_house >=150) && groups[i][j].no_houses<4)
								{
									cout<<"BUILD "<<groups[i][j].index<<endl;
									return;
								}
							}	
					}
			}
		cout<<"PASS"<<endl;
	}
int main()
	{
		init();
		int i;
		scanf("%d",&id);
		for(i=0;i<40;i++)
			{
				scanf("%d %d %d %d %d %d %d %d %d",&P[i].index,&P[i].color,&P[i].owner,&P[i].price,&P[i].rent,&P[i].cost_of_house,&P[i].no_houses,&P[i].mot,&P[i].sale);
			}
		rearrange();
		incom();	
		scanf("%d %d %d %d",&pos[1],&val[1],&pos[2],&val[2]);
		if(val[id]<0)
		{
			MORTGAGE();
		}
		else if(val[id]>40)
		{
			BUY();
		}
		else
		{
			cout<<"PASS"<<endl;
		}
		return 0;
	}
