//Marc:Programmer
#include <iostream.h>
#include <conio.h>
#include <process.h>

//1 (Function Function without argument and no return) odd or even
void odev () {
	int N;
	cout <<"Enter the Given Number: ";
	cin >>N;

	 if (N % 2 == 0) {
		cout <<"is even " <<N;
	 } else {
		cout <<"is odd " <<N;
		}
	getch();

}

//2 (Function Function with argument and no return) passed or failed
void pasfai (int P, int M, int F) {
	int A;

	cout <<"Enter the Prelim: ";
	cin >>P;
	cout <<"Enter the Midterm: ";
	cin >>M;
	cout <<"Enter the Finals: ";
	cin >>F;

	A = (P+M+F)/3;

	if (A >= 75) {
	cout <<"You Passed! "<<"Your Average is "<<A;
	} else {
	cout <<"You Failed "<<"Your Average is "<<A;
	}
	 getch();

}
//3 (Function with argument and no return) positive or negative
void posneg (int N2) {

	cout <<"Enter the your Number: ";
	cin >>N2;

	if (N2 > 0) {
	cout <<"The number is positive "<<N2;
	} else {
	cout <<"The number is negative "<<N2;
	}

	getch();
}

//4 (Function without argument and no return) total sales and commission
void totalc () {
	   int US, UP, SM1;
  char SM [15];
    double Total_Sales, Commission;

    cout <<"Enter the Salesman Name: ";
    cin >>SM;
    cout <<"Enter the Salesman Number: ";
    cin >>SM1;
    cout << "Enter the Unit sold: ";
    cin >> US;
    cout << "Enter the Unit price: ";
    cin >> UP;

    Total_Sales = US * UP;

    cout << "The total sales is " << Total_Sales << endl;

    if (Total_Sales <= 10000) {
	Commission = Total_Sales * 0.10;
	cout << "The Commission earned is " << Commission << endl;
    } else if (Total_Sales <= 15000) {
	Commission = Total_Sales * 0.15;
	cout << "The Commission earned is " << Commission << endl;
    } else if (Total_Sales <= 20000) {
	Commission = Total_Sales * 0.20;
	cout << "The Commission earned is " << Commission << endl;
    } else if (Total_Sales <= 25000) {
	Commission = Total_Sales * 0.25;
	cout << "The Commission earned is " << Commission << endl;
    } else {
	Commission = Total_Sales * 0.30;
	cout << "The Commission earned is " << Commission << endl;
    }
    getch();



}
//5 (Function with argument and no return) larger between two numbers
void larger (int N1, int NTR) {
	if (N1 > NTR ) {
	cout <<"The first number is larger "<<N1;
	} else {
	cout <<"The second number is larger "<<NTR;
	 }
	getch();


}
//6 (Function with argument and return) smallest
int smnumber(int NONE, int NTWO, int NTR3) {
	return NONE + NTWO + NTR3; }

//7 (Function without argument and no return) General Weighted Average
void GWA () {
 int GWA;

    cout <<"Enter the General Weighted Average: ";
    cin >>GWA;

    if (GWA < 75) {
	cout <<"5.0 = "<<GWA;
    }  else if (GWA <= 78) {
	cout <<"3.0 = "<<GWA;
    }  else if (GWA <= 81) {
	cout <<"2.75 = "<<GWA;
    }  else if (GWA <= 84) {
	cout <<"2.25 = "<<GWA;
    } else if (GWA <= 87) {
	cout <<"2.0 = "<<GWA;
    } else if (GWA <= 90) {
	cout <<"2.0 = "<<GWA;
    } else if (GWA <= 93) {
	cout <<"2.0 = "<<GWA;
    } else if (GWA <= 96) {
	cout <<"2.0 = "<<GWA;
    } else if (GWA <= 96) {
	cout <<"1.75 = "<<GWA;
    } else if (GWA <= 96) {
	cout <<"1.5 = "<<GWA;
    } else if (GWA <= 96) {
	cout <<"1.25 = "<<GWA;
    }  else if (GWA <= 100) {
	cout <<"1.00 = "<<GWA;
    }
    getch();




}


//8 (Function without argument but with return) closest to 100 and if it equals print 0.
 struct Pair {
    int first;
    int second;
};

Pair closest() {
    Pair result;
    int num1, num2;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    result.first = num1;
    result.second = num2;

    return result;
}




//9 (Function with argument and return) sum of two integer if two values are same triple their sum
int calculateSum(int num1, int num2) {
    return num1 + num2;
}

