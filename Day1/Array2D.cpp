#include<iostream>
using namespace std;
int main(){

     int a[3],[3];
     int i,j;
     cout<<"    Enter the the array ";
     
     for (i=0;i<=2;i++)
     {
      for (j=0;j<=2;j++)
      {
        cin>>*(*(a+i)+j)

      }

     }

      cout<<"Array elemenys are"<<endl;
     for (i=0;i<=2;i++)
     {
      for (j=0;j<=2;j++)
      {
        cout<<*(*(a+i)+j)<<"\t";

        
      }
      cout<<endl;

     }
   
     
}