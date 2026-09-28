#include<stdio.h>
main()
{
	int product_price=2000;
	float discount=10;
	bool isMember=true;
	int normaldiscount,afterdiscount,extradiscount,finalprice;
	
	printf("\nproduct price=%d",product_price);
	normaldiscount = product_price * discount / 100;
	printf("\nnormal discount=%d",normaldiscount);
	afterdiscount = product_price - normaldiscount;
	printf("\nafterdicount=%d",afterdiscount);
	
	if(isMember == true)
	{
		extradiscount = afterdiscount * 5 / 100;
		printf("\nextradiscount=%d",extradiscount);
	}
	finalprice=afterdiscount-extradiscount;
	printf("\nfinal price=%d",finalprice);
}
