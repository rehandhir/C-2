#include<stdio.h>
#include<stdlib.h>
struct rec
{
    int x,y,z;
};
int main()
{
    int i;
    FILE *fp;
    struct rec record;
    fp=fopen("81.file.bin","wb");
    if(!fp)
    {
        printf("Unable to open file\n");
        exit(1);
    }
    for(i=0;i<=10;i++)
    {
        record.x=i;
        fwrite(&record,sizeof(struct rec),1,fp);
    }
    fclose(fp);
}
