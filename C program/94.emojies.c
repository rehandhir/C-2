#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	char *emojis[5]={u8"😂️",u8"🤣️",u8"😍️",u8"😚️",u8"😘️",};
	srand(time(NULL));
	int rint=rand()%5;
	printf("Emojie: %s\n",emojis[rint]);
}