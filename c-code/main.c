/*#include <stdio.h>
int main(void)
{
	char firstletter;
	int hour, minute;
	firstletter = 'a';   
	hour = 11;           
	minute = 59;         
	printf("firstletter=%c,hour=%d,minute=%d.\n",firstletter,hour,minute);
	int total;
	printf("total=%d\n",total=hour * 60 + minute);
	printf("next=%d\n",minute/60);
	printf("third=%d\n",minute*100/60);
	printf("last=%f\n",minute/60.0);
	printf("%c\n",'a'+1);
}
*/
/*#include <math.h>
#include <stdio.h>
int main(void)
{
	double pi=3.1416;
	printf("sin(pi/2)=%f\nli1=%f\n",sin(pi/2),log(1.0));
	return 0;
}
*/
/*#include <stdio.h>

void newline(void)
{
	printf("\n");
}
void threelines(void)
{
	newline();
	newline();
	newline();
}

int main(void)
{
	printf("First Line.\n");
	newline();
	printf("Second Line.\n");
	threelines();
	return 0;
}
*/

/*#include <stdio.h>

void print_time(int hour,int minute)
{
	printf("%d:%d\n",hour,minute);
}

int main(void)
{
	int h=23,m=59;
	print_time(h,m);
	return 0;
}
*/



/*#include <stdio.h>


int hour=23,minute=59
void print_time(void)
{
	printf("%d:%d in print_time\n",hour,minute);
}

int main(void)
{
	print_time();
	printf("%d:%d in main\n",hour,minute);
	return 0;
}
*/


/*#include <stdio.h>
	

int hour=23,minute=59,x=10;
void print_time(void)
{
	printf("%d:%d in print_time\n",hour,minute);
}

int main(void)
{
	int hour=0,minute=30;
	print_time();
	printf("%d:%d in main\n",hour,minute);
	printf("x=%d\n",x);
	return 0;
}
*/



/*#include <stdio.h>

void foo(void)
{
	int i;
	printf("%d\n",i);
	i=799;
}

int main(void)
{
	foo();
	printf("hello\n");
	foo();
	return 0;
}
*/

/*#include <stdio.h>

void print_time(int hour,int minute)
{
	printf("%d:%d\n",hour,minute);
}


int main(void)
{
	print_time(23,59);
	return 0;
}
*/



/*#include <stdio.h>

void foo (void)
{
	int i=0;
	{
		int i=1;
		int j=2;
		printf("i=%d,j=%d\n",i,j);
	}
	printf("i=%d\n",i);
}

int main(void)
{
	foo();
	return 0;
}
*/


/*#include <stdio.h>

int x = -1;
int main(void)
{
	if (x > 0){
        	printf("x is positive\n");
		}
	else{
		printf("x is nagetive\n");
		}
	return 0;
}
*/

/*#include <stdio.h>

void print_even_or_odd(int x)
{
	if (x%2==0)
		printf("x is even\n");
	else
		printf("x is odd\n");
}

int x=-1;

int main(void)
{
	print_even_or_odd(x);
	return 0;
}
*/



/*#include <stdio.h>

int x=0;
void choose(int x)
{
	if(x>=0){
		if (x>=10){
			printf("十位为 %d,个位为 %d\n",x/10,x%10);
		}
		else{
			printf("只有个位为 %d\n",x);
		}
	}
	else{
		if (x<=-10){
			printf("十位为 %d,个位为 %d\n",-x/10,-x%10);
		}
		else{
			printf("只有个位为 %d\n",-x);
		}
	}
}

int main(void)
{
	choose(x);
	return 0;
}
*/


/*#include <stdio.h>

void print_day(int day)
{
	switch(day){     //直接从对应case 后的语句执行 
	case 1:
		printf("Monday\n");
		break;
	case 2:
		printf("Tuesday\n");
		break;
	case 3:
		printf("Wednesday\n");
		break;
	case 4:
		printf("Thursday\n");
		break;
	case 5:
		printf("Friday\n");
		break;
	case 6:
		printf("Saturday\n");
		break;
	case 7:
		printf("Sunday\n");
		break;
	default:
		printf("illegal day number!\n");
		break;
	}
}


int main(void)
{
	print_day(2);
	return 0;
}
*/

/*#include <stdio.h>
#include <math.h>

void print_logarithm(double x)
{
	if (x<=0.0){
		printf("positive number only,please.\n");
		return;
	}
	printf("The log of x is %f.\n",log(x));
}

double x=-5.00;

int main(void)
{
	print_logarithm(x);
	return 0;
}		
*/


/*#include <stdio.h>

int is_even(int x)
{
	if (x%2==0){
		return 1;
	}
	else{
		return 0;
	}

	return !(x%2);
}

int x=9;

int main(void)
{
	int a=is_even(x);
	//printf("a=%d\n",a);
	if (a==1){
		printf("%d is even\n",x);
		return 1;
	}
	else{
		printf("%d is odd\n",x);
		return 0;
	}
}		
*/


/*#include <stdio.h>

void foo(int x,int y)
{
	if (x>=0 && y>=0){
		printf("both x and y are positive\n");
		return;
	}
	else if (x<0 && y<0){
		printf("both x and y are negative\n");
		return;
	}
	printf("x has a different sign from y\n");
}


int x=-6;
int y=-4;



int main(void)
{
	foo(x,y);
	return 0;
}
*/


/*#include <stdio.h>

int is_leap_year(int year)
{
	if (year<0){
		printf("Please input a positive number\n");
		return 2;
	}	
	else if (year%4==0 || year%400==0){
		printf("%d is leap year.\n",year);
		return 1;
	}
	else{
		printf("%d is not leap year.\n",year);
		return 0;
	}

	return !(year%4==0 || year%400==0);	
}	

int year=2008;
				
int main(void)
{	
	int a=is_leap_year(year);
	if (a==0){
		printf("a=%d\n%d is a leap year.\n",a,year);
	}
	else if(a==1){
		printf("a=%d\n%d is not a leap year.\n",a,year);
	}
	return 0;
}
*/



/*#include <stdio.h>
#include <math.h>

double myround(double x)
{	
	if (x<0){
		if (x-floor(x)>0.55){
			printf("%f's result_1=%f\n",x,ceil(x));
		}
		else{
			printf("%f's result_2=%f\n",x,floor(x));
		}
	}
	else{
		if (ceil(x)-x>0.55){
			printf("%f's result_3=%f\n",x,floor(x));
		}
		else{
			printf("%f's result_4=%f\n",x,ceil(x));
		}
	}
	return 1;
}

double x=0;

int main(void)
{
	myround(x);
	return 0;
}
*/


/*#include <stdio.h>
#include <math.h>

double distance(double x1,double y1,double x2,double y2)
{
	double dx=x2-x1;
	double dy=y2-y1;
	double dsquared=dx*dx+dy*dy;
	//printf("%f\n",dsquared);
	double result=sqrt(dsquared);
	return result;
}

double x1=1.0;
double y_1=2.0;
double x2=4.0;
double y2=6.0;


int main(void)
{
	printf("distance is %f\n",distance(x1,y_1,x2,y2));
	return 0;
}
*/


/*#include <stdio.h>
#include <math.h>


double x1=1.0;
double y_1=2.0;
double x2=4.0;
double y2=6.0;

double distance(double x1,double y1,double x2,double y2)
{
	double dx=x2-x1;
	double dy=y2-y1;
	double dsquared=dx*dx+dy*dy;
	double result=sqrt(dsquared);
	return result;
}



double area(double radius)
{
	return 3.1416*radius*radius;
}


int main(void)
{
	double a=area(distance(x1,y_1,x2,y2));
	printf("area=%f\n",a);
	return 0;
}
*/


/*#include <stdio.h>


int factorial(int n)
{
	if (n==0){
		return 1;
	}
	else{
		int recurse= factorial(n-1);
		int result=n*recurse;
		return result;
	}
}

int n=4;

int main(void)
{
	int a=n;
	if (a>=0){	
		printf("factorial'%d'=%d\n",n,factorial(n));
	}
	else{
		printf("please input a positive number.\n");
	}
	return 0;
	
}
*/



/*#include <stdio.h>


int factorial(int n)
{
	if (n==0){
		return 1;
	}
	else if (n<0){
		printf("please input a positive number.\n");
		return -1;
	}
	else{
		int recurse= factorial(n-1);
		int result=n*recurse;
		return result;
	}
}

int n=-4;

int main(void)
{
	int a=factorial(n);
	if (a>=0){	
		printf("factorial'%d'=%d\n",n,factorial(n));
	}
	return 0;
	
}
*/

/*#include <stdio.h>

int Euclid(int a, int b)
{
	if (a%b==0){
		return b;
	}
	else{
		int E=Euclid(b,a%b);
		return E;
	}
}


int a=-17;
int b=4;


int main(void)
{
	int x=a;
	int y=b;
	printf("%d,%d\n",x,y);
	if (x<=0||y<=0){
		printf("wrong,positive number,only\n");
	}
	else{
		printf("The Greatest Common Divisor of %d and %d is:%d\n",a,b,Euclid(a,b));
	}
	return 0;
}
*/


