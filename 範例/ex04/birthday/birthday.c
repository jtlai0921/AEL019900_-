#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int year, moon, day;
	printf("�п�J�ͤ�(yyyy/mm/dd)�G");
	scanf("%d/%d/%d", &year, &moon, &day);
	printf("�X�ͩ�褸%d�~%d��%d��\n\n", year, moon, day);

	system("PAUSE");
	return 0;
}
