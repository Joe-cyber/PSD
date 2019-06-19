void swap(int *a,int *b)
{
	int temp=*a;
	*a=*b;
	*b=temp;
}

int conta_spazi(char *v)
{
	int n=0;
	for(int i=0;v[i];i++)
		if(v[i]==' ')
			n++;
	return n;	
}