/*#include <stdio.h>

int Fibonacci(int n)
{	
	if (n>1){
		int F=Fibonacci(n-1)+Fibonacci(n-2);//指定常量（F)为固定指针
		return F;
	}
	else{
		return 1;
	}
}


int n=-5;
int main(void)
{
	if (n<0){
		printf("wrong,positive number,only\n");
		return 0;
	}
	else{
	printf("Fibonacci %d=%d\n",n,Fibonacci(n));
	return 1;
	}
}
*/

/*#include <stdio.h>
int factorial(int n)
{
	int result=1;
	while (n>0){
		result=result*n;
		n=n-1;
	}
	return result;
}

int n=3;

void main(void)
{
	printf("%d\n",factorial(n));
}
*/




/*#include <stdio.h>

int Euclid(int a,int b)
{
	while (a%b!=0){
		int x=a;
		a=b;
		b=x%b;
	}
	return b;
}

int a=19;
int b=4;

void main(void)
{
	printf("The Greatest Common Divisor of %d and %d is:%d\n",a,b,Euclid(a,b));
}
*/


/*#include <stdio.h>

int Fibonacci(int n)
{
	int countNum=2;
	int tot=2;
	int mid=1;
	int butt=1;
	while (countNum<n){
		butt=mid;
		mid=tot;
		tot=mid+butt;
		countNum+=1;
	}
	return tot;
}

int n=5;

void main(void)
{
	if (n<0){
		printf("please input a positive number\n");
	}
	else if (n==1||n==0){
		printf("Fibonacci %d=1\n",n);
	}
	else{
		printf("Fibonacci %d=%d\n",n,Fibonacci(n));
	}
}
*/		
					

/*#include <stdio.h>

int count_number_9(int a,int b)
{
	int number=a;
	int countNum=0;
	while (number<=b){
		if (number>=10){
			if(number/10==9){
				countNum+=1;
			}
			else if(number%10==9){
				countNum+=1;
			}
		}
		else{
			if(number=9){
				countNum+=1;
			}
		}
		number+=1;
	}
	return countNum;
}



int a=100;
int b=10;


void main(void)
{
	if (a>0&&a<b&&b<=100){
		printf("Number 9 appear %d time(s).\n",count_number_9(a,b));
	}
	else{
		printf("The number of a and b must in the range of '0'to'100',and a muat lower than b.\n");
	}
}
*/

/*#include <stdio.h>

int factorial(int n)
{
	int result=1;
	int i=1;
	do{
		result=result*i;
		i+=1;
	}
	while (i<=n);
	return result;
}

int n=5;

void main(void)
{
	printf("%d\n",factorial(n));
}
*/



/*#include <stdio.h>


int factorial(int n)
{
	int result=1;
	for (int i=1;i<=n;i++){//语句 → for (控制表达式1; 控制表达式2; 控制表达式3) 语句=:
		result=result*i;                                                //控制表达式1;
										//while (控制表达式2) {
        									//		语句
        									//		控制表达式3;
										//}                                                                      
	}                                                                                                                                                
	return result;                                                                                                           
}


int n=5;
void main(void)
{
	printf("%d\n",factorial(n));
}
*/	

/*#include <stdio.h>

int is_prime(int n)
{
	int i;  //这里的i作为全局变量
	for (i=2;i<n;i++){   //在2到n之间查看有无能被n整除的数，如果有，且不为本身(n)，则这个数不为质数
		if(n%i==0){
			break;
		}
	}
	if (i==n){
		return 1;
	}
	else{
		return 0;
	}
}


	
int main(void)
{
	int i;
	for (i=1;i<=100;i++){
		if (!is_prime(i)){
			//printf("%d\ng",is_prime(i));          //True=0;
			continue;
		}
		printf("%d\n",i);
	}
	return 0;
}
*/

/*#include <stdio.h>

int main(void)
{
	int i,j;
	for (i=1;i<=9;i++){
		for (j=1;j<=i;j++){
			printf("%d\t",i*j);
		}
		printf("\n");
	}
	return 0;
}
*/



/*#include <stdio.h>
#include <math.h>

void diamond(int a,char b)
{
	int i,j;
	for (i=1;i<=a;i++){
		for (j=1;j<=a;j++){
			if((i>-j+(a+1)/2)&&(i>j-(a+1)/2)&&(i<j+(a+1)/2)&&(i<-j+3*(a+1)/2)){
				printf("%c ",b);
			}
			else{
				printf(" %s"," ");
			}
		}
		printf("\n");
	}
}


int a=17;
char b='+';

void main(void)
{
	if (a%2==0){
		printf("%s\n","a只能为质数");
	}
	else {
		diamond(a,b);
	}
}
*/

/*#include <stdio.h>

void main(void)
{
	int n=3;
	switch (n){
	case 1:
		printf("1\n");
		break;
	case 2:
		printf("2\n");
		break;
	default:
		printf("other number\n");
		break;
	}
}
*/

/*#include <stdio.h>


int classical(int a)
{
	register x=0;
	do{
		x++;
	}
	while (--a>0);
	return x;
}



int duff_device(int a)
{
	register x=0;
	int n=(a)/10;
	int count=0;
	switch (a%10){
	case 0:
		do{
			x++,count++;
	case 9:
		x++,count++;
	case 8:
		x++,count++;
	case 7:
		x++,count++;
	case 6:
		x++,count++;
	case 5:
		x++,count++;
	case 4:
		x++,count++;
	case 3:
		x++,count++;
	case 2:
		x++,count++;
	case 1:
		x++,count++;
	}
	while (--n>0);                   //通过减小判断次数，来缩短时间
	}
	return count;
}

int a=100;

void main(void)
{
	printf("%d\n",classical(a));
	printf("%d\n",duff_device(a));
}
*/	


/*#include <stdio.h>

int main (void)
{
	struct complex_struct{double x,y;} z;//struct+访问名+{函数体和成员}+访问变量名；
	double x=3.0;
	z.x=x;
	z.y=-4.0;
	if (z.y<0)
		printf("z=%f%fi\n",z.x,z.y);
	else
		printf("z=%f+%fi\n",z.x,z.y);
	return 0;
}
*/

/*#include <stdio.h>


struct complex_struct{double x,y;}z;

struct complex_struct add_copmlex(struct complex_struct z1,struct complex_struct z2) //此时前面的结构名等同于“int,char"等声明；
{
	z1.x=z1.x+z2.x;
	z1.y=z1.y+z2.y;
	return z1;
}

void main(void)
{
	struct complex_struct z={3.0,4.0};
	struct complex_struct z_new=add_copmlex(z,z);  //类比“int，char”等理解。
	printf("%f,%f\n",z_new.x,z_new.y);
}
*/


/*#include <math.h>
#include <stdio.h>

struct complex_struct{
	double x,y;
};

double real_part(struct complex_struct z)
{
	return z.x;
}

double img_part(struct complex_struct z)
{
	return z.y;
}

double magnitude (struct complex_struct z)
{
	return sqrt(z.x*z.x+z.y*z.y);
}

double angle (struct complex_struct z)
{
	return atan2(z.y,z.x);
}				
			

struct complex_struct make_from_real_img(double x,double y)
{
	struct complex_struct z;
	z.x=x;
	z.y=y;
	return z;
}

struct complex_struct make_from_mag_ang(double r,double A)
{
	struct complex_struct z;
	z.x=r*cos(A);
	z.y=r*sin(A);
	return z;
}

struct complex_struct add_complex(struct complex_struct z1,struct complex_struct z2)
{
	return make_from_real_img(real_part(z1)+real_part(z2),img_part(z1)+img_part(z2));
}

struct complex_struct sub_complex(struct complex_struct z1,struct complex_struct z2)
{
	return make_from_real_img(real_part(z1)-real_part(z2),img_part(z1)-img_part(z2));
}

struct complex_struct mul_complex(struct complex_struct z1,struct complex_struct z2)
{
	return make_from_mag_ang(magnitude(z1)*magnitude(z2),angle(z1)+angle(z2));
}

struct complex_struct div_complex(struct complex_struct z1,struct complex_struct z2)
{
	return make_from_mag_ang(magnitude(z1)/magnitude(z2),angle(z1)-angle(z2));
}				


int main(void)
{
	struct complex_struct z1={3,-4};
	struct complex_struct z2={1,2};

	if (magnitude(z1)*magnitude(z2)*sin(angle(z1)+angle(z2))<0){
		//printf("z1+z2=%f%fi\n",add_complex(z1,z2).x,add_complex(z1,z2).y);
		printf("z1*z2=%f%fi\n",mul_complex(z1,z2).x,mul_complex(z1,z2).y);
	}
	else{
		printf("z1+z2=%f+%fi\n",mul_complex(z1,z2).x,mul_complex(z1,z2).y);
	}
	return 0;
}
*/



