

bool isValid(char * s){
int len=strlen(s);
    int p=0;
    char *stack=malloc(len+1);
    int i;
    for(i=0;i<len;i++)
    {
        if(s[i]=='(')
        {
            p++;
            stack[p]=')';
        }
        else if(s[i]=='[')
        {
            p++;
            stack[p]=']';
        }
        else if(s[i]=='{')
        {
            p++;
            stack[p]='}';
        }
        else
        {
            if(s[i]==stack[p])
                p--;
            else
                return false;
        }
    }
    if(p==0)
    {
        free(stack);
        return true;
    }
    else
    {
        free(stack);
        return false;
    }
    }
