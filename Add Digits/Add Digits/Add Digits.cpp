#include <iostream>
#include <vector>

int main(){
	int n,sum=0,flag_inner;
	std::cin>>n;
	int flag=n;
	while (flag){
		flag_inner=flag;
		sum=0;//������г�ʼ������Ȼsum��ֵ�����������ѭ����
	    while(flag_inner){
		    sum+=flag_inner%10;//ʵ�ָ�λ���
		    flag_inner=flag_inner/10;//��λ
	}
	    if (sum>=10)
	        flag=sum;
	    else
		    flag=0;

	}
	std::cout<<sum<<std::endl;

}