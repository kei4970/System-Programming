#include < stdio.h >
#include < stdlib.h >
#include < ctype.h >


int main(int argc, char *argv[])
{

 char array[80];
 int charcount=0,linecount=0,wordcount=1;
 int i=0;
 
 FILE *fp;
 if((fp=fopen(argv[1],"r"))==NULL)
 {
  printf("This is file open error!!\n");
  exit(1);

 }
  
 while(fgets(array,80,fp)!=NULL)
 {
   
  for(i=0;array[i]=!NULL;i++)
  {
   if(array[i]= ' ')   
    wordcount++;
         else if(isalpha(array[i])!=0)
   charcount++;
  }
    linecount++;
 }


 printf("문자수 =>%d 단어수 =>%d 라인수 =>%d\n",wordcount,charcount,linecount);
 fclose(fp);

 return 0;
}
