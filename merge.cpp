#include<iostream>
using namespace std;
void merge(int arr[], int s, int e)
{
    int mid=s+(e-s)/2;
    int len1=mid-s+1;
    int len2=e-mid;
    int *first=new int[len1];
    int *second=new int[len2];
    int pos=s;
    for(int i=0;i<len1;i++)
    {
        first[i]=arr[pos++];
    }
    pos=mid+1;
    for(int i=0;i<len2;i++)
    {
        second[i]=arr[pos++];
    }
    int index1=0;
    int index2=0;
    pos=s;
    while(index1<len1 && index2<len2)
    {
        if(first[index1]<second[index2])
        {
            arr[pos++]=first[index1++];
        }
        else
        {
             arr[pos++]=second[index2++];
        }
    }
    while(index1<len1)
    {
        arr[pos++]=first[index1++];
    }
    while(index2<len2)
    {
        arr[pos++]=second[index2++];
    }
    delete []first;
    delete []second;
}
void merge_sort(int arr[], int s, int e)
{
    int mid=s+(e-s)/2;
    if(s>=e)
    {
        return ;
    }
    merge_sort(arr,s,mid);
    merge_sort(arr,mid+1,e);
    merge(arr,s,e);
}
int main()
{
    int arr[15]={2,3,4,5,1,9,8,0,1,2,0,88,99,1,0};
    int n=15;
    merge_sort(arr,0,n-1);
    for(int i=0;i<n;i++)
    {
        cout<<"the value is "<<i+1<<":"<<arr[i]<<endl;
    }
    return 0;
}