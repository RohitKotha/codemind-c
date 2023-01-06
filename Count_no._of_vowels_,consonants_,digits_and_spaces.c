#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];
	int i,len1=0,len2=0,len3=0,vc=0;
	scanf("%[^
]s",str);
	for(i=0;str[i]!=NULL;i++)
	{
		if(str[i]=='a'|| str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U')
		{
		len1++;
		}
	}
	for(i=0;str[i]!=NULL;i++)
	{
		if(str[i]!='a'&& str[i]!='e' && str[i]!='i' && str[i]!='o' && str[i]!='u' && str[i]!='A' && str[i]!='E' && str[i]!='I' && str[i]!='O' && str[i]!='U')
		{
		len2++;
		}
	}
	for(i=0;str[i]!=NULL;i++)
	{
	    if(str[i]=='1'|| str[i]=='2' || str[i]=='3' || str[i]=='4' || str[i]=='5' || str[i]=='6' || str[i]=='7' || str[i]=='8' || str[i]=='9' || str[i]=='0')
	    {
		len3++;
		}
	}
	for(i=0;str[i]!=NULL;i++)
	{
		if(str[i]==' ')
		{
			vc++;
		}
	}
	printf("Vowels: %d
Consonants: %d
Digits: %d
White spaces: %d",len1,len2-len3-vc,len3,vc);
}