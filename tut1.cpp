//LEVEL - 1:
//practice question on operators!!
//problem - 1
//LENGTH AND BREADTH OF RECTANGLE ARE 5 AND 7 RESPECTIVELY.WRITE A PROGRAM TO CALCULATE THE AREA AND PERIMETER OF RECTANGLE.
//CODE -

/*#include<iostream>
using namespace std;
int main()
{
	int area,perimeter;
	int length=5;
	int breadth=7;
	area=length*breadth;
	cout<<"The area of rectangle is: "<<area<<endl; 
	perimeter=2*(length+breadth);
	cout<<"The perimeter of rectangle is: "<<perimeter<<endl;
	return 0;
}
*/

//problem - 2
//WRITE A PROGRAM TO INPUT THE VALUE OF THE RADIUS OF A CIRCLE FROM KEYBOARD AND THEN CALCULATE ITS PERIMETER AND AREA.

/*#include<iostream>
using namespace std;
int main()
{
	double r,area,perimeter;
	cout<<"Enter the value of radius of a circle: "<<endl;
	cin>>r;
	area=3.14*r*r;
	cout<<"The area of circle is: "<<area<<endl;
	perimeter=2*3.14*r;
	cout<<"The perimeter of circle is: "<<perimeter<<endl;
	return 0;
	
}
*/
 
//problem - 3
//WRITE A PROGRAM TO ENTER A 4 DIGIT NUMBER FROM THE KEYBOARD.ADD 8 TO THE NUMBER AND THEN DIVIDE IT BY 3.NOW THE MODULUS OF THAT NUMBER IS TAKEN WITH 5 AND THEN MULTIPLY THE RESULTANT VALUE BY 5.DISPLAY THE FINAL RESULT.

/*#include<iostream>
using namespace std;
int main()
{
	int num;
	cout<<"Enter the four digit number: "<<endl;
	cin>>num;
	cout<<(((num+8)/3)%5)*5<<endl;
	//cout<<"modulas of number is: "<<num%5<<endl;
	//cout<<"The resultant value is: "<<num*5<<endl;
}
*/

// second way -
/*
#include<iostream>
using namespace std;
int main()
{
	//int num;
	int num=5252;
	cout<<(((num/=8)/3)%5)*5;
}
*/

//problem - 4

//ENTER TWO NUMBERS FROM KEYBOARD .WRITE A PROGRAM TO CHECK IF THE TWO NUMBERS ARE EQUAL.
/*
#include<iostream>
using namespace std;
int main()
{
	int i,j;
	cout<<"Enter two numbers: "<<endl;
	cin>>i;
	cin>>j;
	cout<<(i==j)<<endl;
	return 0;
}
*/

//problem - 5

//WRITE A PROGRAM TO ENTER THE VALUES OF TWO VARIABLES 'A' AND 'B' FROM KEYBOARD AND THEN CHECK IF BOTH THE CONDITIONS 'A<50' AND 'A<B' ARE TRUE.
/*
#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cin>>a;
	cin>>b;
	cout<<(a<50 && a<b);
	return 0;
}

problem 6 -

//WRITE A PROGRAM TO ENTER THE VALUES OF TWO VARIABLES 'A' AND 'B' FROM KEYBOARD AND THEN CHECK AT LEAST ONE OF THE CONDITIONS 'A<50' AND 'A<B' ARE TRUE.

#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cin>>a;
	cin>>b;
	cout<<(a<50 || a<b);
	return 0;
}

*/


//problem 7 -

//IF THE MARKS OF ROBERT IN THREE SUBJECTS ARE 78,45 AND 62 RESPECTIVELY(EACH OUT OFF 100),WRITE A PROGRAM TO CALCULATE HIS TOTAL MARKS AND PERCENTAGE MARKS.
/*
#include<iostream>
using namespace std;
int main()
{
	int totalmarks;
	int phy=78;
	int chem=45;
	int math=62;
	cout<<"Total marks of robert are: "<<phy+chem+math<<endl;
	 cout<<"Percentage is: "<<(phy+chem+math)/3<<endl;
}
*/

//problem 8 -

//WRITE A PROGRAM TO ENTER THE VALUES OF TWO VARIABLES FROM THE KEYBOARD AND THEN INTERCHANGE THE VALUES OF THE TWO VARIABLES.
/*
#include<iostream>
using namespace std;
int main()
{
	int x,y,t;
	cout<<"Enter the value of x: "<<endl;
	cin>>x;
	cout<<"Enter the value of y: "<<endl;
	cin>>y;
	t=x;
	x=y;
	y=t;
	cout<<"x= "<<x<<endl<<"y= "<<y<<endl;
}
*/

