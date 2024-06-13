#include<iostream>
#include<stdio.h>

int main (){
	int a,b,c,d; // stack
	int *ptr1 = new int(5); //heap
	int *ptr2 = new int(5); //heap
	int *ptr3 = new int(5); //heap
	int *ptr4 = new int(5); //heap

	std::cout<<"stack /n";
	std::cout<<&a<<"; ;"<<&b<<"; ;"<<&c<<"; ;"<<&d<<"\n";
	std::cout<<"heap /n";
	std::cout<<ptr1<<"; ;"<<&ptr2<<"; ;"<<&ptr3<<"; ;"<<&ptr4<<"\n";
	
	printf ("%d;%d;%d;%d\n",&a,&b,&c,&d);
	printf ("%d;%d;%d;%d",ptr1,ptr2,ptr3,ptr4);
	return 0;
}
