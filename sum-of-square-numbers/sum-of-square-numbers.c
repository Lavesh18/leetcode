

bool judgeSquareSum(int c){
long int a=0,b=0;
    do{b++;}
    while(b*b<c);
    
    while(a<=b)
    {
        if(a*a+b*b==c)
            return true;
        if(a*a+b*b<c)
            a++;
        if(a*a+b*b>c)
            b--;
    }
    return false;
}