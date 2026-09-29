#include<stdio.h>
int main()
{
    int ve;
    printf("voting eligibility;");
    scanf ("%d",&ve);

    if(ve<18)
        {
            printf("eligible");
        }
        if(ve>18)
        {
            printf("not eligible");
        }
 return 0;
}
