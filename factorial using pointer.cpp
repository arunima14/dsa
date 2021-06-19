using namespace std;
#include<iostream>

int factorial(int* f)
{
    int k=1, *kptr=&k;
    for(int i=1;i<=*f;i++)
    {
        *kptr =(*kptr)*i;
    }
    return *kptr;
}

int main(){
    int n;
    int *nptr=&n;
    cout<<"enter a number:";
    cin>>n;
    int k =factorial(nptr);
    cout<<"factorial:"<<k;

    return 0;
}
