#include<iostream>
using namespace std;

void print_arr(int arr[], int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
}

void insert_sort(int arr[],int size)
{
    for(int i=1;i<size;i++)
    {
        int key=arr[i];
        int j=i-1;

        while(key<arr[j] && j>=0)
        {
            arr[j+1]=arr[j];
            --j;
        }
        arr[j+1]=key;
    }
}

int main()
{
    int arr[5]={6,9,2,4,0};
    int l=sizeof(arr)/sizeof(arr[0]);
    insert_sort(arr,l);
    print_arr(arr,l);
}
