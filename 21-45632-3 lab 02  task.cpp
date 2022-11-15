#include<iostream>
    using namespace std;
        char stack[20];
        int top=-1;
        class infix_to_postfix
{
        public:
            void push(char x)
{
        stack[++top]=x;
}
            char pop()
{
            if(top==-1)
    {
            return -1;
    }
    else
    {
            return stack[top--];
    }
}
        int priority(char x)
  {
            if(x=='(')
                    return 0;
    if(x=='+' || x=='-')
        return 1;
    if(x=='*' || x=='/')
        return 2;
   }
};


int main()
{
    infix_to_postfix obj;
    char exp[20];
    char *e, x;
    cout<<"Take the INFIX Expression:";
    cin>>exp;
    e=exp;
    cout<<"Absolute POSTFIX Expression:";
    while(*e!='\0')
    {
        if(isalnum(*e))
            cout<<*e;
        else if(*e=='(')
            obj.push(*e);
        else if(*e==')')
        {
            while((x=obj.pop())!='(')
                cout<<x;
        }
        else
        {
            while(obj.priority(stack[top])>=obj.priority(*e))
                cout<<obj.pop();
            obj.push(*e);
        }
        e++;
    }
    while(top!=-1)
    {
        cout<<obj.pop();
    }
    return 0;
}
