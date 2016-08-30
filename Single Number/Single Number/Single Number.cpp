#include <iostream>
#include <vector>

int main(){
	int arr[5]={1,1,2,2,3},out=0;
	for (int *p=arr;p!=arr+5;++p)
		out=out^*p;
	std::cout<<out;
}