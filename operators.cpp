#include <iostream>
using namespace std;
int main(){
    int x=25;
    float y=10,z=x/y; //implicit type convertion
    /*

    +   add
    -   subtraction
    *   multiplication
    /   division
    %   modulos remainder

    z=25/10.0 z=2.5
    float higher data type 
    int lower data type
    lower data type to higher data type
    modulos operaotr do not  work with float data type
    */
    

    /*
    assignment symbol

    =   simple assignment 
    +=
    -=
    *=
    /=
    %=

    */


    /*
    relational operator
    >
    >=
    <
    <=
    !=
    ==

    result of the relational operator either true or flase
    true 1
    flase 0

    */

/*
logical operator

&&  and     both conditon has to true
||  or      one of condition is to be true
!   not     it will reverse the value of result 

ex:

5>6 || 7>6  0||1 output:1
5>6 && 7>6  0&&1 output:0

0<x<=50
x>0 && x<=50

*/
x=25;
cout<<(x>0) && (x<=50);

/*
incremaent operaotr is used to increase the value of a variable by 1

decreament operaotr is used to decrease the value of a variable by 1

two types of increament
    1.pre-increament ++x;
    x=10
    z=++x;
    
    changed value
    x=11
    z=11

    2.post-increament x++;  
    x=10
    z=x++;
    
    changed value
    x=11
    z=10


two types of decreament
    1.pre-decreament --x;

    x=10
    z=--x;
    
    changed value
    x=9
    z=9

    2.post-decreament x--;

    x=10
    z=x--;
    
    changed value
    x=9
    z=10


    int x=25,y=10,z=++x + y++;
	cout<<x<<endl<<y<<endl<<z;


*/

int k=10;
cout<<"\n"<<k++<<endl<<k;
string name;
}