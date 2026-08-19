#include<stdio.h>
#include<string.h>
int main()
{
char str[100],stack[100];
int top =-1;
int i = 0,len;
printf("Enter the string:");
scanf("%s",str);
len=strlen(str);

/*push all'a'onto the stack*/
while(i<len && str[i]=='a')
{
stack[++top]='a';
i++;
}

while(i<len && str[i] =='b')
{
if(top==-1)
{
printf("String Rejected\n");
return 0;
}
top--;
i++;
}
if(i==len && top==-1)
{
printf("string Accepeted\n");
}
else
{
printf("string Rejected\n");
}
return 0;
}
