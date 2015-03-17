
    #include<cstdio>
    #include<iostream>
    #include<vector>
    using namespace std;
     
    int main()
    {
    int H,W;
    int A[400][400];
    scanf("%d%d",&H,&W);
    long long i,j,sum;
    for(i=0;i<H;i++)
    for(j=0;j<W;j++)
    scanf("%d",&A[i][j]);
    int max=-1,maxi,maxj;
    for(i=0;i<H;i++)
    for(j=0;j<W;j++)
    if(A[i][j]>max)
    {max=A[i][j];maxi=i;maxj=j;}
    vector<int> rows;
    vector<int> columns;
    int insert=0;
    for(i=0;i<H;i++)
    {
    sum=0;
    for(j=0;j<W;j++)
    {
    sum+=A[i][j];
    }
    if(sum>0){
    rows.push_back(i);insert=1;}
    }
    if(insert==0)
    {
    printf("1 1\n");
    printf("%d\n%d\n",maxi,maxj);
    return 0;
    }
    for(j=0;j<W;j++)
    {
    sum=0;
    for(i=0;i<rows.size();i++)
    {
    int r=rows[i];
    sum+= A[r][j];
    }
    if(sum>0)
    columns.push_back(j);
    }
    printf("%d %d\n",rows.size(),columns.size());
    for(i=0;i<rows.size();i++)
    printf("%d ",rows[i]);
    cout<<endl;
    for(i=0;i<columns.size();i++)
    printf("%d ",columns[i]);
    cout<<endl;
    return 0;
    }

