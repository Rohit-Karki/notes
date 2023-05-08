#include<iostream>
#include <iomanip>
#include <math.h>
#include<cmath>
using namespace std;
int Max  = 0.0005;

double MOD(double x){
    if(x<0)x=-x;
    return x;
}

// int main(){
//     double a=2;
//     double b=3;
//     cout << setprecision(5);
//     double x=1,newX;
//     double f= 100;
//     double fa,fb;
//     int temp=15;
//     int i=1;
//     fa = pow((x + 2),3)*(x - 2);
//     fb = pow((x + 2),3)+ 3*(x - 2)*pow((x+2),2);
//     x = x-fa/fb;    
//     double prevX = 1;
//     cout << i<<"&"<<prevX<<"&"<<fa<<"&"<<fb<<"&"<<x<<"\\"<<"\\"<<endl;
//     i=2;
//     while( MOD(prevX-x)< Max || temp--){
//         prevX=x;
//         newX = x;
//        fa = pow((x + 2),3)*(x - 2);
//     fb = pow((x + 2),3)+ 3*(x - 2)*pow((x+2),2);
//         x = prevX-fa/fb;
//         cout << i<<"&"<<prevX<<"&"<<fa<<"&"<<fb<<"&"<<x<<"\\"<<"\\"<<endl;
//         // if(f<0){   
//         //     a=x;
//         // }else{            
//         //     cout << i<<"&"<<a<<"&"<<b<<"&"<<x<<"&"<<fa<<"&"<<fb<<"&"<<f<<"\\"<<"\\"<<endl;
//         //     b=x;
//         // }
//     cout <<"\\hline"<<endl;
//     i++;
//     }
//     return 0;
// }

// double funf(double x,double y ){
//     return pow(x,2) + 4*pow(y,2) - 16;
// }
// double fung(double x,double y ){
//     return x*pow(y,2)-4;
// }

// int main(){
//     double x,y,f,g,pfx,pfy,pgx,pgy,d,d1,d2,h,k;
//     x=y= 1.5;
//     setprecision(5);
//     f = pow(x,2) + 4*pow(y,2) - 16;
//     g = x*pow(y,2)-4;
//     pfx = 2*x;
//     pfy=8*y;
//     pgx=pow(y,2);
//     pgy = 2*x*y;
//     d= pfx*pgy-pfy*pgx;
//     d1= -f*pgy+g*pfy;
//     d2= -g*pfx+f*pgx;
//     h=d1/d;
//     k=d2/d;
//     double nx=x+h;
//     double ny=y+k;
//     int temp=8;
//         cout << x<<"&"<<y<<"&"<<f<<"&"<<g<<"&"<<pfx<<"&"<<pfy<<"&"<<pgx<<"&"<<pgy<<"&"<<d<<"&"<<d1<<"&"<<d2<<"&"<<nx<<"&"<<ny<<"\\"<<"\\";
//     while(temp--){
//         x = nx;
//         y= ny;
//         f = pow(x,2) + 4*pow(y,2) - 16;
//     g = x*pow(y,2)-4;
//     pfx = 2*x;
//     pfy=8*y;
//     pgx=pow(y,2);
//     pgy = 2*x*y;
//     d= pfx*pgy-pfy*pgx;
//     d1= -f*pgy+g*pfy;
//     d2= -g*pfx+f*pgx;
//     h=d1/d;
//     k=d2/d;
//      nx=x+h;
//      ny=y+k;
//         cout << x<<"&"<<y<<"&"<<f<<"&"<<g<<"&"<<pfx<<"&"<<pfy<<"&"<<pgx<<"&"<<pgy<<"&"<<d<<"&"<<d1<<"&"<<d2<<"&"<<nx<<"&"<<ny<<"\\"<<"\\"<<endl;
//     }
// }

// int main(){
//     double x,gx;
//     x=2;
//     gx= (cos(x) + 1)/3;
//     int temp=17;
//     setprecision(4);
//     while(temp--){
//         cout<<x<<"&"<<gx<<"\\"<<"\\"<<endl;
//         cout<<"\\hline"<<endl;
//         x=gx;
//          gx= (cos(x) + 1)/3;
//     }
// }


// int main(){
//     double f,g,h,x,y,z;
//     f = (4-pow(x,2)-pow(y,2)-pow(z,2))/10;
//     g= (5-pow(x,2)+pow(y,2)-pow(z,2))/10;
//     h = (6-pow(x,2)-pow(y,2)+pow(z,2))/10;
//     x=y=z=0;
//     cout<<x<<"&"<<y<<"&"<<z<<"&"<<f<<"&"<<g<<"&"<<h<<"\\"<<"\\"<<endl;
//     int temp=6;
//     while(temp--){
//     cout<<x<<"&"<<y<<"&"<<z<<"&"<<f<<"&"<<g<<"&"<<h<<"\\"<<"\\"<<endl;
//     x=f;
//     y=g;
//     z=h;
//     f = (4-pow(x,2)-pow(y,2)-pow(z,2))/10;
//     g= (5-pow(x,2)+pow(y,2)-pow(z,2))/10;
//     h = (6-pow(x,2)-pow(y,2)+pow(z,2))/10;
//     }
// }

