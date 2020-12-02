#include <stdio.h>

int main(){
	int m,total=7,i;
	scanf("%d",&m);
	
	if(i>100){
		while(m>100){
			total=total+5;
			m--;
		}
		while(m>30){
			total=total+2;
			m--;
		}
		while(m>10){
			total=total+1;
			m--;
		}
		printf("%d",total);
	}else{
			if(m>30){
				while(m>30){
					total=total+2;
					m--;
				}
				while(m>10){
					total=total+1;
					m--;
				}
				printf("%d",total);
			}else{
				if(m>10){
					while(m>10){
						total=total+1;
						m--;
					}
					printf("%d",total);
				}else{
						printf("%d",total);
					}
				}
		}	



	return 0;
}