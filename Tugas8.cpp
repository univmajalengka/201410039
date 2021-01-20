//Membuat Setengah Piramida atau Segitiga Siku-siku
#include<iostream>
using namespace std;

void line(){
    cout<<"\n-----------------------------"<<endl;
}
int main(){
       cout<<"Nama		: Hilda Nurhidayati"<<endl;
       cout<<"NPM		: 20.14.1.0039"<<endl;
       cout<<"Kelas		: 1C"<<endl;
	   cout<<"----------SETENGAH PIRAMIDA----------";
       line();
     for(int i=1 ; i<=5 ; i++){
         for(int p=1 ; p<=i ; p++){
             cout<<"  *";
         }
         cout << endl;
      }
      return 0;
}
