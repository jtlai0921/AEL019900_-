#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
enum WeekDays
{
   Sunday=1,
   Monday,
   Tuesday,
   Wednesday,
   Thursday,
   Friday,
   Saturday
};

int main(int argc, char *argv[]) {
	printf("   Sunday�O�@�ӬP������%2d ��\n", Sunday);
	printf("   Monday�O�@�ӬP������%2d ��\n", Monday);   
	printf("  Tuesday�O�@�ӬP������%2d ��\n", Tuesday);
	printf("Wednesday�O�@�ӬP������%2d ��\n", Wednesday);       
	printf(" Thursday�O�@�ӬP������%2d ��\n", Thursday);
	printf("   Friday�O�@�ӬP������%2d ��\n", Friday);   
	printf(" Saturday�O�@�ӬP������%2d ��\n", Saturday);
	
	system("PAUSE");
	return 0;
}
