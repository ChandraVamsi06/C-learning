#include<stdio.h>
int main()
{
	int i;
	char str[] = "Sana ChanDra VaMsi teJa veNkaTa RayUdu";
	int frq1[26] = {0};
	int frq2[26] = {0};
	for(i = 0; str[i] != '\0'; i++){
		if(str[i] >= 'A' && str [i] <= 'Z')
		frq1[str[i] - 'a']++;
		else if(str[i] >= 'a' && str [i] <= 'z')
		frq2[str[i] - 'A']++;
	} 
	for(i = 0; i < 26; i++){
		if(frq1[i] != 0 && frq2[i] != 0){
			printf("%c --> %d\n",i + 97, frq1[i]);
		    printf("%c --> %d\n",i + 65, frq2[i]);
		}
	}
	return 0;
}
