#include <iostream>
using namespace std;
int main()
{
    int num, position, count=0;
    cin>>num>>position;
    int arr[num];
    for(int i=0;i<num;i++)
    {
        int num1;
        cin>>num1;
        arr[i] = num1;
    }
    int number = arr[position-1];
    for(int j=0;j<num;j++)
    {
        if(arr[j]==0)
        {
            continue;
        }
        else if(arr[j]>=number)
        {
            count++;
        }
    }
    cout<<count;
    return 0;
}

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n, k;
//     cin >> n >> k;
//     int a;
//     for (int i = 0; i < k; i++)
//     {
//         cin >> a;
//         // if (a == 0)
//         // {
//         //     cout << i << endl;
//         //     return 0;
//         // }
//     }
//     int b;
//     for (int i = k; i < n; i++)
//     {
//         cin >> b;
//         if (b != a)
//         {
//             cout << i << endl;
//             return 0;
//         }
//     }
//     cout << n << endl;
//     return 0;
// }