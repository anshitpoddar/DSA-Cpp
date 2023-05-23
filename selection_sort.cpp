#include<iostream>
using namespace std;


void swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}

void selec_sort(int arr[],int size)
{
    for(int i=0;i<size-1;i++)
    {
        int smol=arr[i];
        for(int j=i+1;j<size; j++)
        {
            if(arr[smol] > arr[j])
                {
                    smol=j;
                }

        }
        swap(&arr[smol],&arr[i]);
    }
}

void print_arr(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int arr[5]={5,4,3,2,1};
    int l=sizeof(arr)/sizeof(arr[0]);
    selec_sort(arr,l);
    print_arr(arr,l);

    return 0;
}

