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
	std::cout<<j<<' '<<j%9<<' '<<sum<<std::endl;//���չ��ɣ�return n!=0? (n%9==0? 9:n%9):0
	}

}