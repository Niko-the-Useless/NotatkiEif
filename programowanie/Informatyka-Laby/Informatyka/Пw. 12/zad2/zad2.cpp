#include<iostream>
using namespace std;

typedef enum status {
	positive,
	negative,
} status;

int main(){
	int input;
	int sum=0;
	status module = positive;
	cin>>input;
	while(input != 0) {
		switch(module){
			case positive:
				if (input>0){sum=input+sum;}
				else {sum-=input;module=negative;}
			case negative:
				if (input<0){sum-=input;}
				else{sum+=input;module=positive;}
		}
		cout<<"suma: "<<sum<<endl;
		cout<<"gib input";
		cin>>input;
	}

}
