#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the number of value u want to enter : ";
    cin>>n;
    int* arr=new int[n];
    for(int i=0;i<n;i++)
    {
        cout<<"the number at "<<i+1<<":";
        cin>>arr[i];
    }
    cout<<"before sorting"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<"the number at "<<i+1<<":"<<arr[i]<<endl;
    }
    for(int i=0;i<n-1;i++)
    {
        int min=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[min])
            {
                min=j;
            }
        }
        swap(arr[i],arr[min]);
    }
    cout<<"after sorting"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<"the number at "<<i+1<<arr[i]<<endl;
    }
    return 0;
}