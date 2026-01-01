// ankush raj singh 10220
#include<stdio.h>
int main() {
    int a,b,c;
    printf("ankush raj singh\n");
    printf("ERP ID-ru-25-10220\n");
    printf("enter a number");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    if(a>b&&a>c)
    printf("a is largest number");
    else if (a<b&&b>c)
    printf("b is laegest number");
    else
    printf("c is largest number");
    return 0;
}