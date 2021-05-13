

int strStr(char * haystack, char * needle){
int no=strlen(haystack);
    int ne=strlen(needle);
    int i,j;
    for(i=0;i<no-ne+1;i++)
    {
        for(j=0;j<ne;j++)
        {
            if(haystack[i+j]!=needle[j])
                break;
        }
        if(j==ne)
            return i;
    }
    return -1;
}