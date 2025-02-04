#include<iostream>
using namespace std ;
int main(){
    int a ;
    cout<<"enter no."<<endl ;
    cin>>a;
    if (a<=1)
    {
        cout<<a<<"not prime"<<endl;
    }
    else
    {
        int i=2;
        while  (i*i <= a){

            if(a%i==0)
            {
                cout<<a<<" is not prime number";


            }
            else
            {

                cout<<a<<"is a prime number";
            }
            break;
        }
    }
    return 0;
}
