    #include<stdio.h>
    #include<iostream>
    int main()
    {
        long long arr[3],d,e,f,g,h,k,l,m;
        int i,j,t;
        long long M=1000000007LL;
        scanf("%d",&t);
        while(t--)
        {
                  scanf("%lld%lld%lld",&arr[0],&arr[1],&arr[2]);
                  for(i=0;i<2;i++)
                  {
                                  for(j=i+1;j<3;j++)
                                  {
                                                  if(arr[i]>=arr[j])
                                                  {
                                                                    long long a=arr[i];
                                                                    arr[i]=arr[j];
                                                                    arr[j]=a;
                                                  }
                                  }
                  }
                  d=arr[0]%M;
                  e=arr[1]%M;
                  f=arr[2]%M;
                  g=(d*e)%M;
                  h=(g*f)%M;
                  k=(d*f)%M;
                  l=(2*g)%M;
                  m=(2*d)%M;
                  long long ans=(((h-l)%M-k)%M+m)%M;
		  ans=(ans+M)%M;
                  printf("%lld\n",ans%M);
        }
        //system("pause");
    }

