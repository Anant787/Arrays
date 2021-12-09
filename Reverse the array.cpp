#include<iostream>
using namespace std;
int main()
{
    int N,i,k;
    cout<<"ENTER THE SIZE OF ARRAY : ";
    cin>>N;
    int arr[N];
    for(i=0;i<N;i++)
    {
        cin>>arr[i];
    }
    k=N-1;
    i=0;
    while(i<k)
    {
        int temp=0;
        temp=arr[i];
        arr[i]=arr[k];
        arr[k]=temp;
        i++;
        k--;
    }
    cout<<"REVERSES ARRAY IS - ";
    for(i=0;i<N;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
