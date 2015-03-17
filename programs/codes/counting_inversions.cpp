long long mergesort(int start, int end)
{ 
    if (start == end)
    {  
        return 0;
    }
    
    int mid = start + (end - start) / 2;
 
    long long ret1 = mergesort(start, mid);
    long long ret2 = mergesort(mid + 1, end);
 
    int i = start;
    int j = mid + 1;
    int k = start;
    long long ret3 = 0;
 
    while(i <= mid && j <= end)
    {
        if (array[i] < array[j])
        {
            dummyArray[k++] = array[i++];    
        } 
        else
        {
            ret3 += (mid - i) + 1;
            dummyArray[k++] = array[j++];   
        }
    }
    while(i <= mid)
    {
        dummyArray[k++] = array[i++];
    }
    while(j <= end)
    { 
        dummyArray[k++] = array[j++];
    }
 
    memcpy(array+start,dummyArray+start,sizeof(array[0])*(end-start+1)); 
    return (ret1 + ret2 + ret3);
}