//problem 9 -

//TAKE INPUT OF SOME LENGTH IN METER AND CONVERT IT TO FEET AND INCHES.
/*
#include<iostream>
using namespace std;
int main()
{
	int length;
	cout<<"Enter the length in meter: "<<endl;
	cin>>length;
	cout<<"Meter value in feet is: "<<length*3.28084<<endl; //1 meter =3.28084 
	cout<<"Meter value in inches is: "<<length*39.37<<endl; //1 meter =39.37inches
	return 0;
}
*/

//problem 10 -

//WRITE A PROGRAM TO CONVERT FAHRENHEIT INTO CELSIUS.
/*
#include<iostream>
using namespace std;
int main()
{
    double fahrenhit,t;
	cout<<"Enter the value in fahrenhit: "<<endl;
	cin>>fahrenhit;
	t=((fahrenhit-30)/2);
	cout<<"The value in celsius is: "<<t;	
} 
*/

//problem 11 -

//THE TOTAL NUMBER OF STUDENTS IN A CLASS ARE 45 OUT OF WHICH 25 ARE BOYS.IF 80% OF THE TOTAL STUDENTS SECURED GRADE 'A' OUT OF EHICH 17 ARE BOYS, THEN WRITE A PROGRAM TO CALCULATE THE TOTAL NUMBER OF GIRLS GETTING GRADE 'A'.
/*
#include<iostream>
using namespace std;
int main()
{
	char grade='A';
	int totalstudents=45;
	int boys=25;
	int girls=20; 
	if(30=='A')
	{
		if(boys==17 && girls ==30-17);
		
	}
	else
		{
			cout<<"girls who get grade 'A' are: "<<30-17<<endl;
		}
} 
*/
 
/*
#include<iostream>
using namespace std;
int main()
{
	int total,b,g;
	b=17;
	total=(80*45)/100;
	g=total-b;
	cout<<"Number of girls getting grade A = "<<g<<endl;
	return 0;
}
*/

//LEVEL - 2:

//problem 1 -

//WRITE A PROGRAM TO CALCULATE THE SUM OF THE FIRST AND THE SECOND LAST DIGIT OF A 5 DIGIT.
/*self written code

#include<iostream>
using namespace std;
int main()
{
	long number[]={1,2,3,4,5};//1+4=5;
	long number1=number[0]+number[3];
	cout<<number1;	
}
*/

/*
#include<iostream>
using namespace std;
int main()
{
	int i,first,second,third,fourth,fifth,sum;
	i=12345;
	first=i/10000;//12345/10000=1.2345//1
	i=i%10000;
	
	second=i/1000;//12.345//2
	i=i%1000; //
	
	third=i/100;//123.45//3
	i=i%100;
	
	fourth=i/10;//1234.5//4
	
	fifth=i%10;//12345//5
	
	sum=first+fourth;
	cout<<"sum: "<<sum<<endl;
}

*/

//problem - 2

//TAKE A 4 DIGIT NUMBER .WRITR A PROGRAM TO DISPLAY A NUMBER WHOSE DIGITS ARE 2 GREATER THAN THE CORRESPONDING DIGITS OF THE NUMBER TAKEN.
/*
#include<iostream>
using namespace std;
int main()
{
	int i,first,second,third,fourth,sum1,sum2,sum3,sum4;
	i=5696; //78118
		
	first=i/1000;//5
	i=i%1000;//696
	
	second=i/100;//6
	i=i%100;//96
    
	third=i/10;//9

    fourth=i%10;//6
	
	sum1=first+2;
	sum2=second+2;
	sum3=third+2;
	sum4=fourth+2;
	cout<<sum1<<sum2<<sum3<<sum4<<endl;
	return 0;
}
*/

//problem - 3

//WRITE A PROGRAM TO CALCULATE THE SUM OF THE DIGITS OF A 3-DIGIT NUMBER.
/*
#include<iostream>
using namespace std;
int main()
{
	int x=567;
	int first=5,second=6,third=7;
	cout<<first+second+third;
}
*/

//problem - 4;

//WRITE A PROGRAM TO REVERSE A 3-DIGIT NUMBER.
/*
#include<iostream>
using namespace std;
int main()
{
	int t=123;
	int f=1,s=2,t3=3,t0,t1,t2;
	t0=t3;//3
	t1=s;//2
	t2=f;//1
	cout<<"The original number: "<<t<<endl;   	
	cout<<"The reverse number: "<<t0<<t1<<t2<<endl;
	return 0;
}
*/

