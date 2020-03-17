#include <stdio.h>

#include <stdio.h>

int main()
{ 
   if(printf("Hello World!") < 0)
   {
      fprintf(stderr,"printf: Error occurred at printing!");
      return 1;
   }
   
   return 0;
}
