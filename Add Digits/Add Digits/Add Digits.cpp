#include <iostream>
#include <vector>

int main(){
	int n,sum=0,flag_inner;
	std::cin>>n;
	int flag=n;
	while (flag){
		flag_inner=flag;
		sum=0;//必须进行初始化，不然sum的值不变会陷入死循环。
	    while(flag_inner){
		    sum+=flag_inner%10;//实现各位相加
		    flag_inner=flag_inner/10;//退位
	}
	    if (sum>=10)
	        flag=sum;
	    else
		    flag=0;

	}
	std::cout<<sum<<std::endl;

}