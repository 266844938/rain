#include <stdio.h>
int main(void)
{
   float e,m;
   printf("Enter e:\n");
   scanf("%d,&e");
   if (e<=50)
   printf("m=%.1f\n",0.53*e);
   if(e>50)
   printf("m=%.1f\n",0.53*50+0.05*(e-50));
   return 0;
}
