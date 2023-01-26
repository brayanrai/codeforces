//string matching keyboard typing suggestions
#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    string string1= "nnitinonitin";
    string target= "nitin";
    string string2= "";
    int size_string1 = string1.size();
    int size_target = target.size();
    int size_string2 = string2.size();

    int z=0;j
    for(int i=0;i<size_string1;i++)
    {
        if(string1[i]==target[0])
        {
            //check whether next  alphabets from the string  are same as target or not
            for(int j=0; j<size_target;j++)
            {
                // cout<<z<<endl;
                //to start it from the next digit which is i
                if(string1[z]==target[j])
                {
                    cout<<string1[]<<endl;
                    string2.append(string1,j,1);
                    p++;
                }
                else
                {
                    cout<<"N/A"<<endl;
                    z++;
                }
                if(string2==target)
                {
                    cout<<"String found stop everything: "<<endl;
                    cout<<string2<<endl;
                    break;
                }
                // k++;
            }
            break;
        }
        else
        {
            cout<<"next alphabet "<<endl;
            z++;
        }
        // cout<<string2<<endl;
    }
    return 0;
}