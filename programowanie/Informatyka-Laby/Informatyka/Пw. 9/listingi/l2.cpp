
float bss1;
int bss2 = 0;
//.bss ^
const float rodata1 = 6126.16261;
//.rodata
int data1 = 6;

static int dawfaf = 6;

namespace {
	double bss3;
	long bss4 = 0;
	//.bss ^
	double bss5 = 5.5;
	//.data ^
	const bool rodata2 = 1;
	//.rodata ^
}

int main(){
	static long long bss6;
	static unsigned short bss7 = 0;
	//.bss ^
	int stack[2]={0,2};
	//stack ^
	int * heap = new int [3] {1, 2, 3};
	//heap ^
	const int rodata3 = 444;
	//.rodata^
	
	return 0;
}
