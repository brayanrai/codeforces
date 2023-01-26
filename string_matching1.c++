//string matching keyboard typing suggestions
#include <iostream>
#include <cstring>

using namespace std;
int main()
{

    char string1[20]= {'n','i','t','i','n','o', 'n', 'i','t','i','n', '\0'};
    char target[8]= {'n','i','t','i','n', '\0'};
    // char string2= '{0}';
    char string3[10]={};
    // cout<<"Length of string1: "<< strlen(string1)<<endl;
    // cout<<"Length of target: "<< strlen(target)<<endl;
    // cout<<string1<<endl;
    // cout<<target<<endl;


    for(int i=0;i<strlen(string1);i++)
    {
        if(string1[i]==target[i])
        {
            //check whether next  alphabets from the string  are same as target or not
            for(int j=0; j<strlen(target);j++)
            {
                if(string1[j]==target[j])
                {
                // cout<<string1[j]<<endl;
                //how to check whether we found target in the given string
                // string1[i]= string2[j];
                cout<<"hi"<<endl;
                // cout<<string1[j]<<endl;
                // strint1[j]= string2;
                // strncat(string3,&string2,1);
                }
                else
                {
                    cout<<"N/A"<<endl;
                }
            }break;
        }
        else
        {
            cout<<"next alphabet";
        }
    }
    return 0;
}