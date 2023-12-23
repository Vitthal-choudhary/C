#include <stdio.h>

struct Student
{
	int rollno;
	char name[20];
	char address[30];
};

main()
{
 struct Student s;
 int ch;
 char op;
 FILE *fp;
 do
 {
 printf("\nEnter your choice \n1. Write record \n2. Read Records \n 3. Exit");
 scanf("%d",&ch);
 switch(ch)
 {
 	case 1:
 		fp = fopen("student2.dat","wb"); //
 		do
 		{
 		printf("\nEnter rollno");
 		scanf("%d",&s.rollno);
 		fflush(stdin);
 		printf("Enter name");
 		gets(s.name);
 		printf("Enter address");
 		gets(s.address);
 		//fprintf(fp,"%d %s %s ",s.rollno,s.name,s.address);
 		fwrite(&s,sizeof(s),1,fp);	//
 		printf("Do you want to add more Y/N"); 		
 		op=getche();
 		}while(op=='y'||op=='Y');
 		fclose(fp);
 	break;
 	case 2:
 		fp= fopen("student2.dat","rb"); //
 		//while(fscanf(fp,"%d%s%s",&s.rollno,&s.name,&s.address)!=EOF)
 		while(fread(&s,sizeof(s),1,fp)==1)
 		{
 			printf("Rollno = %d\n",s.rollno);
 			printf("Name = %s\n",s.name);
 			printf("Address = %s\n",s.address);
		 }
		 fclose(fp);
 	break;
 	case 3:
 		printf("Ok Bye");
 		exit(0);
 	break;
 	default:
 		printf("Wrong choice");
 }
}while(ch!=3);
}