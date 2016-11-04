#include <iostream>
#include <vector>

void main(){
	std::vector<int> vec;
	int i,flag=-1;
	
	while (std::cin>>i){
		vec.push_back(i);
	}
	int len=vec.size();
	for (int n=0; n<len;n++){
		if (vec[n]!=0){
			flag+=1;
			vec[flag]=vec[n];
		}
	}
	for (int k=flag+1;k<len;k++)
		vec[k]=0;
	for (auto &j:vec)
		std::cout<<j<<' ';
}
/* void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        for (int i=0; i<n;i++) {
            if (nums[i] == 0) {
                nums.erase(nums.begin()+i);
                nums.push_back(0);
                n--; //one less to check since left shift.
                i--; //recheck current 0 number after left shift.
            }
        }
    }*/