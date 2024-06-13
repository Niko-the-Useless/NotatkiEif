int gcd(int x, int y){
  int z;
	while ((x%y)>0){
	z=x%y;
	x=y;
	y=z;
	}
	return y;
}
int lcm(int x, int y){
	return (x/gcd(x,y))*y;
}
