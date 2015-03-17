/*
 *  segtree.cpp
 */


const int max_n = 100000;		//10^5

int val[max_n];					//point values
int beg[4*max_n], end[4*max_n], seg[4*max_n];

void make_seg(int pos, int start, int finish)			//recursively define beginning and ending positions of the segtree
{
	beg[pos] = start;
	end[pos] = finish;
	seg[pos] = 0;										// "additive identity", may be modified for different 'initial' values
	
	if(start == finish)
		return;
	
	int mid = (start + end)/2;
	make_seg(2*pos, start, mid);
	make_seg(2*pos+1, mid+1, finish);
}

int query(int pos, int start, int finish)
{
	//interval completely contains current node
	if(start <= beg[pos] && finish >= end[pos])
		return seg[pos];
	
	int left = 2*pos, right = left+1;
	//interval intersects only left child
	if(finish <= end[left])
		return query(left, start, finish);
	
	//interval intersects only right child
	if(start >= beg[right])
		return query(right, start, finish);
	
	//split and combine
	int leftans = query(left, start, finish);
	int rightans = query(right, start, finish);
	return leftans + rightans;		//modify this for other kinds of segment trees. max(left, right) for max-queries
}

void update(int pos, int idx, int num)		//update the value at idx (DIFFERENT FROM POS). Recursively: currently at node pos
{
	if(beg[pos] == end[pos])			// Here it would be equal to idx
	{	
		seg[pos] = num;					// modify value here
		return;
	}
	
	if(idx >= beg[2*pos + 1])
	//goto right child
		update(2*pos + 1, idx, num);
	else 
	//goto left child
		update(2*pos, idx, num);
	
	seg[pos] = seg[2*pos] + seg[2*pos+1];
}



int main()
{
	make_seg(1, 0, max_n-1);
}
