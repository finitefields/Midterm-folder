#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	time_t *T;
	srand(time(T));
	int i,N,*v;
    N=10;
	v=(int *)malloc(N*sizeof(int));
	printf("慢速排序法...\n製造隨機的十個1-100的整數\n以下 : ");
	for(int i=0;i<10;i++){
		v[i]=rand()%99+1;
		printf("%d ",v[i]);
	}
	for(int j=0;j<9;j++){	
		for(int i=0;i<(9-j);i++){
			if(v[i]>v[i+1]){
				int f=v[i+1];
				v[i+1]=v[i];
				v[i]=f;
			}
		}
	}	
	printf("\n排列之後~\n");
	for(int i=0;i<10;i++){
		printf("%d ",v[i]);
	}
	return 0;
}