/*#include <stdio.h>

struct rational{int x,y;};

int Euclid(int a, int b)
{
	if (a%b==0){
		return b;
	}
	else{
		int E=Euclid(b,a%b);
		return E;
	}
}

int LCM(int a,int b)
{
	int i=1;
	int num=a;
	do{
		num=a*(++i);
	}
	while (num%b!=0);
	return num;
}


struct rational make_rational(struct rational z)
{
	struct rational z_new;
	if (z.x>=0&&z.y>0){
		z_new.x=z.x/Euclid(z.x,z.y);
		z_new.y=z.y/Euclid(z.x,z.y);
		return z_new;
	}
	else if (z.x<0&&z.y>0){
		z_new.x=z.x/Euclid(-z.x,z.y);
		z_new.y=z.y/Euclid(-z.x,z.y);
		return z_new;
	}
	else if (z.x<0&&z.y<0){
		z_new.x=-z.x/Euclid(-z.x,-z.y);
		z_new.y=-z.y/Euclid(-z.x,-z.y);
		return z_new;
	}
	else {
		z_new.x=-z.x/Euclid(z.x,-z.y);
		z_new.y=-z.y/Euclid(z.x,-z.y);
		return z_new;
	}
}

struct rational add_rational(struct rational z1,struct rational z2)
{
	z1=make_rational(z1);
	z2=make_rational(z2);
	struct rational new;
	int y=LCM(z1.y,z2.y);
	int x=z1.x*y/z1.y+z2.x*y/z2.y;
	if (x>=0){
		new.x=x/Euclid(x,y);
		new.y=y/Euclid(x,y);
		return new;
	}
	else {
		new.x=x/Euclid(-x,y);
		new.y=y/Euclid(-x,y);
		return new;
	}
}



struct rational sub_rational(struct rational z1,struct rational z2)
{
	z1=make_rational(z1);
	z2=make_rational(z2);
	struct rational new;
	int y=LCM(z1.y,z2.y);
	int x=z1.x*y/z1.y-z2.x*y/z2.y;
	if (x>=0){
		new.x=x/Euclid(x,y);
		new.y=y/Euclid(x,y);
		return new;
	}
	else {
		new.x=x/Euclid(-x,y);
		new.y=y/Euclid(-x,y);
		return new;
	}
}




struct rational mul_rational(struct rational z1,struct rational z2)
{
	int x=z1.x*z2.x;
	int y=z1.y*z2.y;
	struct rational new={x,y};
	new=make_rational(new);
	return new;
}
	
	
struct rational div_rational(struct rational z1,struct rational z2)
{
	int x=z1.x*z2.y;
	int y=z1.y*z2.x;
	struct rational new={x,y};
	new=make_rational(new);
	return new;
}





struct rational z1={1,6};
struct rational z2={3,-8};


void main(void)
{
	printf("%d/%d add %d/%d=%d/%d\n",z1.x,z1.y,z2.x,z2.y,add_rational(z1,z2).x,add_rational(z1,z2).y);
	printf("%d/%d sub %d/%d=%d/%d\n",z1.x,z1.y,z2.x,z2.y,sub_rational(z1,z2).x,sub_rational(z1,z2).y);
	printf("%d/%d mul %d/%d=%d/%d\n",z1.x,z1.y,z2.x,z2.y,mul_rational(z1,z2).x,mul_rational(z1,z2).y);
	printf("%d/%d div %d/%d=%d/%d\n",z1.x,z1.y,z2.x,z2.y,div_rational(z1,z2).x,div_rational(z1,z2).y);
}
*/	



/*#include <stdio.h>
#include <math.h>

enum coordinate_type{RECTANGULAR,POLAR};
struct complex_struct{
	enum coordinate_type t;           //结构体的成员名和变量名不在同一命名空间中，但枚举的成员名却和变量名在同一命名空间中
	double a,b;
};

struct complex_struct make_from_real_img(double x, double y)
{
        struct complex_struct z;
        z.t = RECTANGULAR;
        z.a = x;
        z.b = y;
        return z;
}

struct complex_struct make_from_mag_ang(double r, double A)
{
        struct complex_struct z;
        z.t = POLAR;
        z.a = r;
        z.b = A;
        return z;
}


double real_part(struct complex_struct z)
{
	switch (z.t){
	case 0:
		return z.a;
		break;
	case 1:
		return z.a*cos(z.b);
		break;
	default:
		printf("wrong type,t=RECTANGULAR or POLAR;");
		return 0.0;
		break;
	}
}

double img_part(struct complex_struct z)
{
	switch (z.t){
	case 0:
		return z.b;
		break;
	case 1:
		return z.a*sin(z.b);
		break;
	default:
		printf("wrong type,t=RECTANGULAR or POLAR;");
		return 0.0;
		break;
	}
}

double magnitude (struct complex_struct z)
{
	switch (z.t){
	case 0:
		return sqrt(z.a*z.a+z.b*z.b);
		break;
	case 1:
		return z.a;
		break;
	default:
		printf("wrong type,t=RECTANGULAR or POLAR;");
		return 0.0;
		break;
	}
}

double angle (struct complex_struct z)
{
	switch (z.t){
	case 0:
		return atan2(z.b,z.a);
		break;
	case 1:
		return z.b;
		break;
	default:
		printf("wrong type,t=RECTANGULAR or POLAR;");
		return 0.0;
		break;
	}
}				


struct complex_struct z={5,3,4};

void main(void)
{
	printf("z's real part=%f\n",real_part(z));
	printf("z's imaginary part=%f\n",img_part(z));
	printf("z's magnitude=%f\n",magnitude(z));
	printf("z's angle=%f\n",angle(z));
}

*/




/*#include <stdio.h>

enum coordinate_type { RECTANGULAR = 1, POLAR };

int main(void)
{
        int RECTANGULAR;
        printf("%d %d\n", RECTANGULAR, POLAR);
        return 0;
}

*/

/*#include <stdio.h>

int main(void)
{
	int count[4]={3,2,};    //数组间不能相互赋值或初始化
	int i;
	for (i=0;i<4;i++){
		printf("count[%d]=%d\n",i,count[i]);
	}
	return 0;
}

*/


/*#include <stdio.h>

int a[5]={1,2,3,4,5};        //初始声明全局变量一定要排在前面，为后续函数提供解读；
int b[4]={4,6,7};

int n=sizeof(a)/sizeof(a[0]);   //长整形可直接定义为整形
int k=sizeof(b)/sizeof(b[0]);

int *array_change(int x[],int y[])    //此函数输出为指针
{ 
	int i;
	//printf("%d\n",n);	
	for (i=0;i<n;i++){
		x[i]=y[i];
	}
	return x;
}


void main(void)
{
	if (n==k){
		int *c=array_change(a,b);
		int i;
		for (i=0;i<n;i++){
			//printf("%d\n",n);
			printf("a[%d]=%d\n",i,c[i]);
		}
	}
	else{
		printf("error,int a[n] and int b[n] must have the same value n\n");
	}
}
	
*/		
		

/*#include <stdio.h>
#include <stdlib.h>
#define N 20   //标识符+定义


int a[N];

void gen_random(int upper_bound)
{
	int i;
	for (i=0;i<N;i++){
		a[i]=rand()%upper_bound;
	}
}

void print_random(void)
{
	int i;
	for (i=0;i<N;i++){
		printf("%d ",a[i]);
	}
	printf("\n");
}


int main(void)
{
	gen_random(100);  
	print_random();
	return 0;
}
*/


/*#include <stdio.h>
#define RECTANGULaR 100
#define POLAR 2

int main(void)
{
	//int RECTANGULaR;
	printf("%d %d\n",RECTANGULaR,POLAR);
	return 0;
}
*/


/*#include <stdio.h>
#include <stdlib.h>
#define N 100000

int a[N];

void gen_random(int upper_bound)
{
	int i;
	for (i=0;i<N;i++){
		a[i]=rand()%upper_bound;
	}
}


int howmany(int value)
{
	int count =0,i;
	for (i=0;i<N;i++){
		if (a[i]==value){
			++count;
		}
	}
	return count;
}


int main(void)
{
	int i;
	gen_random(10);
	printf("value\thowmany\n");
	for (i=0;i<10;i++){
		printf("%d\t%d\n",i,howmany(i));
	}
	return 0;
}
*/





/*#include <stdio.h>
#include <stdlib.h>
#define N 11
#define upper 20
#define lower 10
int a[N];

void main(void)
{
	int i;
	int b;
	for (i=0;i<N;i++){
		do{
			b=rand()%upper;
		}while(b<10);
		a[i]=b;
		printf("%d ",a[i]);
	}
	printf("\n");
}
*/


/*#include <stdio.h>
#include <stdlib.h>
#define N 100000

int a[N];

void gen_random(int upper_bound)
{
	int i;
	for (i=0;i<N;i++){
		a[i]=rand()%upper_bound;
	}
}


int howmany(int value)
{
	int count =0,i;
	for (i=0;i<N;i++){
		if (a[i]==value){
			++count;
		}
	}
	return count;
}



int main(void)
{
	int i;
	int histogram[10];
	gen_random(10);
	for (i=0;i<10;i++){
		histogram[i]=howmany(i);
		printf("%d\t%d\n",i,histogram[i]);
	}
	return 0;
}



int main(void)
{
	int n;
	int i;
	int histogram[10]={0};
	gen_random(10);
	for (n=0;n<N;n++){
		histogram[a[n]]++;
		//printf("%d\t%d\n",a[n],histogram[a[n]]);
	}
	for (i=0;i<10;i++){
		printf("%d\t%d\n",a[i],histogram[a[i]]);
	}
	printf("%ld",srand(time(NULL));
	return 0;
}
*/



