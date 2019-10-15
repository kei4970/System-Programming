#include <stdio.h> 
#include "student.h"
#define START_ID 1401001
#include <stdlib.h>

int main(int argc, char* argv[]) 
{ 
   struct student rec;
   FILE *fp;
   if (argc != 2) {
      fprintf(stderr, "¿¿¿: %s ¿¿¿¿\n", argv[0]);
      exit(1); 
   }
      fp = fopen(argv[1], "wb");
   printf("%7s %6s %4s\n", "¿¿", "¿¿", "¿¿"); 
   while (scanf("%d %s %d", &rec.id,    rec.name, &rec.score) == 3) {
      fseek(fp,  (rec.id ? START_ID)* sizeof(rec),  SEEK_SET);
      fwrite(&rec, sizeof(rec), 1, fp);
   }
   fclose(fp);
   exit(0);
}
