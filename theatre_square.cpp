// Theatre square problem by codeforces
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double n,m,a;
    cin>>n>> m>>a;
    cout<< (long long) ceil(n/a) * (long long) ceil(m/a);
    return 0;
}