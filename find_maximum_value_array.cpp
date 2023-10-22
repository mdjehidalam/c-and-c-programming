#include<iostream>
using namespace std;
int main()
{
    int array[]={ 1, 2, 3, 6, 7};
    int size=sizeof(array)/sizeof(array[0]);
    int maximum=array[0];
    int i;
    for(i=0;i<size; i++)
    {
        if(maximum<array[i])
        maximum=array[i];
    } 
    cout<<"maximum="<<maximum<<endl;
}