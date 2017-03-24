#include<iostream>
using namespace std;
int main()
{
    int num[]={15,20,14,13,17,18};
    int i,j;
    for( i=0;i<6;i++)
    {
        for(j=5;j>=i;j--)
        {
            if(num[i]>num[j])
            {
                int temp;              
                //swap starts
                temp=num[i];
                num[i]=num[j];
                num[j]=temp;          
            }

        }

    }
    for(i=0;i<6;i++)
        cout<<num[i]<<endl;

    return 0;
}
