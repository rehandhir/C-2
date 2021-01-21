#include"../ANSICF.h"
#include<stdio.h>
int main()
{
	printf("Fonts\n");
	printf(B"HELLO WORLD!\n"reset);
	printf(F"HELLO WORLD!\n"reset);
	printf(I"HELLO WORLD!\n"reset);
	printf(U "HELLO WORLD!\n"reset);
	printf(BL "HELLO WORLD!\n"reset);
	printf(RV"HELLO WORLD!\n"reset);
	printf(CO "HELLO WORLD!\n"reset);
	printf(DU "HELLO WORLD!\n"reset);

	printf("\nFOREGROUND COLOUR TEXT\n");
	printf(BLK "HELLO WORLD!\n"reset);
	printf(RED"HELLO WORLD!\n"reset);
	printf(YLO"HELLO WORLD!\n"reset);
	printf(BLU "HELLO WORLD!\n"reset);
	printf(MAG"HELLO WORLD!\n"reset);
	printf(CYN"HELLO WORLD!\n"reset);
	printf(WHT"HELLO WORLD!\n"reset);

	printf("\nREGULAR BG COLOUR TEXT\n");
	printf(BBLK "HELLO WORLD!"reset"\n");
	printf(BRED"HELLO WORLD!"reset"\n");
	printf(BGRN"HELLO WORLD!"reset"\n");
	printf(BYLO"HELLO WORLD!"reset"\n");
	printf(BBLU "HELLO WORLD!"reset"\n");
	printf(BMAG"HELLO WORLD!"reset"\n");
	printf(BCYN"HELLO WORLD!"reset"\n");
	printf(BWHT"HELLO WORLD!"reset"\n");

	printf("\nBRIGHT FOREGROUND COLOUR TEXT\n");
	printf(RBLK "HELLO WORLD!\n"reset);
	printf(RRED"HELLO WORLD!\n"reset);
	printf(RYLO"HELLO WORLD!\n"reset);
	printf(RBLU "HELLO WORLD!\n"reset);
	printf(RMAG"HELLO WORLD!\n"reset);
	printf(RCYN"HELLO WORLD!\n"reset);
	printf(RWHT"HELLO WORLD!\n"reset);

	printf("\nBRIGHT BG COLOUR TEXT\n");
	printf(RBBLK "HELLO WORLD!"reset"\n");
	printf(RBRED"HELLO WORLD!"reset"\n");
	printf(RBGRN"HELLO WORLD!"reset"\n");
	printf(RBYLO"HELLO WORLD!"reset"\n");
	printf(RBBLU "HELLO WORLD!"reset"\n");
	printf(RBMAG"HELLO WORLD!"reset"\n");
	printf(RBCYN"HELLO WORLD!"reset"\n");
	printf(RBWHT"HELLO WORLD!"reset"\n");
}