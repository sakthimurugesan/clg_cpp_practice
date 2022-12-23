#include <iostream>
using namespace std;
int main(){
    /*
    entry control loop      pre-control loop
    exit control loop       post-control loop*/
    int i,n1;
    cin>>i;
    n1=i;
    for(int k=1;k<=i;k++){
        for(int j=1;j<=n1;j++){
            cout<<j<<" ";
        }
        n1-=1;
        cout<<endl;
    }

    n1=i;
    cout<<endl<<endl;

    for(int k=i;k>=1;k--){
        for(int j=1;j<=k;j++){
            cout<<j<<" ";
        }
        
        cout<<endl;
    }
    /*
    unconditional statement

    break ;
    continue
    goto is used to jump from one statement to another statement using label



    */
}