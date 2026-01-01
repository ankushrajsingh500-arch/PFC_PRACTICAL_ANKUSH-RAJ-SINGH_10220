// ankush raj singh 10220
#include <stdio.h>
int main()
{
    //run time error : segmentation fault
    printf("Ankush raj singh\n");
    printf("ERP ID-RU-25-10220\n");
    int arr[5]={1,2,3,4,5};
    arr[6]=10;
    printf("%d",arr[5]);
    return 0;
    
}