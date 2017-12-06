#include <stdio.h>
#include <stdlib.h>
void  problem1();void  problem2();void  problem3();void  problem4();void  problem5();void  problem6();void  problem7();
void  problem8();void  problem9();void  problem10();void  problem11();void  problem12();void  problem13();void  problem14();
void  problem15();void  problem16();void  problem17();void  problem18();void  problem19();void exit20();

int main()
{
    int get=0;
while(1)
     {

    printf("\nEnter \n1. for problem 1: \n2. for problem 2: \n3. for problem 3: \n4. for problem 4:\n5. for problem 5:\n6. for problem 6: ");
          printf("\n7. for problem 7: \n8. for problem 8: \n9. for problem 9:\n10. for problem 10:\n11. for problem 11: ");
        printf("\n12. for problem 12: \n13. for problem 13: \n14. for problem 14:\n15. for problem 15:\n16. for problem 16: ");
        printf("\n17. for problem 17:\n18. for problem 18:\n19. for problem 19: ");
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
        exit20();
        break;
    }
      }
getch();
}

void problem1()
{

	int a[5], i;
	printf("Sample input: ");
    for(i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }
   printf("Sample output: ");
    for(i = 0; i < 5; i++)
    {
        printf("%d ", a[i]);
    }

}
void problem2()
{
int a[5], i;
printf("Sample input: ");
    for(i = 0; i < 5; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Sample output: ");
    for(i = 4; i >= 0; i--)
    {
        printf("%d ", a[i]);
    }}

void problem3()
{
   int a[5], i;
   printf("Sample input: ");
    for(i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }
printf("Sample output: ");
    for(i = 0; i < 5; i++)
    {
        if(a[i] < 10)
        {
            printf("%d ", a[i]);
        }
    }

}

void problem4()
{
int a[5], i, n = 0;
   printf("Sample input: ");
    for(i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }
printf("Sample output: ");
    for(i = 0; i < 5; i++)
    {
        if(a[i] < 10)
        {
            n++;
        }
    }
    printf("%d", n);

}
void problem5()
{

   int a[5], i, m, n = 0;
    printf("Sample input: ");
    for(i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter the search number : ");
    scanf("%d", &m);
        for(i = 0; i < 5; i++)
    {
        if(a[i] == m)
        {
            printf("%d was found.", m);
            n = 1;
            break;
        }
    }

    if (n == 0)

        printf("%d was not found.",m);
}
void problem6()
{

   int a[5], i, m, n = 0;
    printf("Sample input: ");
    for(i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }
     printf("Enter the search number : ");
    scanf("%d", &m);

    for(i = 0; i < 5; i++)
    {
        if(a[i] == m)
        {
            printf("%d was found at location %d", m, (i + 1));
            n = 1;
            break;
        }
    }

    if (n == 0)

        printf("%d was not found", m);
}
void problem7()
{
    int a[5], i, m = 0;
      printf("Sample input: ");
    for(i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("The largest number: ");
    for(i = 0; i < 5; i++)
    {
        if(a[i] > m)
        {
            m = a[i];
        }
    }

    printf("%d", m);
}
void problem8()
{
   int a[5], i, m = 0;
    printf("Sample input: ");
    for(i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("\n");
    for(i = 0; i < 5; i++)
    {
        if(a[i] > m)
        {
            m = a[i];
        }
    }

    for(i = 0; i < 5; i++)
    {
        if(a[i] == m)
        {
            printf("The largest number is :%d and location is :%d", m, (i + 1));
        }
    }
}void problem9()
{
  int a[5], i, j, m = 0, n;
   printf("Sample input: ");
    for(i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }
   n = 100;
    for(j = 0; j < 5; j++)
    {
        if(a[j] <= n)
        {
            n = a[j];
        }
    }
    for(j = 0; j < 5; j++)
    {
        if(a[j] == n)
        {
            printf("The smallest number is %d at location is %d", n , (j + 1));
            break;
        }
    }
 printf("\n");
    for(i = 0; i < 5; i++)
    {
        if(a[i] >= m)
        {
            m = a[i];
        }
    }
    for(i = 0; i < 5; i++)
    {
        if(a[i] == m)
        {
            printf("The largest number is %d at location is %d", m , (i + 1));
            break;
        }
    }

}void problem10()
{
  int a[5], i, j, n;
  printf("Sample input: ");
    for(i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Before : ");
        for(i = 0; i < 5; i++)
        printf("%d ", a[i]);
       printf("\n");
    for (j = 1; j < 5; j++)
    {
        n = a[j];
        i = j - 1;
        while (i >= 0 && a[i] > n)
        {
            a[i + 1] = a[i];
            i--;
        }
        a[i + 1] = n;
    }
    printf("After : ");
    for(i = 4; i >= 0; i--)
        printf("%d ", a[i]);


}void problem11()
{

}void problem12()
{

}void problem13()
{

}void problem14()
{

}

void problem15()
{

}
void problem16()
{

}
void problem17()
{

}
void problem18()
{
 }
void problem19()
{

}
void exit20()
{
exit(0);
}
