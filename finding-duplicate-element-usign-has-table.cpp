//this program will show the duplicate numbers in the unsorted array and counting the number of accurances 

#include<iostream>
using namespace std;

int  main ()
{
    int numebr_of_elements;
    cout<<"Enter the number of elements in the array:"<<endl;
    cin>> numebr_of_elements;
    int array[numebr_of_elements];
    cout<<"Enter the elemetns one by one :"<< endl;
    for(int i=0;i<numebr_of_elements;i++)
    {
        cin>>array[i];
    }

    int max=array[0];
    for(int i=1;i<numebr_of_elements;i++)
    {
        if(array[i]>max)
        {
            max=array[i];
        }
    }

    int lower_element=array[0];
    for(int i=1;i<numebr_of_elements;i++)
    {
        if(array[i]<lower_element)
        {
            lower_element=array[i];
        }
    }

    int hash_table[max+1]={0};
    for(int i=0;i<numebr_of_elements;i++)
    {
        hash_table[array[i]]++;
    }

    for(int i=lower_element;i<=max;i++)
    {
        if(hash_table[i]>1)
        {
            cout<<"Element "<< i<<" is appearing "<<hash_table[i]<<endl;
        }
    }

     
    return 0;
}
