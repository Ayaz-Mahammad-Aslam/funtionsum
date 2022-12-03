#include<stdio.h>
void add();
void sub();
int main()
{
    int a;
    char ch;
    printf("ENTER 'a' for addition or ENTER 'b' for substraction: \n");
    scanf("%c",&ch);
    if(ch == 'a')
    {
        add();
    }
    else
    {
        sub();
    }
    return 0;
}
void add()
{
    int c,d,g;
    printf("Enter two numbers:\n");
    scanf("%d %d",&c,&d);
    g=c+d;
    printf("sum of two numbers = %d",g);
}
void sub()
{
    int e,f,h;
    printf("Enter two numbers:\n");
    scanf("%d %d",&e,&f);
    h=e-f;
    printf("substaction of two numbers = %d",h);
}