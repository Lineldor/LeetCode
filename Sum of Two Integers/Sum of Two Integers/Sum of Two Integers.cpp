#include <iostream>

int main(){
	int a,b,flag;
	std::cin>>a>>b;
	while(b){
		flag=a&b;  //��λ��־
		a=a^b;  //���
		b=flag<<1;
	}
	std::cout<<a<<std::endl;
}