in =0;
				fi = ans;
				while(in<=fi)
				{
					if(in==fi)
					{
						if(ar[in]==n)
						{
							sol= in;
							break;
						}
					}
					else
					{
						mi = (in+fi)/2;
						if(ar[mi]==n)
						{
							sol = mi;
							break;
						}
						else if(ar[mi]<n)
							in = mi +1;
						else 
							fi = mi-1;
					}
				}