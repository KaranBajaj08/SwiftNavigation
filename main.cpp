#include <iostream>

using namespace std;

bool findprime(int x)
{
    int i=0, count1=0;
    for(i=2;i<x/2;i++)
    {
        if(x%i==0)
        {
            count1++;
            break;
        }
    }
    if(count1==0 && x!=1)
        return true;
    else
        return false;
}

void fibonacci(int N)
{
    int n1=0,n2=1,next, i;
    for(i=1;i<N;i++)
    {
        if(i==1)
            cout<<"\t"<<n1;
        if(i==2)
            cout<<"\t"<<n2;


        next=n1+n2;
        n1=n2;
        n2=next;
        if (findprime(next)==true)
            cout<<"\tBuzzFizz";
        else if(next%3==0)
            cout<<"\tBuzz";
        else if(next%5==0)
            cout<<"\tFizz";
        else if(next%15==0)
            cout<<"\tFizzBuzz";
        else
            cout<<"\t"<<next;

    }

}


int main()
{
    int n;
    cout << "Fibonacci Series" << endl;
    cout<< "enter the value of N";
    cin>>n;
    fibonacci(n);
    return 0;
}


