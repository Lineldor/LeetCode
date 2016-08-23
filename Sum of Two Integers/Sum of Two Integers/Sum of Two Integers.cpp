#include <iostream>

int main(){
	int a,b,flag;
	std::cin>>a>>b;
	while(b){
		flag=a&b;  //进位标志
		a=a^b;  //结果
		b=flag<<1;
	}
	std::cout<<a<<std::endl;
}