/*#include <stdio.h>
#include <stdlib.h>
#define N 100
#define upper_bound 15
#define lower_bound 0

int a[N];

void gen_random(void)
{
	int i;
	int k=0;
	for (i=0;i<=N;i++){
		do{
			k=rand()%(upper_bound+1);
		}while(k<lower_bound);
		a[i]=k;
	}
}


int howmany(int value)
{
	int i;
	int count=0;
	for (i=0;i<=N;i++){
		if (a[i]==value){
			count++;
		}
	}
	return count;
}

int get_bound(void)
{
	int c=0;
	int j;
	for (j=lower_bound;j<=N;j++){
		if (c<howmany(j)){
			c=howmany(j);
		}
	}
	//printf("%d\n",c);
	return c;
}

int main(void)
{
	int i;
	int j;
	gen_random();
	for (i=lower_bound;i<=upper_bound;i++){
		printf("%d\t",i);
	}
	printf("\n");
	for (i=lower_bound;i<get_bound()+lower_bound;i++){
		for (j=lower_bound;j<=upper_bound;j++){
			if (i-lower_bound<howmany(j)){
				printf("*\t");
			}
			else{
				printf(" \t");
			}
		}
		printf("\n");
	}
	return 0;
}
*/	




/*#include <stdio.h>
#include <stdlib.h>
#define N 3

int a[N]={1,2,3};

int *changeArray(int a[])
{
	int k;
	int *c=(int*)malloc(N*sizeof(int));
	int i;
	for (i=0;i<N;i++){
		c[i]=a[i];
	}
	for (k=1;k<N;k++){
			c[k-1]=a[k];
			c[N-1]=a[0];
	}
	return c;
}

void full(int a[],int n)
{
	int i;
	int *e=(int*)malloc(N*sizeof(int));  
	int trans;
	for (i=0;i<N;i++){
		e[i]=a[i];
	}
	if (n==1){
		for (i=0;i<N;i++){
			printf("%d\t",a[i]);
		}
	}
	else{
		for (i=0;i<n;i++){
				trans=e[i];
				e[i]=e[0];
				e[0]=trans;
				full(changeArray(e),n-1);
				e[0]=e[i];
				e[i]=trans;
				printf("\n");
		}
	}
}
	



void main(void)
{
	full(a,N);
}
*/



/*#include <stdio.h>
#include <stdlib.h>
#define N 3
#define M 2


int a[N]={1,2,3};

int *get_random(void)
{
	int i;
	int t;
	int j;
	int *B=(int*)malloc(M*(sizeof(int)));
	for (i=0;i<M;i++){
		t=rand()%(N-1-0+1)+0;
		for (j=0;j<i;j++){
            		if (B[j]==t){
                		i--; 
                		break;
            		}
        	}
        	if (j==i){
            		B[i]=t;
    		}
	}
	for (i=0;i<M;i++){
		//printf("%d ",B[i]);
	}
	return B;
}


int *get_B(int b[])
{
	int i;
	int *H=(int*)malloc(M*(sizeof(int)));
	for (i=0;i<M;i++){
		H[i]=a[b[i]];
	}
	for (i=0;i<M;i++){
		//printf("%d ",H[i]);
	}
	return H;
}
	


int *changeArray(int a[])
{
	int k;
	int *c=(int*)malloc(M*sizeof(int));
	int i;
	for (i=0;i<M;i++){
		c[i]=a[i];
	}
	for (k=1;k<M;k++){
			c[k-1]=a[k];
			c[M-1]=a[0];
	}
	return c;
}

void full(int a[],int n)
{
	int i;
	int *e=(int*)malloc(M*sizeof(int));  
	int trans;
	for (i=0;i<M;i++){
		e[i]=a[i];
	}
	if (n==1){
		for (i=0;i<M;i++){
			printf("%d\t",a[i]);
		}
		printf("\n");
	}
	else{
		for (i=0;i<n;i++){
				trans=e[i];
				e[i]=e[0];
				e[0]=trans;
				full(changeArray(e),n-1);
				e[0]=e[i];
				e[i]=trans;
				printf("\n");
		}
	}
}
	



void main(void)
{
	full(get_B(get_random()),M);
}
*/



/*#include <stdio.h>

void main(void)
{
	char a[]="Hello, world.\n";
	printf("%s\n",a);
}
*/


/*#include <stdio.h>
//一维数组
struct complex_struct{double x,y;}a[4]={[3].x=8.0}; //由4个结构体元素组成的数组  对比int a[4];
struct {double x,y;int count[4];}s={.count[3]=9};  //包含数组成员的结构体； 注意在实例中具体声明元素需要加".";


void main(void)
{
	printf("%f\n",a[3].x);
	printf("%d\n",s.count[3]);
}

*/

//二维数组

//对比之前的switch语句，二维字符数组，通过下标访问字符串组成的数组可以代替一堆 case 分支判断；

//写代码最重要的是选择正确的数据结构来组织信息，设计控制流程和算法尚在其次，只要数据结构选择得正确，其他代码自然而然就变得容易理解和维护了。

/*#include <stdio.h>

void print_day(int day)
{
	char days[8][10]={"","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"}; //days[8][10]:八行十列，每一行为{}中的一个元素，每一列为“”中的元素（不够则由\0(NULL)来填补）
	if (day>=1 && day<=7){
		printf("%s\n",days[day]);
	}
	else{
		printf("Illegal day number!\n");
	}
}

void main(void)
{
	print_day(2);
}
*/
	

/*#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	char gesture[3][10]={"scissor","stone","cloth"};
	int man,computer,result,ret;

	srand(time(NULL));//以现在的系统时间作为随机数的种子来产生随机数,防止随机数每次重复.time函数来获得系统时间，它的返回值为从 00:00:00 GMT, January 1, 1970 到现在所持续的秒数.计算机并不能产生真正的随机数，而是已经编写好的一些无规则排列的数字存储在电脑里，把这些数字划分为若干相等的N份，并为每份加上一个编号用srand()函数获取这个编号，然后rand()就按顺序获取这些数字，当srand()的参数值固定的时候，rand()获得的数也是固定的，
	while (1){ //while true{}  无限循环
		computer=rand()%3;
		printf("\nIuput your gesture(0-scissor 1-stone 2-cloth):\n");
		ret=scanf("%d",&man);//等待用户输入一个整数并回车,保存在 man 这个整型变量里,scanf 函数返回1；如果在第一个参数中用 %s 读入一个字符串，则第二个参数应该是数组名，数组名前面不加&.
		if (ret!=1||man<0||man>2){
			printf("Invalid input!\n");
			return 1;
		}
		printf("You: %s\tComputer: %s\n",gesture[man],gesture[computer]);
		result=(man-computer+4)%3-1;
		if (result>0){
			printf("You win!\n");
		}
		else if (result==0){
			printf("Draw!\n");
		}
		else {
			printf("You lose!\n");
		}
	}
	return 0;
}
*/


/*#include <stdio.h>

int add_range(int low, int high)
{
	int i, sum;
	for (i= low;i<= high;i++){
		sum=sum+i;
	}
	return sum;
}


int main(void)
{
	int result[10000];
	result[0]=add_range(1,10);
	result[1]=add_range(1,100);
	//result[0]=add_range(1,10);
	printf("result[0]=%d\nresult[1]=%d\n",result[0],result[1]);
	return 0;
}
*/	
/*gdb:	gcc -g main.c -o main;
	start;
	list(l);   /l (函数名;) //l (行号)
	next(n);
	step(s);
	backtrace(bt);
	frame(f);  /f (栈帧编号;)
	info(i);   /i locals;	/i breakpoints;
	print(p);   /p (变量名;)
	finish;
	set var;    /set var (变量)= value;
*/
	

/*#include <stdio.h>

int main(void)
{
	int sum=0,i=0;
	char input[5];
	while (1){
		//sum=0;
		scanf("%s",input);
		for (i=0;input[i]!='\0';i++){  //非空白（非空格、Tab、换行）的字符串
			sum=sum*10+input[i]-'0';//自动在末尾添加 '\0' 
		}
		printf("input=%d\n",sum);
	}
	return 0;
}	
*/	
	
/*gdb:
	break(b) (行号;)	/b (函数名;)  	/b ... if...
	continue(c);	  //从当前位置开始连续运行;
	delete breakpoints (断点号;)
	display (变量名;)
	disable breakpoints (断点号;)s

	enable (断点号;)
	run(r);         //从头开始连续运行;
	undisplay (跟踪显示号;)
						
*/


/*#include <stdio.h>

int main(void)
{
	int i;
	char str[]="hello";
	char reverse_str[6]="\0";
	printf("%s\n",str);
	for (i=0;i<5;i++){
		reverse_str[4-i]=str[i];   //倒序存入；(注意最后一个为NULL）
	}
	printf("%s\n",reverse_str);
	return 0;
}
*/

	


/*

#include <stdio.h>


int sum=0,i;
char input[5];

int main(void)
{
	while (1){
		sum=0;
		scanf("%s",input);
		for (i=0;input[i]!='\0';i++){  //循环变量 i 就位于 input[8] 的位置
			sum=sum*10+input[i]-'0';
		}
		printf("input=%d\n",sum);
	}
	return 0;
}	

*/


/*
gdb:
	watch input[8];           

	i watchpoints;

	x/16bx input;                 //从某个位置(input)开始按系统读取顺序打印存储单元的内容，全部当成字节来看，而不区分哪个字节属于哪个变量。


*/


