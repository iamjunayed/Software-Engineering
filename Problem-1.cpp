#include <iostream>
#include <string>
using namespace std;

bool checkExp(string exp) 
{
    int eq=0,op=0;
    int pos=-1;
    for (int i=0;i<exp.length();i++) 
    {
        if(exp[i]=='=') 
        {
            eq++;
            pos=i;
        }
    }
    if (eq!=1)
    {
        return false;
    }
    if (pos!=1 || !isalpha(exp[0]))
    {
        return false;
    }
    for(int i=pos+1;i<exp.length();i++) 
    {
        if (exp[i]=='+' || exp[i]=='-' || exp[i]=='*' || exp[i]=='/')
        {
            op++;
        }
    }
    if (op>2)
    {
        return false;
    }
    return true;
}

int main() 
{
    string exp;
    cout<<"Enter expression: ";
    getline(cin, exp);

    if(checkExp(exp))
    {
        cout<<"Valid expression"<<endl;
    } 
    else
    {
        cout<<"Invalid expression"<<endl;
    } 

    return 0;
}
