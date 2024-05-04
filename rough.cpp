#include <iostream>
#include <cmath>
#include <cstring>
using namespace std;

class b{
    public:
      b(){cout<<"hello";}
      b(int x=0){cout<<"bye";}

};
// int armstrong(int upper,int lower)
// {
//     int i,temp1=0,temp2=0,num=0;
//     int sum_pow=0;
//     int rem;
//    for(i=lower+1;i<=upper;i++)
//    {
//       temp1=temp2=i;
//       while(temp1!=0)
//       {
//          temp1 /=10; ++num;
//        }
//       while(temp2 !=0)
//       {
//            rem=temp2 %10;
//            sum_pow +=pow(rem,num);
//            temp2 /=10;
//        }
//       if((int)sum_pow ==i)
//         {
//            return i;
//          }
//         num,sum_pow=0;

//     }
// }
int main(){
    b m();
    return 0;
}
