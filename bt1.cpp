#include<stdio.h>
int main(){
	int n,i,max,min;
	printf("Nhap so phan tu:");
	scanf("%d",&n);
	int numbers[n];
	printf("Nhap cac phan tu cua mang:");
	for(i=0;i<n;i++){
		scanf("%d",&numbers[i]);
		max=numbers[0],min=numbers[0];
		if(max<numbers[i]) max=numbers[i];
		if  (min>numbers[i]) min=numbers[i];
	}printf("max la: %d va min la :%d",max,min);
	
}

