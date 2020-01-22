void search(int data[], int size, int searchNum)
{
	int i, num=-1;

	for(i=0;i<size;i++)
	{
		if(data[i]==searchNum)
		{
			num=i;
		}
	}
	if(num==-1)
	{
		printf("\n 無此資料\n");
	}
	else
	{
		printf("\n %d 是第 %d 個數字! \n", searchNum, (num+1));
	
	}
}
