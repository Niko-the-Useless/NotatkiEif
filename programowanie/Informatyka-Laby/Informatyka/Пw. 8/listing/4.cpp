void useReference(float &ref){
	ref = 2.0;
}
void incrementVal(float &val){
	++val;
}
void useConstReference(const float &ref){
	//ref = 2.5;
}

int main(){
	float val = 5.5;
	const float constVal = 5.5;
	useConstReference(val);
	useConstReference(constVal);
	//useReference(constVal);
	useConstReference(constVal);
	incrementVal(val);
	return 0;
}
