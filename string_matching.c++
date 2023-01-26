//string matching keyboard typing suggestions
#include <iostream>
#include <cstring>

using namespace std;
int main()
{

    string str1="aabcsdfsadbcabzui";
    string target= "abc";
    string str2="";
    // str2.append(str1);
    // cout<<str2;
    int size_str1 = str1.size();
    int size_target= target.size();
    int size_str2= str2.size();
    int k=0;
    for(int i=0; i<size_str1;i++)
    {
        if(str1[i]==target[k])
        {
            //check whether next 3 alphabets are same as target or not
            for(int i=0; i<size_target;i++)
            {
                if(str1[i]==target[k])
                {
                    str2.append(str1,i,1);
                    // cout<<"done"<<endl;
                }
                else
                {
                    
                    cout<<"N/A"<<endl;
                    break;
                }
                k++;
            }
        }
        else if(str1[0]!=target[0])
        {
            // for(int i=0; i<size_target;i++)
            // {
            //     if(str1[i]==target[i])
            //     {
            //         str2.append(str1,i,1);
            //         // cout<<"done"<<endl;
            //     }
            //     else
            //     {
            //         cout<<"N/A"<<endl;
            //     }
            // }

        }

    }
        cout<<"Original string= "<<str1<<endl;
        cout<<"String to match= "<<target<<endl;
        cout<<"string match found= "<<str2<<endl;
    return 0;
}