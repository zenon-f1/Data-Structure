#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number : "<<endl;
    cin>>n;
    int multiplier = 10;
    while(multiplier> 0){
        cout<<(multiplier*n)<<" ";
        multiplier--;
    }
    return 0;
}