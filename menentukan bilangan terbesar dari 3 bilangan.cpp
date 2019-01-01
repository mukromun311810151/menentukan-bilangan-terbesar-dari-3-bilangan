#include <iostream>
using namespace std;

int main ()
{
	int A,B,C;
	
	printf("============================================\n");
	printf("MENENTUKAN BILANGAN TERBESAR DARI 3 BILANGAN\n");
	printf("============================================\n");
	
	printf("MASUKKAN BILANGAN KE 1 = "); scanf("%i", &A);
	printf("MASUKKAN BILANGAN KE 2 = "); scanf("%i", &B);
	printf("MASUKKAN BILANGAN KE 3 = "); scanf("%i", &C);
	
	if (A>B && A>C)
	printf("BILANGAN YANG TERBESAR ADALAH = %i",A);
	else if (B>A && B>C)
	printf("BILANGAN YANG TERBESAR ADALAH = %i",B);
	else
	printf("BILANGAN YANG TERBESAR ADALAH = %i",C);
	
	return 0;
}
