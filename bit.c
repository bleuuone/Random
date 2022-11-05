#include <stdio.h>

int main(void)
{
	// int num = 0x14;
	// // if (num & 1)
	// // 	printf("is odd");
    // int n = 2;
    // num = num & (~(1 << n));
    // printf("%d", num);
    //check flags 
    unsigned int flag = 0;
	//Set marital statu Yes , 0th bit 1
    flag |= 1;
    // votin status Yes , 1st bit 1
    flag |= 2;
    // set Visa eligibility status Yes ,2nd bit 1
    flag |= 4;
    if (flag & 1)
        printf("the candidat is Married\n");
    if (flag & 2)
        printf("The candidat's votin status is on");
    if (flag & 4)
        printf("\nThe candidat's visa is eligible");
    flag = flag & (~(1 << 1));
    printf("\n%d", flag);
}
