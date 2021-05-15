

bool isSubsequence(char * s, char * t){
int x=strlen(s);
    int y=strlen(t);
    
    if(x>y)
        return false;
    
    int count=0;
    for(int i=0;i<y;i++)
    {
        if(s[count]==t[i])
            count++;
    }
    if(count<x)
        return false;
    return true;
}
