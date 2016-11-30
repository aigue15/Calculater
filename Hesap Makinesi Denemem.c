#include <stdio.h>
#include <math.h>


void func1(int a, int b)
{
    int sum = a + b;
    printf("\nThe sum of %d and %d is %d\n\n", a, b, sum);
}
void func2(int d, int e)
{
    int res = d - e;
    printf("\nThe result of %d - %d is %d\n\n", d, e, res);
}
void func3(int f, int g)
{
    int div = f/g;
    printf("\nThe result of %d / %d is %d\n\n", f, g, div);
}
void func4(int h,int j)
{
    int div = h*j;
    printf("**********************");
    printf("\nThe result of %d * %d is %d\n\n", h, j, div);
    printf("**********************\n");
}

void func6(int z, int r)
{
    int div = r-z;
    printf("\nThe result of %d-%d is %d\n\n", r, z, div);
}
void func7(int t, int y)
{
    int power(int t,int y);
    int div;
    printf("\nThe result of %d^%d is %d\n\n", t, y, div);
}

int main()
{
     char c='h';
     printf("Please write down the symbole you want to use\nFor a+b:+\nFor a-b:-\nFor a/b: /\nFor a*b= *\n", c);
     printf("*****************\n");
     scanf("%c", &c);
     printf("*****************\n");


     if(c=='+')


     {
         int a, b;
       printf("\nplease provide 2 numbers for a+b : \t");
        scanf("%d%d", &a, &b);
       func1(a, b);

       return 0;
     }

     if(c=='-')
     {

          int d,e;
         printf("\nplease provide 2 numbers for a-b : \t");
         scanf("%d%d", &d, &e);

         if(d>e)

         func2(d, e);

         if(d<e)
         func6(d, e);

         return 0;
     }
     if(c=='/')
     {
          int d,e;
         printf("\nplease provide 2 numbers for a/b : \t");
         scanf("%d%d", &d, &e);

         func3(d, e);

         return 0;
     }

     if(c=='*')
     {
          int d,e;
         printf("\nplease provide 2 numbers for a*b : \t");
         scanf("%d%d", &d, &e);

         func4(d, e);

         return 0;
     }
     if(c=='^')
     {
          int d,e;
         printf("\nplease provide 2 numbers for a^b : \t");
         scanf("%d%d", &d, &e);

         func7(d, e);

         return 0;
     }
     else
        printf("Please try again with one of the given symboles.\n\n\n");

         return main();

}