/*#include <stdio.h>


int sum=0,i;
char input[5];

int main(void)
{
	while (1){
		sum=0;
		scanf("%s",input);
		for (i=0;input[i]!='\0';i++){  //循环变量 i 就位于 input[8] 的位置
			if (input[i]<'0' || input[i]>'9'){    //ASCII码未在数字区域
				printf("Invalid input!\n");
				sum=-1;
				break;
			}
			sum=sum*10+input[i]-'0';
		}
		printf("input=%d\n",sum);
	}
	return 0;
}	
*/



/*#include <stdio.h>

int main(void)
{
	int man =0;
	scanf("%d",&man);  //除char 以外都要加&;
	return 0;
}

*/


/*#include <stdio.h>

int main(void)
{
        int sum = 0, i = 0;
        char input[5];

        scanf("%s", input);
        for (i = 0; input[i] != '\0'; i++) {
                if (input[i] < '0' || input[i] > '9') {
                        printf("Invalid input!\n");
                        sum = -1;
                        break;
                }
                sum = sum*10 + input[i] - '0';   //剪掉 ‘0’的ASCII码，原input 为char改为int;
        }
        printf("input=%d\n", sum);

        return 0;
}
*/


/*#include <stdio.h>
#define LEN 5

int a[LEN]={10,5,2,4,7};

void insertion_sort(void)     //插入排序（现在抓到一张7 <key>，把它和手里的牌从右到左依次比较，7比10小，应该再往左插，7比5大，好，就插这里)
{
	int i,j,key;
	for (j=1; j<LEN; j++){
		printf("%d,%d,%d,%d,%d\n",a[0],a[1],a[2],a[3],a[4]);
		key=a[j];
		i=j-1;
		while (i>=0 && a[i]>key){
			a[i+1]=a[i];
			i--;
		}
		a[i+1]=key;
	}
	printf("%d,%d,%d,%d,%d\n",a[0],a[1],a[2],a[3],a[4]);
}


int main (void)
{
	insertion_sort();
	return 0;
}
*/



/*#include <stdio.h>
#define N 7


int a[N]={10,5,2,4,7,1,};


int find_list(int a[],int n)           //选择排序（一次从数组 a[0..LEN-1] 中找出最小元素交换到 a[0] 的位置，第二次从数组 a[1..LEN-1] 中找出最小元素交换到 a[1] 的位置，依此类推。）  复杂度：n^2
{
	int i,count;
	int num=a[N-n];
	for (i=N-n;i<N;i++){
		if (a[i]<=num){
			num=a[i];
			count=i;
		}
	}
	return count;
}
		
			
	


void Selection_Sort(int a[])
{
	int i,LEN,num,c,j,d=-1;
	LEN=N;
	for (i=0; i<LEN; i++){
		printf("%d,",a[i]);
	}
	printf("\n");
	for (i=0; i<LEN; i++){
		c=find_list(a,LEN-i);
		//printf("%d\n",c);
		if (c==d){
			break;
		}
		else {
			num=a[i];
			a[i]=a[c];
			a[c]=num;
			d=c;
			for (j=0;j<LEN;j++){
				printf("%d,",a[j]);
			}
			printf("\n");
		}
	}
}


int main(void)
{
	Selection_Sort(a);
	return 0;
}
			
*/


/*#include <stdio.h>
#define LEN 8

int a[LEN]={5,2,4,7,1,3,2,6};

void merge(int start,int mid,int end)           //归并排序(	Divide: 把长度为n的输入序列分成两个长度为n/2的子序列；
								Conquer: 对这两个子序列分别采用归并排序；
								Combine: 每个子序列中所有元素比较大小进行排列，之后合并序列) 复杂度：nlg(n)
{
	int n1=mid-start+1;
	int n2=end-mid;
	int left[n1], right[n2];
	int i, j, k;
	for (i=0; i<n1; i++){
		left[i]=a[start+i];          //递归过程中，局部变量当中的a的指针已释放，全局变量a的值已变
	}
	for (j=0; j<n2; j++){
		right[j]=a[mid+1+j];
	}
	i=j=0;
	k=start;
	while (i<n1 && j<n2){                   //IF语句运行完毕后，接着运行下面的语句。而While中的执行语句运行完毕后，还要进行继续判断条件是否符合循环条件，根据判断的条件，返回执行语句或继续运行下面的程序。
		if (left[i]<right[j]){
			a[k++]=left[i++];
		}
		else {
			a[k++]=right[j++];   //满足条件后a[k]=right[k];k++;j++;
		}
	}
	while (i<n1){
		a[k++]=left[i++];
	}
	while (j<n2){
		a[k++]=right[j++];
	}
}


void sort(int start, int end)
{
	int mid;
	if (start<end){
		mid=(start+end)/2;
		printf("Sort (%d-%d,%d-%d) %d %d %d %d %d %d %d %d\n",
			start, mid, mid+1, end,
			a[0], a[1], a[2], a[3], a[4], a[5], a[6], a[7]);
		sort(start, mid);               
		sort(mid+1, end);
		merge(start, mid, end);
		printf("Merge (%d-%d,%d-%d) %d %d %d %d %d %d %d %d\n",
			start, mid, mid+1, end,
			a[0], a[1], a[2], a[3], a[4], a[5], a[6], a[7]);
		
	}
}

int main(void)
{
	sort(0,LEN-1);
	return 0;
}
*/	
			
				

/*#include <stdio.h>                
#define LEN 10

int a[LEN]={8,2,4,7,3,1,9,5,6,0};




int partition(int start, int end)             //快速排序（	选取一个元素;
        							在一个循环中移动a的数据，使得这个元素在中间（大小）；
        							分别对元素左边和右边的进行快速排序，直到单个元素为止）复杂度：nlg(n)
{
	int pivot,i;
	int mid=start;
	pivot=a[start];
	for (i=start+1; i<=end; i++){
		if (pivot>a[i]){
			mid++;
		}
	}

	int n1=mid-start;
	int n2=end-mid;
	int left[n1], right[n2];
	int j=0, k=0;
	
	for (i=start; i<=end; i++){
		if (a[i]<pivot){
			left[j]=a[i];
			j++;
		}
		else if (a[i]>pivot){
			right[k]=a[i];
			k++;
		}
	}
	
	j=k=0;
	for (i=start; i<mid; i++){
		a[i]=left[j];
		j++;
	}
	for (i=mid+1; i<=end; i++){
		a[i]=right[k];
		k++;
	}
	a[mid]=pivot;
	return mid;
}
	
	
	
void quicksort(int start, int end)
{
	int mid;
	if (end>start){
		mid=partition(start, end);
		quicksort(start, mid-1);
		quicksort(mid+1, end);
	}
}

int main(void)
{
	int j;
	quicksort(0,LEN-1);
	for (j=0;j<LEN;j++){
		printf("%d\t",a[j]);
	}
	printf("\n");
	return 0;
}

*/




/*#include <stdio.h>

char a[]="hello world";


int indexof(char letter)
{
	int i=0;
	while (a[i]!='\0'){
		if (a[i]==letter){
			return i;
		}
		i++;
	}
	return -1;
}

int main(void)
{
	printf("%d %d\n",indexof('o'),indexof('z'));
	return 0;
}
*/



/*#include <stdio.h>
#define LEN 8

int a[LEN]={8,2,4,7,3,9,5,6};


int find_least(int a[])
{        
	int i;
	int num=a[0];
	for (i=0;i<LEN;i++){
		if (a[i]<num){
			num=a[i];
		}
	}
	return num;
}

int main(void)
{
	printf("%d\n",find_least(a));
	return 0;
}
*/			
		

/*#include <stdio.h>
#define LEN 6

int a[LEN]={8,2,7,9,5,6};


int find_Second(int a[])
{        
	int i;
	int num=a[0];
	int second=a[1];
	for (i=0;i<LEN;i++){
		if (a[i]<num && a[i]<=second){
			second=num;
			num=a[i];
		}
		else if (a[i]>num && a[i]<second){
			second=a[i];
		}
	}
	return second;
}

int main(void)
{
	printf("%d\n",find_Second(a));
	return 0;
}
*/





/*#include <stdio.h>                
#define LEN 10
#define K 10

int a[LEN]={8,2,4,7,3,1,9,5,6,0};




int partition(int start, int end)             
{
	int pivot,i;
	int mid=start;
	pivot=a[start];
	for (i=start+1; i<=end; i++){
		if (pivot>a[i]){
			mid++;
		}
	}

	int n1=mid-start;
	int n2=end-mid;
	int left[n1], right[n2];
	int j=0, k=0;
	
	for (i=start; i<=end; i++){
		if (a[i]<pivot){
			left[j]=a[i];
			j++;
		}
		else if (a[i]>pivot){
			right[k]=a[i];
			k++;
		}
	}
	
	j=k=0;
	for (i=start; i<mid; i++){
		a[i]=left[j];
		j++;
	}
	for (i=mid+1; i<=end; i++){
		a[i]=right[k];
		k++;
	}
	a[mid]=pivot;
	return mid;
}



int order_statistic(int start, int end, int k)
{
	int i=partition(start,end);
	if (k==i){
		return i;
	}
	else if (k>i){
		order_statistic(i+1,end,k);
	}
	else {
		order_statistic(start,i-1,k);
	}
}


int main(void)
{
	printf("%d\n",order_statistic(0,LEN-1,K));
	return 0;
}
	
*/	
	


