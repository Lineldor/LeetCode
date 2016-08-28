#include <iostream>
#include <vector>

int main(){
	int n,sum=0,flag_inner;
	std::cin>>n;
	int flag=n;
	while (flag){
		flag_inner=flag;
	    while(flag_inner){
		    sum+=flag_inner%10;
		    flag_inner=flag_inner/10;
	}
	flag=sum;

	}
	std::cout<<sum<<std::endl;

}