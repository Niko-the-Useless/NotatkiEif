#include <iomanip>
#include<iostream>
int main(){
	int bardzoAmbitnaNazwa = 1231241;
	float awdawdaf =3.14159;

	std::cout << "liczba: " <<bardzoAmbitnaNazwa<<std::endl;
	std::cout<<std::hex<<std::showbase<<bardzoAmbitnaNazwa<<std::endl;
	std::cout<<std::setw(8)<<std::setfill('0')<<awdawdaf<<std::endl;
	std::cout<<std::setprecision(3)<<awdawdaf<<std::endl;
	return 0;
}
