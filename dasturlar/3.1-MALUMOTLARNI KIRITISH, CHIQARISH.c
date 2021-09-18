#include <stdio.h>
  int main() {
  
   int kelgan_ishchilar;
   int kelmagan_ishchilar;
   int jami_ishchilar;

   printf("kelgan ishchilar: ");
   scanf("%d", &kelgan_ishchilar);	
   
   printf("kelmagan ishchilar:");	
   scanf("%d", &kelmagan_ishchilar);
   
   jami_ishchilar=kelgan_ishchilar+kelmagan_ishchilar;
   
   printf("jami ishchilar: %d", jami_ishchilar);

   return 0;
}
