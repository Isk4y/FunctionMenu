//Marc:Programmer
#include <iostream.h>
#include <conio.h>
#include <process.h>

void sdpq (int N1, int N2) {
	    int S, D, P, Q;
	     S = N1 + N2;
	     D = N1 - N2;
	     P = N1 * N2;
	     Q = N1 / N2;

	    cout << "\nThe Sum of " << N1 << " and " << N2 << " is " << S;
	    cout << "\nThe Difference of " << N1 << " and " << N2 << " is " << D;
	    cout << "\nThe Product of " << N1 << " and " << N2 << " is " << P;
	    cout << "\nThe Quotient of " << N1 << " and " << N2 << " is " << Q;
		getch();
}
void name ()
 {

	    cout <<"Marc D. Vesli�o";
	    cout <<"\nMarc D. Vesli�o";
	    cout <<"\nMarc D. Vesli�o";
	    cout <<"\nMarc D. Vesli�o";
	    cout <<"\nMarc D. Vesli�o";
	     getch();


 }
 void circle (int D1) {

		int R1;
		float C1, A1;



		R1=D1/2;
		C1=2 * 3.1416 * R1;
		A1= 3.1416 * R1 * R1;
	cout <<"\n The Circumference is "<< C1;
	cout <<"\n The Area is "<< A1;
	 getch();

 }
int PMF(int P1, int M1, int F1) {
	int A2;
	A2=(P1+M1+F1)/3;

	cout <<"\n The Total Average is "<< A2;

 return A2;
}

void totalsales(int US, int UP)
{

	    int TS;

	    TS=US*UP;

	    cout <<"The Total Sales is "<<TS;

}
void swapper (int A1, int B1){
	int C1;
	    cout << "Before the swapping." << endl;
	    cout << "A = " << A1 <<", B = " << B1 << endl;
		C1=A1+B1;
		A1=C1-A1;
		B1=C1-B1;
	    cout << "\nAfter the swapping." << endl;
	    cout << "A = " << A1 <<", B = " << B1 << endl;
}
void squcube (int GN) {

	int S2, C2;
	    cout <<"Enter the Given Number: ";
	    cin >>GN;

	    S2= GN*GN;
	    C2= GN*GN*GN;
		cout <<"Squre: "<<S2;
		cout <<"\nCube: "<<C2;
}
void lewi (int L, int W){

	int P, A1;
	cout <<"Enter the Length: ";
	cin >>L;
			cout <<"Enter the Width: ";
		cin >>W;
	    A1=L*W;
	    P = 2*(L+W);

		cout <<"AREA: "<<A1;
		cout <<"\nPERIMETER: " <<P;
}
int faren (int C3) {

	int F;
		F=(C3 * 9/5)+32;
		cout <<"Farenheit: " <<F;

	   return F;

}
void employ() {
 int EN1, NHW, RPH, GP;
	char EN [15];
	    cout <<"Enter the Employee Name: ";
	    cin >>EN;
	    cout <<"Enter the Employee Number: ";
	    cin >>EN1;
	    cout <<"Enter the Number Work Per Hour: ";
	    cin >>NHW;
	    cout <<"Enter the Rate Per Hour: ";
	    cin >>RPH;
	GP=NHW*RPH;
	    cout <<"GrossPay: " <<GP;

}


void main() {
    int choice;

    do {
    clrscr();
    gotoxy (34,1); cout <<"Function Sequence Menu" << endl;
    gotoxy (8,2); cout <<"\n1 - Program that display the sum, difference, product, and quotient." << endl;
    gotoxy (8,4); cout <<"\n2 - Program that print your name 5 times." << endl;
    gotoxy (8,6); cout <<"\n3 - Program that display the diameter of a circle." << endl;
    gotoxy (8,8); cout <<"\n4 - Program that display the average of prelims, midterm, and finals." << endl;
    gotoxy (8,10); cout <<"\n5 - Program that compute and display the total sales." << endl;
    gotoxy (8,12); cout <<"\n6 - Program that swap the values of two variables." << endl;
    gotoxy (8,14); cout <<"\n7 - Program that display the square and cube of an input number." << endl;
    gotoxy (8,16); cout <<"\n8 - Program that display the area and perimeter of a rectangle." << endl;
    gotoxy (8,18); cout <<"\n9 - Program display the equivalent degrees to fahrenheit." << endl;
    gotoxy (8,20); cout <<"\n10 - Program compute and display the gross pay." << endl;
    gotoxy (8,22); cout <<"\n11 - Exit" << endl;
    gotoxy (8,24); cout <<"Enter the number here: ";

    cin >> choice;

    switch (choice) {
	case 1:
		clrscr();
		sdpq(5,6);
		break;


	case 2:

		clrscr();
		name();
		break;



	case 3:
		clrscr();
		int D1;
		cout <<"Enter the Diameter: ";
		cin >> D1;
		clrscr();
		circle(D1);
		break;



	case 4:
		clrscr();
   int P1, M1, F1;
	cout <<"Enter the Prelim: ";
	cin >>P1;
	cout <<"Enter the Midterm: ";
	cin >>M1;
	cout << "Enter the Finals: ";
	cin >>F1;

	PMF(P1, M1, F1);

		getch();
	break;


	case 5:
    clrscr();
	int SM1, US, UP;
	char SM [20];
    cout <<"Enter the Salesman Name: ";
	cin >>SM;
	cout <<"Enter the Salesman Number: ";
	cin >>SM1;
	    cout <<"Enter the Unit Sold:";
	    cin >>US;
	    cout <<"Enter the Unit Price:";
	    cin>>UP;

	totalsales(US,UP);

	    getch();
	   break;


	   case 6:
	   clrscr();
	   int A, B;
	   swapper(5, 6);
	   getch();
	  break;



	  case 7:
	  clrscr();
	  int GN;
	  squcube(GN);
	  getch();
	  break;


	 case 8:
	 clrscr();
	 int L, W;
	 lewi(L, W);
	 getch();
	 break;

	 case 9:
	 clrscr();
	 int C3;
	 cout <<"Enter the Degree Celsius: ";
	 cin >>C3;
	 faren(C3);
	 getch();
	 break;


	case 10:
	clrscr();
	employ();
	getch();
	break;


	case 11:
	    exit(0);
	     getch();
	    break;


    }
     }
    while (choice <=11);



     }
