// #include <iostream>
// #include <cstring>
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
    
//     int iteration;
//     cin>>iteration;
//     for(int i=0; i<iteration;i++)
//     {
//         char s1[100];
//         cin>>s1;
//         int length= strlen(s1); 
//         if(length>10)
//         {
//             cout<<s1[0],length-2,s1[length-1] ;
//         }
//         else
//         {
//             cout(s1[0]);
//         }
//     }
    
//     return 0;
// }


#include <iostream>
#include <cstring>

using namespace std;

int main(){

	char s[100] ;
    int iter;
    cin>>iter;
    
    for(int i=0;i<iter ;i++)
    {
        cin>>s;
        int length= strlen(s);
        // cout<<strlen(s)<<endl;
        if(length>10)
        {
            cout<<endl;
            cout<<s[0]<<length-2<<s[length-1]<<endl; 
        }
        else
        {
            cout<<endl;
            cout<<s;
        } 
    }
	return 0;
}