//10 (Function without argument but with return) check and display if given positive number is mutiple of 3 or 7
int checkMultiples() {
    int n;

    clrscr(); // Clear the screen

    cout << "Enter a positive number: ";
    cin >> n;

    if (n % 3 == 0 && n % 7 == 0) {
	cout << n << " is a multiple of 3 and 7";
    } else if (n % 3 == 0) {
	cout << n << " is a multiple of 3 but not 7.";
    } else if (n % 7 == 0) {
	cout << n << " is a multiple of 7 but not 3.";
    } else if (n % 3 != 0 && n % 7 != 0) {
	cout << n << " is not a multiple of 3 or 7.";
    }

    return n; // Return the entered number
}


void main () {
  int choice;
  do {
  clrscr();

  gotoxy (32,1); cout <<"Selection Function Menu"<<endl;

  gotoxy (1,3); cout <<"1-Program that display if the number is Odd or Even."<<endl;
  cout <<"2-Program that display if the average is Passed or Failed."<<endl;
  cout <<"3-Program that display if the number is Positive or Negative."<<endl;
  cout <<"4-Program that display and compute the Total Sales and Commission."<<endl;
  cout <<"5-Program that identify and display who's larger between 2 numbers."<<endl;
  cout <<"6-Program that identify and display who's smallest between 3 numbers."<<endl;
  cout <<"7-Program that display the appropriate value of General Weighted Average."<<endl;
  cout <<"8-Program that identify and display number that's closest to 100 and if it equals print 0."<<endl;
  cout <<"9-Program that compute the sum of two integer. If two values are same triple their sum."<<endl;
  cout <<"10-Program that check and display if given positive number is mutiple of 3 or 7.";
  cout <<"11-Exit"<<endl;
  cout <<"Enter your choice: ";
  cin >>choice;

  switch (choice) {
 case 1:
    clrscr();
    //Function Calling
    odev();
    break;

 case 2:
    clrscr();
    int P, M, F;
    //Function Calling
    pasfai(P, M, F);
    break;

 case 3:
    clrscr();
    int N2;
    posneg(N2);
    break;

 case 4:
    clrscr();
    //Function Calling
    totalc();
    break;

 case 5:
    clrscr();
    int N1, NTR;

    cout <<"Enter the first number: ";
    cin >>N1;
    cout <<"Enter the second number: ";
    cin >>NTR;
    //Function Calling
    larger(N1, NTR);
    break;


 case 6:
    clrscr();
    int NONE, NTWO, NTR3;

    cout <<"Enter the first number (N1): ";
    cin >>NONE;
    cout <<"Enter the second number (N2): ";
    cin >>NTWO;
    cout <<"Enter thes third number (N3): ";
    cin >>NTR3;

    //Function Calling
    smnumber(NONE, NTWO, NTR3);

    if (NONE < NTWO && NONE < NTR3) {
	cout << "The N1 is the smallest number "<< endl;
    } else if (NTWO < NONE && NTWO < NTR3) {
	cout << "The N2 is the smallest number "<< endl;
    } else {
	cout << "The N3 is the smallest number "<< endl;
    }
    getch();
    break;



case 7:
    clrscr();
    //Function Calling
    GWA();
    break;


case 8:
    clrscr();
    int A1, B;

    // Function Calling and getting return values
    Pair result = closest();

    // Accessing the returned values
    int num1 = result.first;
    int num2 = result.second;

    A1 = 100 - num1;
    B = 100 - num2;

    if (A1 < B) {
	cout << "The first number (" << num1 << ") is the closest to 100 ";
    } else if (B < A1) {
	cout << "The second number (" << num2 << ") is closest to 100 ";
    } else if (A1 == B) {
	cout << "Both numbers are equally close to 100";
    }

    getch(); // Wait for a key press


    break;



case 9:
    clrscr();
    int num1one, num2two;

    cout << "Enter the first integer: ";
    cin >> num1one;

    cout << "Enter the second integer: ";
    cin >> num2two;

    // Function calling
    int sumResult = calculateSum(num1one, num2two);

    if (num1one == num2two) {
	cout << "The numbers are the same. Triple their sum: " << sumResult * 3;
    } else {
	cout << "The sum of the two numbers is: " << sumResult;
    }

    getch();
	   break;


case 10:
    clrscr();
    //Function Calling
    checkMultiples();
    getch();

    break;
 case 11:
  exit(0);

}
}while (choice <=11);

}

