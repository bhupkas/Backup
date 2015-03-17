int i,j;
		for (i = 1; i <= SIZE; i++) 
            for (j = i; j <= SIZE; j += i) 
                    divisorSum[j] += i;