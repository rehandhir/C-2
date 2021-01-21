#include"../ANSI_fonts_design.h"
#include<stdio.h>
int main()
{
	printf("REGULAR COLOUR TEXT\n");
	printf(BLK "HELLO WORLD!\n"reset);
	printf(RED"HELLO WORLD!\n"reset);
	printf(YLO"HELLO WORLD!\n"reset);
	printf(BLU "HELLO WORLD!\n"reset);
	printf(MAG"HELLO WORLD!\n"reset);
	printf(CYN"HELLO WORLD!\n"reset);
	printf(WHT"HELLO WORLD!\n"reset);

	printf("\nREGULAR BRIGHT COLOUR TEXT\n");
	printf(BRBLK "HELLO WORLD!\n"reset);
	printf(BRRED"HELLO WORLD!\n"reset);
	printf(BRYLO"HELLO WORLD!\n"reset);
	printf(BRBLU "HELLO WORLD!\n"reset);
	printf(BRMAG"HELLO WORLD!\n"reset);
	printf(BRCYN"HELLO WORLD!\n"reset);
	printf(BRWHT"HELLO WORLD!\n"reset);

	printf("\nBOLD COLOUR TEXT\n");
	printf(BBLK "HELLO WORLD!\n"reset);
	printf(BRED"HELLO WORLD!\n"reset);
	printf(BYLO"HELLO WORLD!\n"reset);
	printf(BBLU "HELLO WORLD!\n"reset);
	printf(BMAG"HELLO WORLD!\n"reset);
	printf(BCYN"HELLO WORLD!\n"reset);
	printf(BWHT"HELLO WORLD!\n"reset);

	printf("\nFAINT COLOUR TEXT\n");
	printf(FBLK "HELLO WORLD!\n"reset);
	printf(FRED"HELLO WORLD!\n"reset);
	printf(FYLO"HELLO WORLD!\n"reset);
	printf(FBLU "HELLO WORLD!\n"reset);
	printf(FMAG"HELLO WORLD!\n"reset);
	printf(FCYN"HELLO WORLD!\n"reset);
	printf(FWHT"HELLO WORLD!\n"reset);

	printf("\nITALIC COLOUR TEXT\n");
	printf(IBLK"HELLO WORLD!\n"reset);
	printf(IRED"HELLO WORLD!\n"reset);
	printf(IYLO"HELLO WORLD!\n"reset);
	printf(IBLU "HELLO WORLD!\n"reset);
	printf(IMAG"HELLO WORLD!\n"reset);
	printf(ICYN"HELLO WORLD!\n"reset);
	printf(IWHT"HELLO WORLD!\n"reset);

	printf("\nUNDERLINE COLOUR TEXT\n");
	printf(UBLK"HELLO WORLD!\n"reset);
	printf(URED"HELLO WORLD!\n"reset);
	printf(UYLO"HELLO WORLD!\n"reset);
	printf(UBLU "HELLO WORLD!\n"reset);
	printf(UMAG"HELLO WORLD!\n"reset);
	printf(UCYN"HELLO WORLD!\n"reset);
	printf(UWHT"HELLO WORLD!\n"reset);

	printf("\nBLINK COLOUR TEXT\n");
	printf(BLBLK"HELLO WORLD!\n"reset);
	printf(BLRED"HELLO WORLD!\n"reset);
	printf(RV BLYLO"HELLO WORLD!\n"reset);
	printf(BLBLU "HELLO WORLD!\n"reset);
	printf(BLMAG"HELLO WORLD!\n"reset);
	printf(BLCYN"HELLO WORLD!\n"reset);
	printf(BLWHT"HELLO WORLD!\n"reset);

	printf("\nREVERSE VIDEO COLOUR TEXT\n");
	printf(RVBLK"HELLO WORLD!\n"reset);
	printf(RVRED"HELLO WORLD!\n"reset);
	printf(RVYLO"HELLO WORLD!\n"reset);
	printf(RVBLU "HELLO WORLD!\n"reset);
	printf(RVMAG"HELLO WORLD!\n"reset);
	printf(RVCYN"HELLO WORLD!\n"reset);
	printf(RVWHT"HELLO WORLD!\n"reset);

	printf("\nCROSSED-OUT COLOUR TEXT\n");
	printf(COBLK"HELLO WORLD!\n"reset);
	printf(CORED"HELLO WORLD!\n"reset);
	printf(COYLO"HELLO WORLD!\n"reset);
	printf(COBLU "HELLO WORLD!\n"reset);
	printf(COMAG"HELLO WORLD!\n"reset);
	printf(COCYN"HELLO WORLD!\n"reset);
	printf(COWHT"HELLO WORLD!\n"reset);

	printf("\nDOUBLE UNDERLINE COLOUR TEXT\n");
	printf(DUBLK"HELLO WORLD!\n"reset);
	printf(DURED"HELLO WORLD!\n"reset);
	printf(DUYLO"HELLO WORLD!\n"reset);
	printf(DUBLU "HELLO WORLD!\n"reset);
	printf(DUMAG"HELLO WORLD!\n"reset);
	printf(DUCYN"HELLO WORLD!\n"reset);
	printf(DUWHT"HELLO WORLD!\n"reset);

	printf("\nREGULAR BG COLOUR TEXT\n");
	printf(BGBLK "HELLO WORLD!"reset"\n");
	printf(BGRED"HELLO WORLD!"reset"\n");
	printf(BGGRN"HELLO WORLD!"reset"\n");
	printf(BGYLO"HELLO WORLD!"reset"\n");
	printf(BGBLU "HELLO WORLD!"reset"\n");
	printf(BGMAG"HELLO WORLD!"reset"\n");
	printf(BGCYN"HELLO WORLD!"reset"\n");
	printf(BGWHT"HELLO WORLD!"reset"\n");

	printf("\n BRIGHT REGULAT BG COLOUR TEXT\n");
	printf(BBGBLK "HELLO WORLD!"reset);
	printf("\n");
	printf(BBGRED"HELLO WORLD!"reset);
	printf("\n");
	printf(BBGGRN"HELLO WORLD!"reset);
	printf("\n");
	printf(BBGYLO"HELLO WORLD!"reset);
	printf("\n");
	printf(BBGBLU "HELLO WORLD!"reset);
	printf("\n");
	printf(BBGMAG"HELLO WORLD!"reset);
	printf("\n");
	printf(BBGCYN"HELLO WORLD!"reset);
	printf("\n");
	printf(BBGWHT"HELLO WORLD!"reset);
	printf("\n");


	printf("\nCheck Fonts\n");
	printf(B"HELLO WORLD!\n"reset);
	printf(F"HELLO WORLD!\n"reset);
	printf(I"HELLO WORLD!\n"reset);
	printf(U "HELLO WORLD!\n"reset);
	printf(BL "HELLO WORLD!\n"reset);
	printf(RV"HELLO WORLD!\n"reset);
	printf(CO "HELLO WORLD!\n"reset);
	printf(DU "HELLO WORLD!\n"reset);
	printf("\e[103mHELLO WORLD!"reset);
	printf("\n");

	
}