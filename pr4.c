#include<stdio.h>
#include<string.h>
int main(){
char tape[100];
int left,right;
int palindrome=1;
printf("(PR 4)Design a simulation of Turing machine for recognizing a Specific language\n");
printf("enter the string : ");
scanf("%99s",tape);
left=0;
right=strlen(tape)-1;
while(left<right)
{
if(tape[left]!=tape[right])
{
palindrome=0;
break;
}
left++;
right--;
}
if(palindrome)
printf("string accepted(palindrome)\n");
else
printf("string rejected (not a palindrome)\n");
return 0;
}
