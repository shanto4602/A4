#include <stdio.h>
#include <stdlib.h>
void  task2();void  task3();void  task4();void  task5();void  task6();void  task7();void  task8();void exit8();

int main()
{
    int get=0;
while(1)
     {
    printf("\nEnter \n1. for Task 2: \n2. for Task 3: \n3. for Task 4: \n4. for Task 5:\n5. for Task 6:\n6. for Task 7:\n7. for Task 8: \n8. for exit\nChoose: ");
    scanf("%d", &get);

    switch(get) {
    case 1:
        task2();
        break;
    case 2:
        task3();
        break;
    case 3:
        task4();
        break;
    case 4:
        task5();
        break;
    case 5:
        task6();
        break;
    case 6:
        task7();
        break;
    case 7:
        task8();
        break;
        case 8:
        exit8();
        break;
    }
      }
getch();
}

void task2()
{
    int i,n;
int a[100];
printf("Enter the 10 numbers :");
for(i=0;i<=9;i++)
    {
    scanf("%d",&a[i]);

    }
    printf("The reverse order is : ");

    for(i=9; i>=0; i--)
    {

      printf("%d ",a[i]);
    }
}
void task3()
{
 int i,n;
int a[100];
printf("Enter the 10 numbers :");
for(i=0;i<=9;i++)
    {
    scanf("%d",&a[i]);

    }
        printf("Only the even numbers in reverse order is : ");


    for(i=9; i>=0; --i)
    {
      if(a[i]%2==0)
      {
         printf("%d ",a[i]);
      }
    }
}
void task4()
{
   int n,i,m;

    printf("Enter a string value: ");
    scanf("%d",&n);
    printf("Enter the other number : ");
     scanf("%d",&m);

    for(i=n; i>=1; --i)
    {
      if(i%2==0)
      {
          printf("%d ",i);
      }
    }
}
void task5()
{
int i,n;
int a[100];
printf("Enter the numbers of size:");
scanf("%d",&n);
printf("Enter the numbers:");
for(i=0;i<n;i++)
    {
    scanf("%d",&a[i]);

    }
    printf("The numbers within the range 0-9 are : ");
for(i=0;i<n;i++)
{
    if(a[i]==0||a[i]==1||a[i]==2||a[i]==3||a[i]==4||a[i]==5||a[i]==6||a[i]==7||a[i]==8||a[i]==9)
        {
            printf("%d ", a[i]);
        }
}
}
void task6()
{
int i,n;
int a[100];
printf("Enter the numbers of size:");
scanf("%d",&n);
printf("Enter the numbers:");
for(i=0;i<n;i++)
    {
    scanf("%d",&a[i]);

    }
    printf("The numbers that have been entered so far are : ");
for(i=0;i<n;i++)
{

  printf("%d ", a[i]);

}
}
void task7()
{
  int arr[10];

  int i=0,var,flag=0,j=0;
printf("Enter the 10 numbers :");
  while(j<10){


    scanf("%d",&var);
    flag=0;
    if(j==0){
        arr[j++]=var;
        continue;
    }
    for(i=0;i<j;++i){
        if(arr[i]==var){
            printf("Enter a different number\n");
            flag=1;
            break;
        }
    }
    if(flag==0){
        arr[j++]=var;
    }


  }
 printf("Entering number without duplicate are :");
  for(i=0;i<10;++i){
    printf("%d ",arr[i]);
  }
}
void task8()
{
  int a[10],fst[10],scnd[10];

    int i,n,e=0,o=0;
printf("Enter the 10 numbers :");
    for(i=0;i<10;++i){
        scanf("%d",&a[i]);
        if(i%2==0){
            fst[e++]=a[i];
        }
        else {
            scnd[o++]=a[i];
        }

    }

        for(i=0;i<e;++i){
            printf("%d ",fst[i]);

        }
        for(i=0;i<o;++i){
            printf("%d ",scnd[i]);

        }

}
void exit8()
{
exit(0);
}
