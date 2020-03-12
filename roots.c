#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c,d,root1,root2,rp,ip;
	printf("Enter the coeffients\n");
    scanf("%f%f%f",&a,&b,&c);
    if(a==0&&b==0)
    	printf("Invalid input\n");
    else if(a==0)
    {
    	printf("Linear equation\n");
    	root1=-c/b;
    	printf("Root=%0.3f\n",root1);
    }
    else
    {
    	d=b*b-4*a*c;
    	if(d==0)
    	{
    		printf("Roots are real and equal\n");
    		root1=-b/2*a;
    		printf("Root1=%0.3f\n Root2=%0.3f\n",root1,root2);
    	}
    	else if(d>0)
    	{
    		printf("Roots are real and distinct\n");
    		root1=(-b+sqrt(d))/(2*a);
    		root2=(-b-sqrt(d))/(2*a);
    		printf("Root1=%0.3f\n Root2=%0.3f\n",root1,root2);
    	}
       		else
    		{
    			printf("Roots are imaginary\n");
    			rp=-b/(2*a);
    			ip=(sqrt(fabs(d)))/(2*a);
    			printf("Root=%0.3f+i %0.3f\n",rp,ip);
    			printf("Root2=%0.3f-i %0.3f\n",rp,ip);

    		}
    	}
    }
