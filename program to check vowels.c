#include<stdio.h>
int main()
{
    char b; 
	int m, n; 
	scanf("%c", &b); 
	m=(b=='A'||b=='E'||b=='I'||b=='O'||b=='U'); 
	n=(b=='a'||b=='e'||b=='i'||b=='o'||b=='u'); 
	if(m||n) 
	{
	    printf("Vowel"); 
	} 
	else 
	{
	    printf("Consonant"); 
	} 
}
