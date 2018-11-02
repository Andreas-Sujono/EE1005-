#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>


int main()
{
    // remember all input and output must be in float data type
	char repeat = 'Y';
	do{
		printf("\nsolving quadratic equation\n");
		float a,b,c,root1,root2;

		printf("input a : ");
		scanf("%f" , &a );
		printf("input b : ");
		scanf("%f" , &b );
		printf("input c : ");
		scanf("%f" , &c );

		if(!a){
			printf("root is %.3f\n", (-c/b));
		}
		else if( (b*b - 4*a*c) >= 0){
			root1 = (-b + sqrt(b*b - 4*a*c))/(2*a);
			root2 = (-b - sqrt(b*b - 4*a*c))/(2*a);
			printf("root1 is %.3f\nroot2 is %.3f\n", root1, root2);
		}
		else{
			root1 = -b/(2*a);
			root2 = sqrt(fabs(b*b - 4*a*c)) / (2*a);
			printf("complex root1 is %.3f + \(%.3f\) i\n",root1, root2);
			printf("complex root2 is %.3f - \(%.3f\) i\n",root1, root2);
		}

		printf("do you want to repeat the program(y/n)?\n");
		 while(getchar() != '\n'){} // flush input buffer
		repeat = toupper(getchar());

        while(repeat != 'Y'&&repeat !='N'){
            printf("do you want to repeat the program(y/n)?\n");
             while(getchar() != '\n'){} // flush input buffer
            repeat = toupper(getchar());
        }
	}while(repeat == 'Y');
    return 0;

}
