#include <stdio.h>
#include <stdlib.h>
void  problem1();void  problem2();void  problem3();void  problem4();void  problem5();void  problem6();void  problem7();
void  problem8();void  problem9();void  problem10();void  problem11();void  problem12();void  problem13();void  problem14();
void  problem15();void  problem16();void  problem17();void  problem18();void  problem19();void  problem20();void  problem21();
void  problem22();void  problem23();void  problem24();void  problem25();void exit26();

int main()
{
    int get=0;
while(1)
     {

    printf("\nEnter \n1. for problem 1: \n2. for problem 2: \n3. for problem 3: \n4. for problem 4:\n5. for problem 5:\n6. for problem 6: ");
          printf("\n7. for problem 7: \n8. for problem 8: \n9. for problem 9:\n10. for problem 10:\n11. for problem 11: ");
        printf("\n12. for problem 12: \n13. for problem 13: \n14. for problem 14:\n15. for problem 15:\n16. for problem 16: ");
        printf("\n17. for problem 17:\n18. for problem 18:\n19. for problem 19:\n20. for problem 20:\n21. for problem 21: ");
        printf("\n22. for problem 22:\n23. for problem 23:\n24. for problem 24:\n25. for problem 25:\n26. for exit 26\nChoose: ");
    scanf("%d", &get);

    switch(get) {
    case 1:
        problem1();
        break;
    case 2:
        problem2();
        break;
    case 3:
        problem3();
        break;
    case 4:
        problem4();
        break;
    case 5:
        problem5();
        break;
    case 6:
        problem6();
        break;
    case 7:
        problem7();
        break;
        case 8:
        problem8();
        break;
        case 9:
        problem9();
        break;
        case 10:
        problem10();
        break;
        case 11:
        problem11();
        break;
        case 12:
        problem12();
        break;
        case 13:
        problem13();
        break;
        case 14:
        problem14();
        break;
        case 15:
        problem15();
        break;
        case 16:
        problem16();
        break;
        case 17:
        problem17();
        break;
        case 18:
        problem18();
        break;
        case 19:
        problem19();
        break;
        case 20:
        problem20();
        break;
        case 21:
        problem21();
        break;
        case 22:
        problem22();
        break;
        case 23:
        problem23();
        break;
        case 24:
        problem24();
        break;
        case 25:
        problem25();
        break;
        case 26:
        exit26();
        break;
    }
      }
getch();
}

void problem1()
{

	int i, j;
	printf("Sample input: ");
	scanf("%d",&j);
	printf("Sample output : ");
	for(i=0; i<j; i++)
	{

		{
			printf("* ");
		}

	}
	printf("\n");
}
void problem2()
{
int i,n,m, j;
	printf("Enter the number of rows:");
	scanf("%d",&n);
		printf("Enter the number of columns :");
	scanf("%d",&m);
	printf("Sample output : \n");
	for(i=0; i<n; i++)
	{
        for(j=0; j<m; j++)
		{
			printf("* ");
		}
			printf("\n");

	}
}