/*#include <stdio.h>
#define LEN 8

int a[LEN]={1,2,2,2,5,6,8,9};


int binarysearch(int number)
{
	int mid, start=0, end=LEN-1;
	while (start<=end){
		mid=(start+end)/2;
		if (a[mid]<number){
			start=mid+1;
		}
		else if (a[mid]>number){
			end=mid-1;
		}
		else {
			return mid;
		}
	}
	return -1;
}



int main(void)
{
	printf("%d\n",binarysearch(8));
	return 0;
}
*/




/*#include <stdio.h>
#include <assert.h>              
#define LEN 8


int a[LEN]={1,2,2,2,5,6,8,9};


int is_sorted(void)
{
	int i;
	for (i=1; i<LEN; i++){
		if (a[i-1]>a[i]){
			return 0;
		}
	}
	return 1;
}


int mustbe(int start, int end, int number)
{
	int i;
	for (i=0; i<start; i++){
		if (a[i]==number){
			return 0;
		}
	}
	for (i=end+1; i<LEN; i++){
		if (a[i]==number){
			return 0;
		}
	}
	return 1;
}


int contains(int n)
{
	int i;
	for (i=0; i<LEN; i++){
		if(a[i]==n){
			return 1;
		}
	}
	return 0;
}


int binarysearch(int number)
{
	int mid, start=0, end=LEN-1;
	assert(is_sorted());                            //断言（利于维护）
	while (start<=end){
		assert(mustbe(start,end,number));
		mid=(start+end)/2;
		if (a[mid]<number){
			start=mid+1;
		}
		else if (a[mid]>number){
			end=mid-1;
		}
		else {
			assert(mid>=start && mid<=end && a[mid]==number);       //assert();接受布尔型，1则继续
			return mid;
		}
	}
	assert(!contains(number));  //!1=0;!0=1;
	return -1;
}


int main(void)
{
	printf("%d\n",binarysearch(5));
	return 0;
}
*/


/*#include <stdio.h>
#define LEN 8

int a[LEN]={1,2,2,2,5,6,8,9};


int binarysearch(int number)
{
	int mid, start=0, end=LEN-1;
	while (start<=end){
		mid=(start+end)/2;
		if (a[mid]<number){
			start=mid+1;
		}
		else if (a[mid]>number){
			end=mid-1;
		}
		else {
			while (a[mid-1]==a[mid]){
					mid--;
			}
			return mid;
		}
	}
	return -1;
}


int main(void)
{
	printf("%d\n",binarysearch(2));
	return 0;
}
*/




/*#include <stdio.h>
#define N 20
double y=N;
double head=0.0;
double tail=N;

double mysqrt(double y)
{
	double mid;
	mid=(head+tail)/2;
	double sqrt=mid*mid;
	double acry=0.01;
	if (sqrt-y > acry){
		tail=mid;
		mysqrt(y);
	}
	else if (sqrt-y < -acry){
		head=mid;
		mysqrt(y);
	}
	else {
		return mid;
	}
}


int main(void)
{
	printf("%f's sqrt=%f\n",y,mysqrt(y));
	return 0;
}
*/



/*#include <stdio.h>
#define N 3
#define X 2.0
	


double mypow(double x, int n)
{
	int count=1;
	double product=X;
	double last;
	while (count<n){
		last=product;
		product=product*product;
		count=count*2;
	}
	if (count==n){
		return product;
	}
	else if (count>n){
		product=last;
		printf("%f\n",product);
		printf("%d\n",count);
		product=product*mypow(x,n-count/2);    //嵌套内的局部变量为另一指针，与原函数地址不同。
		return product;
	}
}

int main(void)
{
	printf("%f'pow=%f\n",X,mypow(X,N));
	return 0;
}
*/


/*#include <stdio.h>

char stack[512];
int top=0;

void push(char c)
{
	stack[top++]=c;
}

char pop(void)
{
	return stack[--top];
}

int is_empty(void)
{
	return top==0;
}

int main(void)
{
	push('a');
	push('b');
	push('c');

	while (! is_empty()){
		putchar(pop());    //输出一个字符
	}
	putchar('\n');
	return 0;
}
*/



/*#include <stdio.h>
#define LEN 3


char buf[LEN]={'a','b','c'};


void print_backward(int pos)
{
	if (pos == LEN){
		return ;
	}
	print_backward(pos+1);
	putchar(buf[pos]);
}



int main(void)
{
	print_backward(0);
	putchar('\n');
	return 0;
}
*/




/*#include <stdio.h>
#define MAX_ROW 5
#define MAX_COL 5

struct point {int row,col;}stack[512];  //一维数组， 每一个元素含有两个成员(row,col);
int top=0;


void push(struct point p)
{
	stack[top++]=p;
}


struct point pop(void)
{
	return stack[--top];
}


int is_empty(void)
{
	return top==0;
}

int maze[MAX_ROW][MAX_COL]={
	0,1,0,0,0,
	0,1,0,1,0,
	0,0,0,0,0,
	0,1,1,1,0,
	0,0,0,1,0,
};


void print_maze(void)
{
	int i,j;
	for ( i=0; i<MAX_ROW; i++){
		for ( j=0; j<MAX_COL; j++){
			printf("%d ",maze[i][j]);
		}
		putchar('\n');
	}
	printf("*********\n");
}


struct point predecessor[MAX_ROW][MAX_COL]={
	{{-1,-1}, {-1,-1}, {-1,-1}, {-1,-1}, {-1,-1}},
	{{-1,-1}, {-1,-1}, {-1,-1}, {-1,-1}, {-1,-1}},
	{{-1,-1}, {-1,-1}, {-1,-1}, {-1,-1}, {-1,-1}},
	{{-1,-1}, {-1,-1}, {-1,-1}, {-1,-1}, {-1,-1}},
	{{-1,-1}, {-1,-1}, {-1,-1}, {-1,-1}, {-1,-1}},
};


void visit(int row,int col,struct point pre)
{
	struct point visit_point={row,col};
	maze[row][col]=2;
	predecessor[row][col]=pre;
	push(visit_point);
}



int main(void)
{
	struct point p={0,0};
	maze[p.row][p.col]=2;
	push(p);
	while (!is_empty()){
		p=pop();
		if (p.row==MAX_ROW-1 && p.col==MAX_COL-1){  //goal
			break;
		}
		if (p.col+1<MAX_COL && maze[p.row][p.col+1]==0){  //right
			visit(p.row, p.col+1, p);      //1.在此点路径地图maze上作标记(2)；
							// 2.在此点坐标地图predecessor上留下上一次的坐标；
						 	 //3.压栈，将此点(visit_point)作为下一个p;
		}
		if (p.row+1<MAX_ROW && maze[p.row+1][p.col]==0){  //down
			visit(p.row+1, p.col, p);
		}
		if (p.col-1>=0 && maze[p.row][p.col-1]==0){	//left
			visit(p.row ,p.col-1, p);
		}
		if (p.row-1>=0 && maze[p.row-1][p.col]==0){	//up
			visit(p.row-1, p.col, p);
		}
		print_maze();  //打印当前路径
	}
	if (p.row==MAX_ROW-1 && p.col==MAX_COL-1){
		printf("(%d, %d)\n", p.row, p.col);
		while (predecessor[p.row][p.col].row != -1){  //如果当前坐标有过记录，则打印此点记录(该记录为上一个点坐标）
			p=predecessor[p.row][p.col];
			printf("(%d, %d)\n", p.row, p.col);
		}
	}
	else{
		printf("No path!\n");
	}
	return 0;
}
*/




