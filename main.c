

#include <stdio.h>

void writeFile(char** args, int numArgs){
   int i;
   FILE* fp;
  
   fp = fopen("read_args_output.txt","w");
   for (i = 0; i < numArgs; i++){
 	fprintf(fp, "%s ", args[i]);
   }


   fclose(fp);
}

int main(int argc, char* argv[]) {
   writeFile(argv, argc);
   return 0;
}
