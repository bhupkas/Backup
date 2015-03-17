if (i == 0)
{
	if (!(mask1 & (1 << i)) && !(mask2 & (1 << (i ))))
	{
		int value = doIt1 (index);
		search (index, mask1 | (1 << i), (mask2 | (1 << i)) | (1 << (i + 1)), newMask, cost + value);
	}	
}