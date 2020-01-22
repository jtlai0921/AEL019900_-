void search(int data[], int size, int searchNum)
{
	int n, i, j, t;
	int num=-1, low=0, high=5, midNum=0; /* searchNum:搜尋值*/
	/*氣泡排序法*/
	for(i=size-2;i>=0;i--)
	{
		for(j=0;j<=i;j++)
		{
			if(data[j]>data[j+1])
			{
				t=data[j];
				data[j]=data[j+1];
				data[j+1]=t;
			}
		}
	}
	/*印出排序後的資料*/
	printf("\n");
	printf(" 排序後：");
	for(i=0;i<size;i++)
	{
		printf("%d ", data[i]);
	}
	printf("\n\n");
	/*二分搜尋法*/
	do
	{
		midNum=(low+high)/2;
		if(data[midNum]==searchNum)
		{
			num=midNum;
			break;
		}
		if(data[midNum]>searchNum)
		{
			high=midNum-1;
		}
		else
		{
			low=midNum+1;
		}
	}while(low<=high);
	if(num==-1)
	{
		printf(" 沒有 %d 這個數字!\n", searchNum);
	}
	else
	{
		printf(" 排序後找到 %d 是第 %d 個數字!\n", searchNum, (num+1));  
	}
}
