#include <iostream>
#include<string>
#include<cstdlib>
#include<cstring>
#include"test.h"
using namespace std;



int main(){

char vic[]
= "+CWLAP:(0,\"CSIS_MH\",-86,\"1c:b9:c4:38:3a:b8\",1,41,0)+CWLAP:(0,\"CSIS_MH\",-73,\"1c:b9:c4:38:40:a8\",6,38,0)+CWLAP:(3,\"stop tryna be God\",-62,\"02:db:df:e4:f5:9d\",6,32767,0)+CWLAP:(3,\"island-17E290\",-51,\"30:87:d9:57:e2:93\",11,35,0)";



get_creds(vic,"+CWLAP:(" , 4);
cout<<vic<<endl;
cout<<endl;


cout<<"Please Select Your Connection"<<endl;
cout<<endl;
short a = 0;

cin>>a;

if(a >= 1 && a<=4){
extract(vic,a);

cout<<vic<<endl;
cout<<endl;
}

else{
    cout<<"INVALID"<<endl;
cout<<endl;
}



}
