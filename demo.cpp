// You are using GCC
#include <iostream>
#include <math.h>
#include <time.h>
#include <iomanip>
using namespace std;
int main(){
    /*

    QUESTION - 1

 int a,b,c;
 cin>>a>>b>>c;
 if((a==b && a==c) || (b==a && b==c)){
    cout<<"Equilateral Triangle";
 }
 else if((a==b || a==c) || (b==a || b==c)){
    cout<<"Isosceles Triangle";
 }
 else{
    cout<<"Scalene Triangle";
 }
 */
    /*
    
    QUESTION - 3
    
    int people;
    string day;
    cin>>day>>people;
    if((day=="MON" || day=="TUE" || day=="WED" || day=="THU")&&(people>700 && people<1000)){cout<<"Successful";}

    else if((day=="MON" || day=="TUE" || day=="WED" || day=="THU")&&!(people>700 && people<1000)){cout<<"Unsuccessful";}

    else if((day=="FRI" || day=="SAT" || day=="SUN")&&(people>1500)){cout<<"Successful";}

    else if((day=="FRI" || day=="SAT" || day=="SUN")&&(people<1500)){cout<<"Unsuccessful";}

    else{
        cout<<"Invalid Input";
    }*/



    /*

        QUESTION - 4

    char c1,c2,c3;
    int n1,n2,n3;
    cin>>c1>>n1>>c2>>n2>>c3>>n3;
    if((c1==c2 && c1==c3) || (c2==c1 && c2==c3) && ((n1==n2 && n1==n3) || (n2==n1 && n2==n3))){
        cout<<c1<<" "<<n1<<endl;
        cout<<c2<<" "<<n2<<endl;
        cout<<c3<<" "<<n3<<endl;
        cout<<"Double Discount";
        return 0;
        }



    else if(((n1==n2 && n1==n3) || (n2==n1 && n2==n3)) || (c1==c2 && c1==c3) || (c2==c1 && c2==c3)){
        cout<<c1<<" "<<n1<<endl;
        cout<<c2<<" "<<n2<<endl;
        cout<<c3<<" "<<n3<<endl;
        cout<<"Discount";
        return 0;}
    
    else{
        cout<<c1<<" "<<n1<<endl;
        cout<<c2<<" "<<n2<<endl;
        cout<<c3<<" "<<n3<<endl;
        cout<<"No Discount";
    }*/


    /*

    QUESTION - 5

    int year,pay;
    cin>>year;
    if(year<1){
        cout<<"No Bonus"<<endl<<"Happy Diwali";
    }
    else if(year>1 && year<5){
        cout<<"Bonus : Rs.5000"<<endl<<"Happy Diwali";
    }
    else if(year>5 && year<10){
        cout<<"Bonus : Rs.10000"<<endl<<"Happy Diwali";
    }
    else{
        cout<<"Bonus : Rs."<<0.25*pay<<endl<<"Happy Diwali";
    }
    */
   /*

    float a,b,c;
    cin>>a>>b>>c;
    float d=b*b-4*a*c;
    float e=(-b+sqrt(d))/(2*a);
    float f=(-b-sqrt(d))/(2*a);
    cout<<d;
    if(d>=0){
    cout<<"Root1 = "<<e<<endl<<"Root 2 = "<<f;}
    
    else{
        float imag=sqrt(-d)/(2*a);
        float t=-b/(2*a);
        cout<<"\nRoot1 = "<<fixed<<setprecision(2)<<t<<"+"<<imag<<"i"<<endl<<"Root 2 = "<<imag;
    }

    */
/*

Q7
    int age1,age2,choi;
    float incom;
    cin>>age1>>age2>>choi>>incom;
    if((age1>=21 && age1<=60) && (age2>=18) && (choi==1 || choi==2 || choi==3 || choi==4) && incom>=300000){
        cout<<"Yes. You are eligible for SBI credit cards";
    }
    else{
        cout<<"No. You are eligible for SBI credit cards";
    }*/

/*

int n,a;
cin>>n;
int i=0,baby=0,att_sch=0,adu=0,k;
while(i<n){
cout<<i<<" ";
cin>>k;
cout<<endl;
if(k>=0 && k<=5){baby+=1;}
else if(k>=6 && k<=17){att_sch+=1;}
else if(k>=18){adu+=1;}
i+=1;
}
cout<<baby<<endl<<att_sch<<endl<<adu;

*/


/*
int hurl,spin,speed;
cin>>hurl>>spin>>speed;
switch(hurl){
    default:
    ;
}
if(hurl>50 && spin>60 && speed>100){
    cout<<10;return 0;
}
else if(hurl>50 && spin>60){
    cout<<9;return 0;
}
else if(spin>60 && speed>100){
    cout<<8;return 0;
}
else if(hurl>50 && speed>100){
    cout<<7;return 0;
}
else if(hurl>50 || spin>60 || speed>100){
    cout<<6;return 0;
}
else{
    cout<<5;return 0;
}
*/

}
    

