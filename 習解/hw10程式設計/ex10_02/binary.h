void search(int data[], int size, int searchNum)
{
	int n, i, j, t;
	int num=-1, low=0, high=5, midNum=0; /* searchNum:�j�M��*/
	/*��w�ƧǪk*/
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
	/*�L�X�Ƨǫ᪺���*/
	printf("\n");
	printf(" �Ƨǫ�G");
	for(i=0;i<size;i++)
	{
		printf("%d ", data[i]);
	}
	printf("\n\n");
	/*�G���j�M�k*/
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
		printf(" �S�� %d �o�ӼƦr!\n", searchNum);
	}
	else
	{
		printf(" �Ƨǫ��� %d �O�� %d �ӼƦr!\n", searchNum, (num+1));  
	}
}
