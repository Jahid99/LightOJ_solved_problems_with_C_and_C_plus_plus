#include<iostream>
using namespace std;
int main()
{
    const int size=5;
    int arr[size]={1,2,3,4,5};
    int *p;
    //p=&arr[0];
    p=arr;
    for(int i=0;i<size;i++){
        cout<<(p+i)<<" "<<*(p+i)<<endl;
    }
}
