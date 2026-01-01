#include <stdio.h>

int main() {
    int a, b, c;

    printf("ankush Raj Singh-00785 \n");
    
    printf("enter a number");
    scanf("%d", &a);
    
    printf("enter a number");
    scanf("%d", &b);

    // Swapping Logic
    c = a;
    a = b;
    b = c;

    printf("after swapping \n");
    printf("a is %d \n", a);
    printf("b is %d \n", b);

    return 0;
}

// OUTPUT 
//ankush Raj Singh-00785 
//enter a number10
//enter a number20
//after swapping 
//a is 20
//b is 10