#include <iostream>
using namespace std;
int main()
{
    int count=0;
    int temp=0,temp1=0;
    int arr[8]={1,2,3,4,5,6,7,8};
    for(int i=0;i<=7;i++)
    {
        cout<<arr[i]<<endl;
        count++;
    }
    // cout<<count;
    int a=count/2;
    // cout<<"count ="<<a;
    for(int i=0;i<a;i++)
    {
        cout<<arr[i]<<endl;
        temp= temp+arr[i];
    }
    cout<<"temp"<<temp<<endl;
    for(int i=a;i<=count;i++)
    {
        cout<<arr[i]<<endl;
        temp1= temp1+arr[i];
    }
    cout<<"temp1"<<temp1<<endl;
    int diff= temp1-temp;
    cout<<diff;
    return 0;
}