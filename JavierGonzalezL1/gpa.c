/*
Name: Javier Gonzalez
ID: 5754068
I affirm that I wrote this program myself without any help from any
other people or sources from the internet
*/
#include <stdio.h>

int main()
{

	char aa[7] = "COP2210";
	char ba[7] = "ENC1101";
	char ca[7] = "CGS3095";
	int ab=3;
	int bb=3;
	int cb=3;
	float ac=4.00;
	float bc=2.67;
	float cc=3.00;
	printf("\nStudent Name: Javier Gonzalez\n");
	printf("Panther ID: 5754068\n");
	printf("----------------------------------------------------\n");
	printf("|Course   | Credits |   Grade | Grade Points Earned|\n");
	printf("|%s  |%8.0d |%8.2f |%19.2f |\n", aa, ab, ac, ab*ac);
	printf("|%s  |%8.0d |%8.2f |%19.2f |\n", ba, bb, bc, bb*bc);
	printf("|%s  |%8.0d |%8.2f |%19.2f |\n", ca, cb, cc, cb*cc);
	printf("|Total    |%8.0d |         |%19.2f |\n", ab+bb+cb, 
ab*ac+bb*bc+cb*cc);
	printf("----------------------------------------------------\n\n");
	printf("Current GPA: %4.2f\n\n", (ac+bc+cc)/3);
	return 0;
	
}
