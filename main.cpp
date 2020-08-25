#include <iostream>
#include <conio.h>
using namespace std;
int main()
{//1 den 100 kadar olan tek sayilari bastirin
int toplam=0;
	for(int a=100; a>70; a--){
		if(a%7==0){
			cout<<a<<endl;
			//toplam+=a;
		}
	}
	//cout<<toplam<<endl;
	cout<<float(98/7)<<endl;
	
	cout<<"1 ile 100 arasinda 3 ve 7 ile bolunebilen sayilar"<<endl;
	
	
	for(int a=1; a<100; a++){
		if(a%3==0 && a%7==0){
		cout<<a<<endl;	
		}
		
		
	}
	
   getch();
   return 0;
}
