#include <iostream>
#include <vector>

int main(){
	std::vector<int> n;
	for (int i=1;i<=200;++i)
		n.push_back(i);
	int flag,flag_inner,sum=0;
	for (auto &j:n){
		flag=j;
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
	std::cout<<j<<' '<<j%9<<' '<<sum<<std::endl;//最终规律：return n!=0? (n%9==0? 9:n%9):0
	}

}