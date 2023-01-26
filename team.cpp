#include <iostream>
using namespace std;
int main()
{
    int n, number_of_questions_solved=0; //number of problems
    cin>>n;
    bool ans_a;
    bool ans_b;
    bool ans_c;
for(int i=1; i<=n;i++)
{

    cin>>ans_a>>ans_b>>ans_c;
    
    if(ans_a ==1 && ans_b==1 && ans_c==0)
        {
            number_of_questions_solved ++;
        }
        if(ans_b ==1 && ans_c==1 && ans_a==0)
        {
            number_of_questions_solved ++;
        }
        if(ans_c ==1 && ans_a==1 && ans_b==0)
        {
            number_of_questions_solved ++;
        }
        if(ans_a ==1 && ans_b==1 && ans_c==1)
        {
            number_of_questions_solved ++;
        }
}
    cout<<number_of_questions_solved<<endl;

    return 0;
}


