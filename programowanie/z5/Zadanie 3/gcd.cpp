int min(int num1, int num2){
if(num1<num2) return num1;
return num2;
}


int iterGcd(int num1 ,int num2) {
    int res = min(num1, num2); 
    while (res > 0) { 
        if (num1 % res == 0 && num2 % res == 0) { 
            break; 
        } 
        res--; 
    } 
    return res; 
}

int recurGcd(int num1, int num2) {
if (num1 == 0) 
        return num2; 
    if (num2 == 0) 
        return num1; 
  
    if (num1 == num2) 
        return num1; 
  
    if (num1 > num2) 
        return recurGcd(num1 - num2, num2); 
    return recurGcd(num1, num2 - num1);
}
