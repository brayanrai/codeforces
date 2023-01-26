#include <iostream>
#include <vector>
using namespace std;
int main()
{
    // vector<int > arr;
    auto x=0;
    int arr[100]={1,1,2,2,4,5,6,4,5};
    for(auto  i =0; i<100; i++)
    {
        x=x^arr[i];
    }
    cout<<x;
    return 0;
}