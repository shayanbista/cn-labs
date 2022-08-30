//toh
#include<stdio.h>	
#include<conio.h>
void toh(int disk,char source,char dest,char mid){
	if (disk==1){
		printf("the disk  1  moves from %c To %c\n",source,dest);
	}
	else{
		toh(disk-1,source,mid,dest);
		printf("\n");
		printf("the disk %d moves from  to %c and then %c\n",disk,source,dest);
		toh(disk-1,mid,dest,source);
	}
}
int main(void){
	int n=5;
	toh(n,'A','C','B');
}	
