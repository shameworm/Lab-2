#include "ex1.h"
int start(){
	double e = 0.000001;
	double x;
	double sinx = 0; 
	double cosx = 0;
	double slog;
	double fx = 0;
	int n;
	printf("enter x\n");
	scanf("%lf", &x);
	n = 0;
	do	{
				    slog = pow((-1), n) * ((pow(x, ((2*n)+1)))/(factorial((2*n)+1)));
		    printf("slog = %lf	", slog);
		    printf("abs slog = %lf	", fabs(slog));
			sinx+= slog;
			printf("sinx = %lf\n", sinx);
		n++;
		}while(fabs(slog)>e);
			
		n = 0;		
		do	{
			 slog = pow((-1), n) * ((pow(x, (2*n)))/(factorial(2*n )));
			  printf("slog = %lf	", slog);
		    printf("abs slog = %lf	", fabs(slog));
			cosx+= slog;
				printf("cosx = %lf\n", cosx);
		n++;
		}while(fabs(slog)>e);
			
		
		fx = (pow(sinx, 2))/(1 + pow(cosx, 3));
	
	printf("\n f(x) = sin(x)^2/(1 + cos(x)^3) = %lf ", fx);
	
	
 return 0;
}
