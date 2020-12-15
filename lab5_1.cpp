#include<iostream>
using namespace std;

int main(){
    
    int x,a=0,b=0;
    cout << "Enter an integer: ";
    cin >>x;
    if(x!=0){
        while(x!=0){
            if(x%2==0){
                a++;
            }else{
                b++;
            }
            cout << "Enter an integer: ";
            cin >>x;
        }
    } 
    cout << "#Even numbers = "<<a<<endl;
    cout << "#Odd numbers = "<<b;
    return 0;
    //GG
}
