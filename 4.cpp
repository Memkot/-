#include <iostream>
using namespace std;
void mult(char a,int x){
    for(int i=0;i<x;i++){
        cout<<a;
    }
}
int main(){
    int x;
    cout<<"Введи высоту елочки - ";
    cin>>x;
    /*


     *
    / \
   /   \
  /     \
 /       \
/_________\
     |

*/
mult(' ',x+1); cout<<'*'; mult(' ',x); cout<<endl;
for(int i=1;i<x;i++){
    mult(' ',x-i); cout<<'/'; mult(' ',i*2); cout<<'\\'<<endl;
}
cout<<'/'; mult('_',x*2); cout<<'\\'<<endl;
mult(' ',x); cout<<"||";
}
