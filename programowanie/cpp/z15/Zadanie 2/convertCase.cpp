#include<iostream>

void convertCase (char text[]){
		int i=0;

		while(text[i]!='\0'){
			if (text[i]>96 && text[i]<123){
				text[i]=text[i]-32;
		}
		std::cout<<text[i]<<std::endl;
		i++;
	}
}
