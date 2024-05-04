#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;
int count(int i);
int count(int i){
   int c, a;
   while(i!=0){
      a=i%10;
      c++;
      i=i/10;
   }
   return c;
}
int main(){
      //ofstream is for output that is insertion operator (CIN) >> to write into file
	  //ifstream is for input that is extraction operator (COUT)<< is used to extract from the file and read it
	  /*


              cin>>writes to the file------->PROGRAM DATA------------->cout<<"display"reads from the file*/



   // fstream fileobg;
   // fileobg.open("file_Sample1.txt",ios::in);
   // char ch;
   // if(!fileobg){
   //    cerr<<"fileresource not found"<<endl;
   // }
   // else{
   //    while(!(fileobg.eof())){
   //    fileobg>>ch;
   //  //  if(fileobg.eof()) break;
   //    cout<<ch;
      
   //    }
   // }
   // fileobg.close();
   

int digit=0;
int sum=0;
int unit;
int b;
   for(int i=1;i<1000;i++){
        digit=count(i);
          b=i;
        while(b!=0)
        {
             unit=b%10;
             sum=sum+pow(unit,digit);
             b=b/10;
             cout<<sum<<" "<<i<<endl;
        }
   if(i==int(sum))
   {
      cout<<i<<" armstrong number"<<endl;
   }
   sum=0;
   //else cout<<"not a armstrong number"<<endl;
   }
   return 0;



}