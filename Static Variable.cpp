#include <iostream>
using namespace std;
void func(){
    static int a=8;
    ++a;
  
    cout<<a<<endl;
}
int main(){
    func();
    func();
    
}
