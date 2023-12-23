#include <stdio.h>

main()
{
    int a;
    float b;
    char c;

    FILE *handle;
    handle = fopen("1.txt", "r");

    fscanf(handle,"%d %f %c", &a,&b,&c);

    printf("a = %d\nb = %f\nc = %c", a,b,c);
    fclose(handle);




    /* Read a poem from a file*/
    FILE *fp;
	char s[80];
	fp=fopen("poem.txt","r");
	while(fgets(s,79,fp)!=NULL)  //NULL indicates end of a string file
	{
		printf("%s",s);
		//puts(s);
	}
	fclose(fp);
}