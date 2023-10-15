#include<stdio.h>
void br(void);
void ic(void);
int main()
{
    br();
    printf(",");
    ic();
    ic();
    br();
    return 0;
}
void br(void)
{
    printf("Brizil,Russia");
}
void ic(void)
{
    printf("India,China\n");
}