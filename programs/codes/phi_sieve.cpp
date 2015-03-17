for(i=2,phi[1]=1; i<SIZE; i++)
{
	if(!phi[i])
	{
		phi[i] = i-1;
		for(j=(i<<1); j<SIZE; j+=i)
		{
			if(!phi[j]) phi[j] = j;
			phi[j] = phi[j]/i*(i-1);
		}
	}
}