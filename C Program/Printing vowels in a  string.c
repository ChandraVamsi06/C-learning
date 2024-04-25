#include<stdio.h>
int main()
{
	char *str = "abeidouec";
	int len =  strlen(str);
	int i,j,k = 2;
	int count = 0;
	for(i = 1; i < len; i++){
		for(j = 1; j < len; j++){
			int V_count = 0;
			for(k = 1; k <= j; k++){
				if(str[k] == 'a' || str[k] == 'e' || str[k] == 'i' || str[k] == 'o' || str[k] == 'u'){
					V_count++;
				}
			}
			if(V_count <= k){
				count++;
			}
		}
	}
	printf("%d",count);
	return 0;
}
