#include<iostream>
using namespace std;
int f(int *x,int n){
    int sum=0;
    for(int i=0;i<n;i++){
            sum=sum+x[i];

    }
   return sum;
  }

int main(){

    int a[]={10,20,30,40};
    cout<<f(a,4)<<endl;


return 0;
}
