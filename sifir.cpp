#include<iostream>
using namespace std;

class sifir{
	
	public:	
		int x;
		int y;
		//int z;
		//int t;
		//int m;
				
			void set_val(int,int);
			int hasil(){
				return x*y;
			}
};

void sifir::set_val(int a,int b){
	x=a;
	y=b;
	//z=c;
	//t=d;
	//m=e;
}

int main(){
	sifir oA1,oA2,oA3,oA4,oA5;
	oA1.set_val(2,1);
	cout<<"2x1= "<<oA1.hasil()<<endl;
	oA2.set_val(2,2);
	cout<<"2x2= "<<oA2.hasil()<<endl;
	oA3.set_val(2,3);
	cout<<"2x3= "<<oA3.hasil()<<endl;
	oA4.set_val(2,4);
	cout<<"2x2= "<<oA4.hasil()<<endl;
	oA5.set_val(2,5);
	cout<<"2x2= "<<oA5.hasil()<<endl;
	
	return 0;
}
