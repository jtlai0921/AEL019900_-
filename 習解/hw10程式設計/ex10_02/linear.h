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
		printf("\n �L�����\n");
	}
	else
	{
		printf("\n %d �O�� %d �ӼƦr! \n", searchNum, (num+1));
	
	}
}
