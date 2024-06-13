#include <iostream>
#include <fstream>
int main(int argc, char* argv[]) {
	
	std::ofstream comp("compilation.txt", std::ios::out);

    for (int i=1;i<argc;++i) {
				char buffor[21]={'0'};
        std::cout<<"Plik "<<i<<": "<< argv[i]<<std::endl;
				std::ifstream plik;
				plik.open(argv[i],std::ios::in);
				plik.read(buffor,20);
				comp.write(buffor,20);
				plik.close();
    }
		
		comp.close();
    return 0;
}
