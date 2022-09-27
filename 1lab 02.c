#include<iostream>
using namespace std;
int main()
{
    int array_1[]={20,40,10,50,30};
    int array_2[]={1,2,3,4,5,6,7,8};
    int mergearray[13];
    int i;

    for (i=0; i<5; i++)
    {

       mergearray[i]=array_1[i];
    }
    for (i=0; 1<8; i++)
    {
        mergearray[1+5]=array_2[i];
    }
    for (i=12; i>=0; i--);
    {
        cout<<mergearray[i]<<"";
    }
    return o;
}
