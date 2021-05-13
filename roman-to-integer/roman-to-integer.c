

int romanToInt(char * s){
int i=0;
    int number=0;
    
    for(i=0;i<strlen(s);)
	{
		if(s[i]=='I' &&  s[i+1]=='V')
		{
			number=number+4;
			i=i+2;
		}
		else if(s[i]=='I' && s[i+1]=='X')
		{
			number=number+9;
			i=i+2;
		}
		else if(s[i]=='X' &&  s[i+1]=='L')
		{
			number=number+40;
			i=i+2;
		}
		else if(s[i]=='X' && s[i+1]=='C')
		{
			number=number+90;
			i=i+2;
		}
		else if(s[i]=='C' &&  s[i+1]=='D')
		{
			number=number+400;
			i=i+2;
		}
		else if(s[i]=='C' && s[i+1]=='M')
		{
			number=number+900;
			i=i+2;
		}
		else if(s[i]=='I')
		{
			number=number+1;
			i++;
		}
		else if(s[i]=='V')
		{
			number=number+5;
			i++;
		}
		else if(s[i]=='X')
		{
			number=number+10;
			i++;
		}
		else if(s[i]=='L')
		{
			number=number+50;
			i++;
		}
		else if(s[i]=='C')
		{
			number=number+100;
			i++;
		}
		else if(s[i]=='D')
		{
			number=number+500;
			i++;
		}
		else if(s[i]=='M')
		{
			number=number+1000;
			i++;
		}
	}
        
    return number;

}