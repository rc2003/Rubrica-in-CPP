#include <stdio.h>
#include <iostream>
using namespace std;
int N, S;
int main(){
	
//SCRITTURA SU FILE
	freopen("inputs/01.txt", "r", stdin);
	freopen("outputs/01.txt", "w", stdout);
	scanf("%d", &N);
	int A[N];

//CODICE
for (int i=0;i<N;i++){
	scanf("%d", &A[i]);
}
for(int z=0; z<N; z++){
	S+=A[z];
}

//SCRITTURA SU FILE OUTPUT
printf("%d", S);
return 0;

//RICORDA DI METTERE TUTTI I FILE NELLA STESSA CARTELLA

}
