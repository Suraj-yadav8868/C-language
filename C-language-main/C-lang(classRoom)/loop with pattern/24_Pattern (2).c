//22     A
//       B C
//       D E F
//       G H I J
//       K L M N O


void main(){
	int i,j,k=1;
	for(i=1;i<=5;i++){
		for(j=i;j>=1;j--){
			printf("%c ",k+64);
			k++;
		}
		printf("\n");
	}
}