/*#include<stdio.h>
#define SIZE 10
int main()
{
int arr[SIZE],i;
printf("enter array ele\n");
for(i=0;i<10;i++)
{
scanf("%d",&arr[i]);
}
printf("elements are\n");
for(i=0;i<10;i++)
{
printf("%d",arr[i]);
}
}*/

//sum of array elements
/*#include<stdio.h>
int fun(int v[],int n)
{
int i,sum=0;
for(i=0;i<5;i++)
{
sum+=v[i];
}
return sum;

}

int main()
{
int a[5]={1,2,3,4,5};
printf("%d",fun(a,5));
}
*/

//sum of array ele using recursion;
/*#include<stdio.h>
int fun(int v[],int p)
{
if(p<=0)
return 0;
return (fun(v,p-1)+v[p-1]);
}
int main()
{
int a[]={1,2,3,4,5};
int n=sizeof (a)/sizeof a[0];
printf("%d",fun(a,n));
}*/


//max and min ele

/*#include<stdio.h>
int main()
{
int i,min,max;
int a[5]={1,2,3,4,5};
min=max=a[0];
for(i=1;i<5;i++)
{
if(a[i]<min)
min=a[i];
if(a[i]>max)
max=a[i];
}
printf("%d %d",min,max);
}*/


/*//second largest element in array
#include<stdio.h>
int main()
{
int i,secmax,max;
int a[5]={1,2,3,4,5};
secmax=max=a[0];
for(i=1;i<5;i++)
{

if(a[i]>max)
{
secmax=max;
max=a[i];
}
else if(a[i]>secmax)
{
secmax=a[i];
}
else
{
;
}
}*/

#include<stdio.h>
int main()
{
int arr[5],i,e=0,o=0;
printf("enter arr ele\n");
for(i=0;i<5;i++)
{
scanf("%d",&arr[i]);
}
for(i=0;i<5;i++)
{
if(arr[i]%2==0)
e++;
else
o++;
}
printf("even=%d,odd=%d",e,o);

}


/*//wap to insert an elements in an array
#include<stdio.h>
int main()
{
	int a[50],n,i,ele,loc;
	printf("enter size of array");
	scanf("%d",&n);
	printf("enter element");
	scanf("%d",&ele);
	printf("enter loc");
	scanf("%d",&loc);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=n-1;i>=loc;i--)
	{
		a[i+1]=a[i];
	}
	a[loc]=ele;

	for(i=0;i<n+1;i++)
		printf("%d",a[i]);
}*/


//delete an ele in an array
/*
#include <stdio.h>
#define MAX_SIZE 100

int main()
{
    int arr[MAX_SIZE];
    int i, size, pos;

    /* Input size and element in array */
    printf("Enter size of the array : ");
    scanf("%d", &size);
    printf("Enter elements in array : ");
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }

    /* Input element position to delete */
    printf("Enter the element position to delete : ");
    scanf("%d", &pos);


    /* Invalid delete position */
    if(pos < 0 || pos > size)
    {
        printf("Invalid position! Please enter position between 1 to %d", size);
    }
    else
    {
        /* Copy next element value to current element */
        for(i=pos-1; i<size-1; i++)
        {
            arr[i] = arr[i + 1];
        }

        /* Decrement array size by 1 */
        size--;

        /* Print array after deletion */
        printf("\nElements of array after delete are : ");
        for(i=0; i<size; i++)
        {
            printf("%d\t", arr[i]);
        }
    }

    return 0;
}
/* * C program to count frequency of each element of array
 

#include <stdio.h>

int main()
{
    int arr[100], freq[100];
    int size, i, j, count;

    /* Input size of array */
    printf("Enter size of array: ");
    scanf("%d", &size);

    /* Input elements in array */
    printf("Enter elements in array: ");
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);

        /* Initially initialize frequencies to -1 */
        freq[i] = -1;
    }


    for(i=0; i<size; i++)
    {
        count = 1;
        for(j=i+1; j<size; j++)
        {
            /* If duplicate element is found */
            if(arr[i]==arr[j])
            {
                count++;

                /* Make sure not to count frequency of same element again */
                freq[j] = 0;
            }
        }

        /* If frequency of current element is not counted */
        if(freq[i] != 0)
        {
            freq[i] = count;
        }
    }

    /*
     * Print frequency of each element
     */
    printf("\nFrequency of all elements of array : \n");
    for(i=0; i<size; i++)
    {
        if(freq[i] != 0)
        {
            printf("%d occurs %d times\n", arr[i], freq[i]);
        }
    }

    return 0;
}
*/

/*//total no of duplicate elements

int main()
{
	int arr[10], i, j, Size, Count = 0;

	printf("\n Please Enter Number of elements in an array  :   ");
	scanf("%d", &Size);

	printf("\n Please Enter %d elements of an Array  :  ", Size);
	for (i = 0; i < Size; i++)
	{
    	scanf("%d", &arr[i]);
   	}     

	for (i = 0; i < Size; i++)
	{
		for(j = i + 1; j < Size; j++)
		{
    		if(arr[i] == arr[j])
    		{
    			Count++;
				break;
			}
		}
	}

 	printf("\n Total Number of Duplicate Elements in this Array  =  %d ", Count);

 	return 0;
}

*/

/* delete all duplicate nos

#include <stdio.h>
int remove_duplicate(int arr[], int n)
{

  if (n == 0 || n == 1)
    return n;

  int temp[n];

  int j = 0;
  int i;
  for (i = 0; i < n - 1; i++)
    if (arr[i] != arr[i + 1])
      temp[j++] = arr[i];
  temp[j++] = arr[n - 1];

  for (i = 0; i < j; i++)
    arr[i] = temp[i];

  return j;
}

int main()
{
  int n;
  scanf("%d", &n);
  int arr[n];
  int i;
  for (i = 0; i < n; i++)
  {
    scanf("%d", &arr[i]);
  }
  printf("\nArray Before Removing Duplicates: ");
  for (i = 0; i < n; i++)
    printf("%d ", arr[i]);

  n = remove_duplicate(arr, n);

  printf("\nArray After Removing Duplicates: ");
  for (i = 0; i < n; i++)
    printf("%d ", arr[i]);

  return 0;
}