/*#include <stdio.h>
#define MAX_ROW 5
#define MAX_COL 5

struct point {int row,col;}stack[512];  //一维数组， 每一个元素含有两个成员(row,col);
int top=0;


void push(struct point p)
{
	stack[top++]=p;
}


struct point pop(void)
{
	return stack[--top];
}


int is_empty(void)
{
	return top==0;
}

int maze[MAX_ROW][MAX_COL]={
	0,1,0,0,0,
	0,1,0,1,0,
	0,0,0,0,0,
	0,1,1,1,0,
	0,0,0,1,0,
};


void print_maze(void)
{
	int i,j;
	for ( i=0; i<MAX_ROW; i++){
		for ( j=0; j<MAX_COL; j++){
			printf("%d ",maze[i][j]);
		}
		putchar('\n');
	}
	printf("*********\n");
}


struct point predecessor[MAX_ROW][MAX_COL]={
	{{-1,-1}, {-1,-1}, {-1,-1}, {-1,-1}, {-1,-1}},
	{{-1,-1}, {-1,-1}, {-1,-1}, {-1,-1}, {-1,-1}},
	{{-1,-1}, {-1,-1}, {-1,-1}, {-1,-1}, {-1,-1}},
	{{-1,-1}, {-1,-1}, {-1,-1}, {-1,-1}, {-1,-1}},
	{{-1,-1}, {-1,-1}, {-1,-1}, {-1,-1}, {-1,-1}},
};


void visit(int row,int col,struct point pre)
{
	struct point visit_point={row,col};
	maze[row][col]=2;
	predecessor[row][col]=pre;
	push(visit_point);
}





void order_print(struct point p)
{	
	if (predecessor[p.row][p.col].row != -1){
		p=predecessor[p.row][p.col];
		order_print(p);
		printf("(%d, %d)\n", p.row, p.col);
	}
}
			
		
	
int main(void)
{
	struct point p={0,0};
	maze[p.row][p.col]=2;
	push(p);
	while (!is_empty()){
		p=pop();
		if (p.row==MAX_ROW-1 && p.col==MAX_COL-1){  //goal
			break;
		}
		if (p.col+1<MAX_COL && maze[p.row][p.col+1]==0){  //right
			visit(p.row, p.col+1, p);      
		}
		if (p.row+1<MAX_ROW && maze[p.row+1][p.col]==0){  //down
			visit(p.row+1, p.col, p);
		}
		if (p.col-1>=0 && maze[p.row][p.col-1]==0){	//left
			visit(p.row ,p.col-1, p);
		}
		if (p.row-1>=0 && maze[p.row-1][p.col]==0){	//up
			visit(p.row-1, p.col, p);
		}
		print_maze();  //打印当前路径
	}
	if (p.row==MAX_ROW-1 && p.col==MAX_COL-1){
		order_print(p);
		printf("(%d, %d)\n", p.row, p.col);	
	}
	else{
		printf("No path!\n");
	}
	return 0;
}
*/


	
/*#include <stdio.h>
#define MAX_ROW 5
#define MAX_COL 5

struct point {int row,col;}stack[512];  //一维数组， 每一个元素含有两个成员(row,col);
int top=0;


void push(struct point p)
{
	stack[top++]=p;
}


struct point pop(void)
{
	return stack[--top];
}


int is_empty(void)
{
	return top==0;
}

int maze[MAX_ROW][MAX_COL]={
	0,1,0,0,0,
	0,1,0,1,0,
	0,0,0,0,0,
	0,1,1,1,0,
	0,0,0,1,0,
};


void print_maze(void)
{
	int i,j;
	for ( i=0; i<MAX_ROW; i++){
		for ( j=0; j<MAX_COL; j++){
			printf("%d ",maze[i][j]);
		}
		putchar('\n');
	}
	printf("*********\n");
}


struct point predecessor[MAX_ROW*MAX_COL]={
	{-1,-1}, {-1,-1}, {-1,-1}, {-1,-1}, {-1,-1},
	{-1,-1}, {-1,-1}, {-1,-1}, {-1,-1}, {-1,-1},
	{-1,-1}, {-1,-1}, {-1,-1}, {-1,-1}, {-1,-1},
	{-1,-1}, {-1,-1}, {-1,-1}, {-1,-1}, {-1,-1},
	{-1,-1}, {-1,-1}, {-1,-1}, {-1,-1}, {-1,-1}
};


void visit(int row,int col,struct point pre)
{
	struct point visit_point={row,col};
	maze[row][col]=2;
	predecessor[row*5+col]=pre;
	push(visit_point);
}



int main(void)
{
	struct point p={0,0};
	maze[p.row][p.col]=2;
	push(p);
	while (!is_empty()){
		p=pop();
		if (p.row==MAX_ROW-1 && p.col==MAX_COL-1){  //goal
			break;
		}
		if (p.col+1<MAX_COL && maze[p.row][p.col+1]==0){  //right
			visit(p.row, p.col+1, p);      //1.在此点路径地图maze上作标记(2)；
							// 2.在此点坐标地图predecessor上留下上一次的坐标；
						 	 //3.压栈，将此点(visit_point)作为下一个p;
		}
		if (p.row+1<MAX_ROW && maze[p.row+1][p.col]==0){  //down
			visit(p.row+1, p.col, p);
		}
		if (p.col-1>=0 && maze[p.row][p.col-1]==0){	//left
			visit(p.row ,p.col-1, p);
		}
		if (p.row-1>=0 && maze[p.row-1][p.col]==0){	//up
			visit(p.row-1, p.col, p);
		}
		print_maze();  //打印当前路径
	}
	if (p.row==MAX_ROW-1 && p.col==MAX_COL-1){
		printf("(%d, %d)\n", p.row, p.col);
		while (predecessor[p.row*5+p.col].row != -1){  //如果当前坐标有过记录，则打印此点记录(该记录为上一个点坐标）
			p=predecessor[p.row*5+p.col];
			printf("(%d, %d)\n", p.row, p.col);
		}
	}
	else{
		printf("No path!\n");
	}
	return 0;
}
*/
	

/*#include <stdio.h>
#define MAX_ROW 5
#define MAX_COL 5

struct point {int row,col;}stack[512];  //一维数组， 每一个元素含有两个成员(row,col);

int maze[MAX_ROW][MAX_COL]={
	0,1,0,1,0,
	0,1,0,1,0,
	0,0,0,0,0,
	0,1,1,1,0,
	0,0,0,1,0,
};


void print_maze(void)
{
	int i,j;
	for ( i=0; i<MAX_ROW; i++){
		for ( j=0; j<MAX_COL; j++){
			printf("%d ",maze[i][j]);
		}
		putchar('\n');
	}
	printf("*********\n");
}



void visit(int row,int col)
{
	struct point visit_point={row,col};
	maze[row][col]=2;
}


void move(struct point p)
{
	if (p.row+1<MAX_ROW && maze[p.row+1][p.col]==0){  //down
		visit(p.row+1, p.col);
		p.row=p.row+1;
		move(p);
		printf("(%d, %d)\n", p.row, p.col);
	}
	if (p.col+1<MAX_COL && maze[p.row][p.col+1]==0){  //right
		visit(p.row, p.col+1);
		p.col=p.col+1;
		move(p);
		printf("(%d, %d)\n", p.row, p.col);
	}
	if (p.col-1>=0 && maze[p.row][p.col-1]==0){	//left
		visit(p.row ,p.col-1);
		p.col=p.col-1;
		move(p);
		printf("(%d, %d)\n", p.row, p.col);
	}
	if (p.row-1>=0 && maze[p.row-1][p.col]==0){	//up
		visit(p.row-1, p.col);
		p.row=p.row-1;
		move(p);
		printf("(%d, %d)\n", p.row, p.col);
	}
	if (p.row==MAX_ROW-1 && p.col==MAX_COL-1){  //goal
		printf("(%d, %d)\n", p.row, p.col);
	}
}
	

int main(void)
{
	struct point p={0,0};
	maze[p.row][p.col]=2;
	move(p);
	return 0;
}
*/


/*#include <stdio.h>

#define MAX_ROW 5
#define MAX_COL 5


struct point {int row,col,predecessor;}queue[512];

int head = 0, tail = 0;

void enqueue(struct point p)
{
	queue[tail++] = p;
}

struct point dequeue(void)
{
	return queue[head++];  
}

int is_empty(void)
{
	return head == tail;
}

int maze[MAX_ROW][MAX_COL]={
	0,1,0,0,0,
	0,1,0,1,0,
	0,0,0,0,0,
	0,1,1,1,0,
	0,0,0,1,0,
};


void print_maze(void)
{
	int i,j;
	for (i=0; i<MAX_ROW; i++){
		for (j = 0; j < MAX_COL; j++)
			printf("%d ", maze[i][j]);
		putchar('\n');
	}
	printf("*********\n");
}


void visit(int row, int col)
{
	struct point visit_point = {row,col,head-1};
	maze[row][col]=2;
	enqueue(visit_point);   //预测点入队，记录前趋(head-1)
}



int main(void)
{
	struct point p = {0,0,-1};
	maze[p.row][p.col] = 2;
	enqueue(p);
	while (!is_empty()){
		p = dequeue();  //出队前循环最先预测点，作为当前点(按入队顺序出队）
		if (p.row==MAX_ROW-1 && p.col==MAX_COL-1) 		//goal
			break;
		if (p.col+1<MAX_COL && maze[p.row][p.col+1]==0)		//right
			visit(p.row, p.col+1);
		if (p.row+1<MAX_ROW && maze[p.row+1][p.col]==0)		//down
			visit(p.row+1, p.col);
		if (p.col-1>=0 && maze[p.row][p.col-1]==0)		//left
			visit(p.row, p.col-1);
		if (p.row-1>=0 && maze[p.row-1][p.col]==0)		//up
			visit(p.row-1, p.col);
		print_maze();
	}
	if (p.row == MAX_ROW - 1 && p.col == MAX_COL - 1) {
		printf("(%d, %d)\n", p.row, p.col);
		while (p.predecessor != -1) {
			p = queue[p.predecessor];
			printf("(%d, %d)\n", p.row, p.col);
		}
	} else
		printf("No path!\n");

	return 0;
} 
*/


