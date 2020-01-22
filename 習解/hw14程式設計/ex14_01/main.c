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
	printf("   Sunday是一個星期的第%2d 天\n", Sunday);
	printf("   Monday是一個星期的第%2d 天\n", Monday);   
	printf("  Tuesday是一個星期的第%2d 天\n", Tuesday);
	printf("Wednesday是一個星期的第%2d 天\n", Wednesday);       
	printf(" Thursday是一個星期的第%2d 天\n", Thursday);
	printf("   Friday是一個星期的第%2d 天\n", Friday);   
	printf(" Saturday是一個星期的第%2d 天\n", Saturday);
	
	system("PAUSE");
	return 0;
}
