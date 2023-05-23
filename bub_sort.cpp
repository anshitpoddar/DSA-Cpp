#include<iostream>
using namespace std;

void swap(int *a,int *b)
{
    int temp= *a;
    *a=*b;
    *b=temp;
}

void print_arr(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
}

void bub_sort(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(&arr[j],&arr[j+1]);
            }
        }

    }
}

int main()
{
   int arr[5]={5,4,3,2,1};
   int l=sizeof(arr)/sizeof(arr[0]);
   bub_sort(arr,l);
   print_arr(arr,l);
}
