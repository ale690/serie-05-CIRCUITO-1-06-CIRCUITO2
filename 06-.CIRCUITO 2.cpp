//06-CIRCUITO 2
//REALIZADO POR JOSE ALEJANDRO TANECO SANCHEZ
//12/10/2020

#include <stdio.h>
#include <stdlib.h>

int main()

{
	int cont=0, i, x, N;
	
	printf("¿QUE VALOR TENDRA N?");
	scanf("%d", &N);
	
	while(cont<=N)
{
   i=cont;
   x=(N*N)-2*i;
   printf("%d \n", x);
   cont=cont+1;
   
}

return 0;

}
