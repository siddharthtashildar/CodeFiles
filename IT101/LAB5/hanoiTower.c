#include <stdio.h>

void moveDisc(int n, char A, char B, char C);

int main(){

	int n;
	printf("\nEnter the number of Discs: ");
	scanf("%d",&n);
	moveDisc(n,'A','B','C');
	return 0;
}

void moveDisc(int n, char A, char B, char C){
	if(n == 1){
		printf("\nMoved Disc %d from %c to %c\n",n,A,C);
		return;
	}
	else{
		moveDisc(n-1,A,C,B);
		printf("\nMoved DIsc %d from %c to %c\n",n,A,C);
		moveDisc(n-1,B,A,C);
	}
}
