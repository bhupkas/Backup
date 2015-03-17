void inverseArray() 
	{
	    In[1] = 1;
	    for(int i = 2; i <= 1600009; i++) 

	        In[i] = (-(mod/i)*In[mod%i])%mod+mod;
	}