void problem3()
{

    int i, j, n;
    printf("Sample input: ");
    scanf("%d", &n);

    for(i=1; i<=n; i++)
    {
        for(j=1; j<=i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

}

void problem4()
{
int i, j, n;

    printf("Sample input: ");
    scanf("%d", &n);

    for(i=1; i<=n; ++i)
    {
          for(j=i; j<n; j++)
        {
            printf(" ");
        }

           for(j=1; j<=i; j++)
        {
            printf("*");
        }

        printf("\n");
    }

}
void problem5()
{
    int i, j, n;

   printf("Sample input: ");
    scanf("%d", &n);

    for(i=1; i<=n; i++)
    {
        for(j=i; j<n; j++)
        {
            printf(" ");
        }

        for(j=1; j<=(2*i-1); j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
void problem6()
{

   int a , i, j, k;
        printf("Sample input: ");
           scanf("%d", &a);
       for(i=1; i<=a;i++){
            for(j=a; j>=i;j--){
                printf(" ");
            }
           for(j=1; j<=(i*2)-1;j++){
              printf("*");
           }
             printf("\n");
        }
        for(i=a-1; i>=1;i--){
            for(j=i; j<=a;j++){
                printf(" ");
           }
            for(j=1; j<=(i*2)-1;j++){
                printf("*");
            }
      printf("\n");
}
}
void problem7()
{
  int i, j, rows, columns;

    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &columns);


    for(i=1; i<=rows; i++)
    {
        for(j=1; j<=columns; j++)
        {
            if(i==1 || i==rows || j==1 || j==columns)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

}
void problem8()
{
 int i, j, rows;


   printf("Sample input: ");
    scanf("%d", &rows);

    for(i=1; i<=rows; i++)
    {
        for(j=1; j<=i; j++)
        {


            if(j==1 || j==i || i==rows)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }

        printf("\n");
    }
}void problem9()
{
 int i, j, n;

   printf("Sample input: ");
    scanf("%d", &n);

       for(i=1; i<=n; i++)
    {

        for(j=i; j<n; j++)
        {
            printf(" ");
        }


        for(j=1; j<=i; j++)
        {
            if(i==n || j==1 || j==i)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }

        printf("\n");
    }
}void problem10()
{
  int i, j, rows;

   printf("Sample input: ");
    scanf("%d", &rows);

    for(i=1; i<=rows; i++)
    {
        for(j=i; j<rows; j++)
        {
            printf(" ");
        }
        for(j=1; j<=(2*i-1); j++)
        {
            if(i==rows || j==1 || j==(2*i-1))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

}void problem11()
{
 int i, space, rows, star=0;
printf("Sample input: ");
    scanf("%d", &rows);


    for(i = 1; i <= rows; i++) {

        for(space = 1; space <= rows-i; space++) {
           printf(" ");
        }

        while(star != (2*i - 1)) {
         if(star == 0 || star==(2*i-2))
                printf("*");
            else
                printf(" ");
            star++;
        }
        star=0;

        printf("\n");
    }
    rows--;

    for(i = rows;i >= 1; i--) {

        for(space = 0; space <= rows-i; space++) {
           printf(" ");
        }

        star = 0;
        while(star != (2*i - 1)) {
         if(star == 0 || star==2*i-2)
                printf("*");
            else
                printf(" ");
            star++;
        }
        printf("\n");
    }
}void problem12()
{
int i, j;
	printf("Sample input: ");
	scanf("%d",&j);
	printf("Sample output : ");
	for(i=1; i<=j; i++)
	{

		{
			printf("%d ", i);
		}

	}
	printf("\n");
}void problem13()
{
int i,n,m, j;
	printf("Enter the number of rows:");
	scanf("%d",&n);
		printf("Enter the number of columns :");
	scanf("%d",&m);
	printf("Sample output : \n");
	for(i=0; i<n; i++)
	{
        for(j=1; j<=m; j++)
		{
			printf("%d ", j);
		}
			printf("\n");

	}
}void problem14()
{
    int i, j, n;

    printf("Sample input: ");
    scanf("%d", &n);

    for(i=1; i<=n; i++)
    {
        for(j=1; j<=i; j++)
        {
            printf("%d", j);
        }

        printf("\n");
    }

}void problem15()
{ int n , i, j;

       printf("Sample input: ");
           scanf("%d", &n);
        for(i=n; i>=1;i--){
            for(j=1; j<=i;j++){
               printf(" ");
            }
            for(j=i;j<=n;j++){
printf("%d",j);
            }
printf("\n");
        }

}
void problem16()
{
    int i, j, n;

    printf("Sample input: ");
    scanf("%d", &n);

    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n-i; j++)
        {
            printf(" ");
        }
        for(j=1; j<=i; j++)
        {
            printf("%d", j);
        }

        printf("\n");
    }
}void problem17()
{
int i, j, n;

  printf("Sample input: ");
    scanf("%d", &n);

    for(i=1; i<=n; i++)
    {
        for(j=i; j<n; j++)
        {
            printf(" ");
        }

        for(j=1; j<=(2*i-1); j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }
}void problem18()
{
int a , i, j, k;
        printf("Sample input: ");
           scanf("%d", &a);
       for(i=1; i<=a;i++){
            for(j=a; j>=i;j--){
                printf(" ");
            }
           for(j=1; j<=(i*2)-1;j++){
              printf("%d", j);
           }
             printf("\n");
        }
        for(i=a-1; i>=1;i--){
            for(j=i; j<=a;j++){
                printf(" ");
           }
            for(j=1; j<=(i*2)-1;j++){
               printf("%d", j);
            }
      printf("\n");
}
 }
void problem19()
{
 int i, j, rows, columns;

    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &columns);


    for(i=1; i<=rows; i++)
    {
        for(j=1; j<=columns; j++)
        {
            if(i==1 || i==rows || j==1 || j==columns)
            {
                printf("%d", j);
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }


}void problem20()
{
 int i, j, rows;

 printf("Sample input: ");
    scanf("%d", &rows);

    for(i=1; i<=rows; i++)
    {
        for(j=1; j<=i; j++)
        {
            if(j==1 || j==i || i==rows)
            {
                printf("%d", j);
            }
            else
            {
                   printf(" ");
            }
        }

        printf("\n");
    }}

    void problem21()
{int a , i, j, k;
        printf("Sample input: ");
           scanf("%d", &a);
        k=1;
        for(i=a; i>=1;i--){
            for(j=1; j<=i;j++){
                printf(" ");
            }
            if(i==a || i==a-1 || i==1){
                for(j=i;j<=a;j++){
                    printf("%d",j);
                }
            }else{
                printf("%d",i);

                for(j=0;j<k;j++){
                   printf(" ");
                }
                k++;
                printf("%d",a);
            }
      printf("\n");
        }

}
void problem22()
{
int i, j, rows;

 printf("Sample input: ");
    scanf("%d", &rows);

    for(i=1; i<=rows; i++)
    {
        for(j=i; j<rows; j++)
        {
            printf(" ");
        }
        for(j=1; j<=(2*i-1); j++)
        {
            if(i==rows || j==1 || j==(2*i-1))
            {
                 printf("%d", j);
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}void problem23()
{
int i, space, rows, star=0;
printf("Sample input: ");
    scanf("%d", &rows);


    for(i = 1; i <= rows; i++) {

        for(space = 1; space <= rows-i; space++) {
           printf(" ");
        }

        while(star != (2*i - 0)) {
         if(star == 1 || star==(2*i-1))
                printf("%d",star);
            else
                printf(" ");
            star++;
        }
        star=0;

        printf("\n");
    }
    rows--;

    for(i = rows;i >= 1; i--) {

        for(space = 0; space <= rows-i; space++) {
           printf(" ");
        }

        star = 0;
        while(star != (2*i - 0)) {
         if(star == 1 || star==2*i-1)
                            printf("%d",star);
            else
                printf(" ");
            star++;
        }
        printf("\n");}
}void problem24()
{
int a , i, j, k;
        printf("Sample input: ");
           scanf("%d", &a);
       for(i=1;i<=a;i++){
            printf("%d", i);
        }
        for(j=a-1;j>=1;j--){
            printf("%d", j);
        }
      printf("\n");
}
void problem25()
{
int i,j,n;
   printf("Sample input: ");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        for(j=i; j<n; j++)
            printf(" ");
        for(j=1; j<=i; j++)
            printf("%d",j);
        for(j=i-1; j>=1; j--)
            printf("%d",j);
        printf("\n");
    }
}
void exit26()
{
exit(0);
}