/*#include <stdio.h>

#define MAX_ROW 5
#define MAX_COL 5


struct point {int row,col,predecessor;}queue[5];

int head = 0, tail = 0;

void enqueue(struct point p)
{
	queue[tail++] = p;
}

struct point dequeue(void)
{
	return queue[head++];  
}

int is_empty(void)
{
	return head == tail;
}

int maze[MAX_ROW][MAX_COL]={
	0,1,0,0,0,
	0,1,0,1,0,
	0,0,0,0,0,
	0,1,1,1,0,
	0,0,0,1,0,
};


void print_maze(void)
{
	int i,j;
	for (i=0; i<MAX_ROW; i++){
		for (j = 0; j < MAX_COL; j++)
			printf("%d ", maze[i][j]);
		putchar('\n');
	}
	printf("*********\n");
}


void visit(int row, int col)
{
	struct point visit_point = {row,col,head-1};
	maze[row][col]=2;
	enqueue(visit_point);   //预测点入队，记录前趋(head-1)
}



int main(void)
{
	struct point p = {0,0,-1};
	maze[p.row][p.col] = 2;
	enqueue(p);
	while (!is_empty()){
		p = dequeue();  //出队前循环最先预测点，作为当前点(按入队顺序出队）
		if (p.row==MAX_ROW-1 && p.col==MAX_COL-1) 		//goal
			break;
		if (p.col+1<MAX_COL && maze[p.row][p.col+1]==0)		//right
			visit(p.row, p.col+1);
		if (p.row+1<MAX_ROW && maze[p.row+1][p.col]==0)		//down
			visit(p.row+1, p.col);
		if (p.col-1>=0 && maze[p.row][p.col-1]==0)		//left
			visit(p.row, p.col-1);
		if (p.row-1>=0 && maze[p.row-1][p.col]==0)		//up
			visit(p.row-1, p.col);
		print_maze();
	}
	if (p.row == MAX_ROW - 1 && p.col == MAX_COL - 1) {
		printf("(%d, %d)\n", p.row, p.col);
		while (p.predecessor != -1) {
			p = queue[p.predecessor];
			printf("(%d, %d)\n", p.row, p.col);
		}
	} else
		printf("No path!\n");

	return 0;
} 
*/


/*#include <stdio.h>

void main(void)
{
	int i = 0xcffffff3;
	printf("%x\n", 0xcffffff3>>2);   //未声明变量类型，右移不带最高符号位
	printf("%x\n", i>>2);       	//int 类型；带符号位(且原符号位不变）
}
*/




/*#include <stdio.h>


void main(void)
{
	unsigned int a,b,mask=0x000ff00;
	unsigned int c,d,e,f;
	a=0x12345678;
	b=(a&mask)>>8;		//&和运算，左右同为1时取1，否则为0；
				//每右移4位，a16进制数值上右移1位；
	c=(a>>8) & ~(~0u <<8);  //~ 否运算，1变0，0变1；
	d=a & ~mask;
	e=a | mask;		//| 或运算，左右全为0才为0，否则为1；
	f=a^mask;		// ^异或运算，左右不同则为1，相同为0；

	printf("%x\n",mask);
	printf("%x\n",a);
	printf("%x\n",b);
	printf("%x\n",c);
	printf("%x\n",d);
	printf("%x\n",e);
	printf("%x\n",f);

	a=a^b;       //利用位运算交换两个数的值，而不引用第三个中间变量；
	b=b^a;
	a=a^b;
	
	printf("%x\n",a);
	printf("%x\n",b);
}
*/




/*#include <stdio.h>

unsigned int a=0x5D6A54;

int countbit(unsigned int x)
{
	int a=x;
	int count=0;
	if (a==0){
		return 0;
	}
	else{
		while (a/2 != 0){
			if (a%2 == 1){
				count++;
			}
			a=a/2;
		}
		count++;
	}
	return count;
}
			
int main(void)
{
	printf("%d\n",countbit(a));
	return 0;
}
*/


/*#include <stdio.h>

unsigned int a=0x0f0;
unsigned int b=0x00f;

unsigned int multiply(unsigned int x, unsigned int y)
{
	int i;
	unsigned int mask=0x1;
	unsigned int num=0x0;
	for (i=0; i<32; i++){
		if ((y>>i&mask) ==1){
			num += (x<<i);
		}
	}
	return num;
}


int main(void)
{
	unsigned int s;
	s=multiply(a,b);
	printf("%x\n",s);
	return 0;
}
*/		

/*#include <stdio.h>
#define C 36	

unsigned int a=0xdeadbeef;

unsigned int rotate_right(unsigned int x,int c)
{
	int move=c%8;
	unsigned int num,head,tail;
	head=x<<(4*(8-move));
	tail=x>>(4*move);
	num=head+tail;
	return num;
}

int main(void)
{
	unsigned int s;
	s=rotate_right(a,C);
	printf("%x\n",s);
}
*/	
	
/*#include <stdio.h>

int main(void)
{
	int a[12];
	printf("%ld\n",sizeof a/sizeof(int));  //sizeof a/sizeof a[0]  +类型需打括号
	char array_t[11]={"hello world"};
	printf("%s\n",array_t);
	typedef char array_t2[11];
	array_t2 b={"hello world"};  //多重类型定义会引发定义错误
	printf("%s\n",b);
	int c=0;
	c=(++c)+(++c)+(++c)+(++c);
	printf("%d\n",c);
	int d=0;
	d=(d++)+(d++)+(d++)+(d++);
	printf("%d\n",d);
	return 0;
}		
*/

/*#include <stdio.h>

int main(void)
{
	int i=0;
	unsigned int sum=0;
	for (; i<16; i++){
		sum=sum+(1u<<i);
	}
	printf("%x\n",sum);
	return 0;
}
*/

/*int bar(int c, int d)
{
	int e = c + d;
	return e;
}

int foo(int a, int b)
{
	return bar(a,b);
}

int main(void)
{
	foo(2,3);
	return 0;
}
*/




/*#include <stdio.h>

int foo();	//汇编时，无地址
int bar();

int main(void)
{
	printf("%d\n",foo(2,3,4));	//汇编时，读取前两位数作为函数变量；多出的后一位记录到edx,根据记录显示，后面edx被重置。
	return 0;
}

int foo(int a, int b)
{
	return bar(a);		//汇编时，少一位，由esi来代替
}

int bar(int c, int d)
{
	int e= c + d;
	return e;
}
*/



/*#include <stdio.h>

int main(void)
{
	void foo(double); 	//汇编时，无地址
	char c = 60;
	foo(c);
	return 0;
}

void foo(double d)
{
	printf("%f\n",d);
}
*/

/*#include <stdio.h>

const int A = 10; 	//只读，在定义时必须初始化，一旦定义之后就不能再改写了
int a = 20;
static int b = 30;	//静态，表示这个函数名符号是LOCAL的,用它修饰的文件作用域的变量或函数具有Internal Linkage(内部链接)；在程序开始执行时分配和初始化一次，此后便一直存在直到程序结束。这种变量通常位于.rodata，.data或.bss段
int c;

int main(void)
{
	static int a = 40;
	char b[] = "Hello world";	 //链接属性为无链接并且没有被static修饰的变量,进入块作用域时在栈上或寄存器中分配，在退出块作用域时释放，下同
	register int c = 50;	//指示编译器尽可能分配一个寄存器来存储这个变量
	
	//A=20;
	printf("Hello world %d\n",c);  
	
	return 0;
}
*/



/*#include <stdio.h>

int main(int argc, char** argv)
{
	struct {
		char a;   	//1 byte  
		short b;	//2 byte
		int c;		//4 byte
		char d;		
	}s;
	s.a=1;
	s.b=2;
	s.c=3;
	s.d=4;
	printf("%lu\n",sizeof(s)); 	//lu长无符号数，sizeof计算总字节数，其值是size_t类型的，是某种无符号整型

	return 0;
}
*/



/*#include <stdio.h>


typedef struct {
		unsigned int one:1;	//后面的数字是几就表示它占多少个bit(位)
		unsigned int two:3;
		unsigned int three:10;
		unsigned int four:5;
		unsigned int :2;
		unsigned int five:8;
		unsigned int six:8;
		//unsigned int seven:30;
}demo_type;

int main(void)
{
	demo_type s={1,5,513,17,129,0x81};
	//demo_type s={1,5,513,17,129,0x81,1};
	printf("sizeof demo_type = %lu\n",sizeof(demo_type));
	printf("values: s=%u,%u,%u,%u,%u,%u\n",s.one, s.two, s.three, s.four, s.five, s.six);
	
	return 0;
}
*/
		
		
/*#include <stdio.h>

typedef union{                                       //共用体，几种不同数据类型的变量存放在同一块内存里，结构与结构体(struct)类似，节省空间
	struct{
		unsigned int one:1;
		unsigned int two:3;
		unsigned int three:10;
		unsigned int four:5;
		unsigned int :2;
		unsigned int five:8;
		unsigned int six:8;
	}bitfield;
	unsigned char byte[8];		//按最长的那个变量所需要的位数来开辟内存
}demo_type;
	
int main(void)		
{
	demo_type u = {{1,5,513,17,129,0x81}};
	printf("sizeof demo_type = %lu\n",sizeof(demo_type));
	printf("values: u=%u,%u,%u,%u,%u,%u\n",
		u.bitfield.one, u.bitfield.two, u.bitfield.three,
		u.bitfield.four, u.bitfield.five, u.bitfield.six);
	printf("hex dump of u:%x %x %x %x %x %x %x %x \n",
		u.byte[0],u.byte[1],u.byte[2],u.byte[3],
		u.byte[4],u.byte[5],u.byte[6],u.byte[7]);
	
	return 0;
}
*/


/*#include <stdio.h>

union{int number; char s;}test;

_Bool testBigEndin()
{
	test.number = 0x0112;		//四个字节保存该数
	//test.number = 0x1201;
	return (test.s == 0x12);	//操作系统在访问内存数据时是从低地址向高地址的顺序进行的，char是一个byte，只会取第一个低地址字节
}

int main(void)
{
	if (testBigEndin()){
		printf("小端序\n");		//低字节(权重低)存储于低位(低地址)
		printf("%d\n",test.s);
	}
	else{
		printf("大端序\n");	
		printf("%d\n",test.s);
	}
	
	return 0;
}
*/




















