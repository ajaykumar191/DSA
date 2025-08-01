#include<bits/stdc++.h>
using namespace std;

int main(){

    int a = 5;
    int b = 3;

    cout<<"a "<<a<<endl;
    cout<<"b "<<b<<endl;

    cout<<"a & b = "<<(a&b)<<endl;
    //      8 4 2 1
    //5---> 0 1 0 1
    //3---> 0 0 1 1
    //      0 0 0 1  --> 1   bitwise and opration

    cout << "a | b = "<<(a|b)<<endl;
    //      8 4 2 1
    //5---> 0 1 0 1
    //3---> 0 0 1 1
    //      0 1 1 1  --> 7    bitwise or opration

    cout<<"a ^ b = "<<(a^b) <<endl; // it both are same then it is zero or else it is a 1
     //      8 4 2 1
    //5---> 0 1 0 1
    //3---> 0 0 1 1
    //      0 1 1 0  --> 6    bitwise xor opration

    cout<<"~a = "<<(~a)<<endl; 
     //~a = -a-1  = -5-1 =-6

     cout<<"a << 1 =" << (a<<1)<<endl;
      //      8 4 2 1
      //5---> 0 1 0 1
     //     0 1 0 1 0  --> 10 

     cout<<"a >> 1"<< (a>>1)<<endl;
     //      8 4 2 1
    //5---> 0 1 0 1
     //     0 0 1 0 ---> 2 


    return 0;
}