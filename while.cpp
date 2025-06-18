#include <iostream>
using namespace std;
int main(){
    int num;
    int sum=0;
    cout<<"Enter numbers: ";
    cin>>num;
    while(num!=0){
        sum+=num;
        cin>>num;
    }
    cout<<"Sum: "<<sum<<endl;

    return 0;
}