#include <cstdlib>
#include <iostream>
using namespace std;
int a[]={10,20,30,40,50,60,70,80,90};
int apartine(int x,int i){
    if((x>=a[i])&&(x<a[i+1])) return 0;
    else return 1;
}
int ro(int s,int i){
    if(s<a[i]) return -1;
    if(s>=a[i])return 1;
    return 0;
}
int CautareBinara(int x,int s,int d){
    int m=(s+d)/2;
    if(apartine(x,m)==0) cout<<x<<" apartine intervalului "<<m<<" si "<<m+1<<endl;
    else{
         if(ro(x,m)<0) CautareBinara(x,s,m-1);
         if(ro(x,m)>0) CautareBinara(x,m+1,d);
         }                   
}


int main(int argc, char *argv[]){
    int x=70;
    int flag=0;                     
    if(x<a[0]){
               cout<<x<<" este mai mic decat primul element"<<endl;
               flag=1;
    }
               
    if(x>a[7]){
                 cout<<x<<" este mai mare decat ultimul element"<<endl;
                 flag=1;
    }          
    if(x==a[7]){
                  cout<<x<<" este ultimul element al sirului"<<endl;
                  flag=1;
    }
    if(flag==0)   CautareBinara(x,0,7);
   

    
                

                                 
    
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
