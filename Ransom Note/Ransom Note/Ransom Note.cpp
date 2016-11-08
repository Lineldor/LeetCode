#include <iostream>
#include <string.h>
#include <string>

bool canConstruct(std::string ransomNote, std::string magazine){
	int len=ransomNote.size(),len_m=magazine.size(),match=0;
	for (int i=0;i<len;i++){
		int flag=0; char find=ransomNote[i];
		for (int j=0;j<len_m;j++){
			if (magazine[j]==find && flag==0){
				magazine.erase(j,1);
				len_m-=1;
				j-=1;
				flag=1;
				match+=1;
				break;
			}
		}
		
	}
	if (match==len)
	    return true;
	else 
		return false;
}

void main(){
	std::string s1="aabb",s2="baaabb";
	bool outcome=canConstruct(s1,s2);
	if (outcome)
		std::cout<<1<<std::endl;
	else
		std::cout<<0<<std::endl;
	

}