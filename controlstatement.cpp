
#include <bits/stdc++.h>
using namespace std;
int main(){

   /*
        write a program to read a choice from the user

        if choice is 1 read radius of circle and find area of circle 
        
        if choice is 2 read l,b of rectangle find its area


        const value remains till end of the program

        M_PI stores the value of pi in c++ 

        #include <bits/stdc++.h> include all header file

   */


    int choi;
    cin>>choi;
    switch (choi)
    {
    case 1:
        float r;
        const float pi=3.142; // delcaring constant
        cin>>r;
        cout<<M_PI*r*r;
        break;
    case 2:
        int l,b;

        cin>>l>>b;
        //k
        cout<<l*b;
    default:
    cout<<"Wrong input sorry !!."
;        break;
    }

        /*
    
    __________________________________________________________________

    simple if  -----------> one choice

    if else -----------> two choice
    
    nested if else -----------> one if else statement can be writen on another if else multiple choice

    else if ladder -----------> many choice more than 3

    switch -----------> working with integer or char

    __________________________________________________________________
    
    */


}