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
    int check=0;
    for(int i=0;i<n;i++)
    {
        check=0;
       for(int j=0;j<n-i;j++)
       {
           if(arr[j]>arr[j+1])
           {
                swap(arr[j],arr[j+1]);
                check=1;
           }
       }
       if(check == 0) break;  
    }
    cout<<"after sorting"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<"the number at "<<i+1<<arr[i]<<endl;
    }
    return 0;
}