#include<iostream>
#include<fstream>

int main(){
	unsigned int num=0;
	char search;
	char ch;
	std::string path;
	std::cout<<"Path: ";
	std::cin>>path;
	std::cout<<"\n"<<"Znak: "<<"\n";
	std::cin>>search;

	std::ifstream file;
	file.open(path,std::ios::in);
	
  while (file.get(ch)) {
		if (ch==search)num++;
  }

	file.close();

	std::cout<<"\n"<<num;

	return 0;
}
