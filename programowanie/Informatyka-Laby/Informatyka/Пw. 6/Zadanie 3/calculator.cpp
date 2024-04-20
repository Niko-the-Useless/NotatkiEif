#include<string>
float add (float x, float y){
	return x+y;
}

float subtract (float x, float y){
	return x-y;
}

float multiply (float x, float y){
	return x*y;
}

float divide (float x, float y){
	return x/y;
}

float calculate(float x, float y, std::string operations, unsigned int size){
	float res;
	float z[size];
	for(int i=0;i<=size;i++){
		switch(operations[i]){
			case '+': z[i]=add(x,y);break;
			case '-': z[i]=subtract(x,y);break;
			case '*': z[i]=multiply(x,y);break;
			case '/': z[i]=divide(x,y);break;
			default:z[i]=0;break;
		}
	}
	for(int i=0;i<=size;i++){
		res=res+z[i];
	}

	return res;
}
