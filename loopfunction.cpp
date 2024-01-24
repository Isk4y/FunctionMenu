//Marc:Programmer
#include <iostream>
using namespace std;

bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int factorial(int num) {
    if (num == 0 || num == 1) {
        return 1;
    }
    return num * factorial(num - 1);
}

int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

//1 For Loop (function without argument and no return)
int fnamef() {

    int ctr;
    system("cls");
    for (int ctr = 0; ctr < 5; ctr++)
        cout << "Marc" << endl;
    system("pause");
    system("cls");

}
//1 While Loop (function without argument and no return)
int fnamew () {
                                                        int ctr;
                                                        system("cls");
                                                        ctr = 1;
                                                        while (ctr<=5) {
                                                        cout <<"Marc" <<"\n";
                                                        ctr++;
                                                        }
                                                        system("pause");
                                                        system("cls");



}
//1 Do-while (function without argument and no return)
int fnamedw () {
            int ctr;
            system("cls");
                                                        ctr =1;
                                                        do {
                                                        cout <<"Marc\n";
                                                        ctr++;
                                                        }
                                                        while(ctr<=5);
                                                        system("pause");
                                                        system("cls");



}
//2 For Loop (Function with argument and no return)
int onetoff (int start, int end) {
    system("cls");

    // Loop to display numbers from 'start' to 'end'
    for (int ctr = start; ctr <= end; ctr++) {
        cout << ctr << endl;
    }

    // Pause to wait for user input
    system("pause");

    // Clear the console screen
    system("cls");
}
//2 While Loop (Function with argument and no return)
int onetofw (int start, int end) {

     system("cls");
     int ctr;
     ctr = start;
     while (ctr <= end) {
     cout <<ctr <<"\n";
     ctr++;
        }
     system("pause");
     system("cls");
}
//2 Do-while Loop (Function with argument and no return)

int onetofdw(int start, int end) {

    system("cls");
    int ctr =start;
    do {
    cout <<ctr <<"\n";
    ctr++;
    }
    while (ctr <= end);
    system("pause");
    system("cls");


}
//3 For Loop (Function without argument and no return)
int fivetof (int start, int end) {
    system("cls");

    // Loop to display numbers in reverse order from 'end' to 'start'
    for (int ctr = end; ctr >= start; ctr--) {
        cout << ctr << endl;
    }

    // Pause to wait for user input
    system("pause");

    // Clear the console screen
    system("cls");

    // Return the count of numbers displayed
    return end - start + 1;
}
//3 While Loop (Function without argument and no return)
int fivetow (int start, int end) {
                                                    int ctr1;
                                                    system("cls");
                                                    ctr1 = end;
                                                    while (ctr1 >=start) {
                                                    cout <<ctr1 <<"\n";
                                                    ctr1--;
                                                    }
                                                    system("pause");
                                                    system("cls");

                                                    return end - start + 1;


}
//3 Do-while Loop (Function without argument and no return)
int fivetodw (int start, int end) {

                                                    system ("cls");
                                                    int ctr1 = end;
                                                    do {
                                                       cout <<ctr1 <<"\n";
                                                    ctr1--;
                                                    }
                                                    while (ctr1 >=start);
                                                    system("pause");
                                                    system("cls");

                                                    return end - start + 1;

}
//4 For Loop (Function with argument and no return)
int evenf (int start, int end) {

                                                    int ctr;
                                                    system("cls");
                                                    for (int ctr = start; ctr <= end; ctr += 2)
                                                    cout << ctr << endl;
                                                    system("pause");
                                                    system("cls");



}
//4 While Loop (Function with argument and no return)
int evenw(int start, int end) {
                                                    int ctr2;
                                                    system("cls");
                                                    ctr2 = start;
                                                    while (ctr2 <=end) {
                                                    cout <<ctr2 <<"\n";
                                                    ctr2 +=2;
                                                    }
                                                    system("pause");
                                                    system("cls");



}
//4 Do-while Loop (Function with argument and no return)
int evendw(int start, int end) {
                                                    int ctr;
                                                    system ("cls");
                                                    ctr =start;
                                                    do {
                                                    cout<<ctr <<"\n";
                                                    ctr +=2;
                                                    }
                                                    while (ctr <=end);
                                                    system("pause");
                                                    system("cls");



}

//5 For loop (Fuction without argument but with return
int oddf () {

                                                    int ctr, start =1 , end = 10;
                                                    system("cls");
                                                    for (int ctr = start; ctr <= end; ctr += 2)
                                                    cout << ctr << endl;
                                                    system("pause");
                                                    system("cls");

                                                    return start, end;
              }
//5 While loop (Fuction without argument but with return)
int oddw() {
                                                    int ctr, start = 1, end = 10;
                                                    system("cls");
                                                    ctr = start;
                                                    while (ctr <=end) {
                                                    cout <<ctr <<"\n";
                                                    ctr +=2;
                                                    }
                                                    system("pause");
                                                    system("cls");

                                                    return start, end;

}
//5 Do-while loop (Fuction without argument but with return)
int odddw() {

                                                    int ctr, start = 1, end = 10;
                                                    system("cls");
                                                    ctr=start;
                                                    do {
                                                    cout <<ctr <<"\n";
                                                    ctr +=2;
                                                    }
                                                    while (ctr <=end);

                                                    system("pause");
                                                    system("cls");
                                                    return start, end;

}

//6 For Loop (Function without argument and no return);
int primef () {
                                                system ("cls");
                                                int number;
                                                cout << "Enter a number to check if it's prime using a for loop: ";
                                                cin >> number;

                                                if (isPrime(number)) {
                                                cout << number << " is a prime number." << endl;
                                                } else {
                                                cout << number << " is not a prime number." << endl;
                                                }
                                                 system("pause");
                                                 system("cls");


}
//6 While Loop (Function without argument and no return);
int primew() {

                                system ("cls");
                                                int number;
                                                cout << "Enter a number to check if it's prime using a while loop: ";
                                                cin >> number;

                                                if (isPrime(number)) {
                                                cout << number << " is a prime number." << endl;
                                                } else {
                                                cout << number << " is not a prime number." << endl;
                                                }
                                                system("pause");
                                                system("cls");
}
//6 Do-while Loop (Function without argument and no return);
int primedw() {
    system ("cls");
                                                int number;
                                                cout << "Enter a number to check if it's prime using a while loop: ";
                                                cin >> number;

                                                if (isPrime(number)) {
                                                cout << number << " is a prime number." << endl;
                                                } else {
                                                cout << number << " is not a prime number." << endl;
                                                }
                                                system("pause");
                                                system("cls");




}
//7 For loop (Function with argument with no return)
int factorialf(int num) {

                                                system ("cls");
                                                cout << "Enter a number to find its factorial using a for loop: ";
                                                cin >> num;

                                                if (num < 0) {
                                                cout << "Factorial is not defined for negative numbers." << endl;
                                                } else {
                                                int result = 1;
                                                for (int i = 1; i <= num; ++i) {
                                                result *= i;
                                                }
                                                    cout << "Factorial of " << num << " is: " << result << endl;
                                                }
                                                system("pause");
                                                system("cls");


}
//7 While loop (Function with argument with no return)
int factorialw(int num) {
                                                system ("cls");

                                                cout << "Enter a number to find its factorial using a while loop: ";
                                                cin >> num;

                                                if (num < 0) {
                                                cout << "Factorial is not defined for negative numbers." << endl;
                                                } else {
                                                    int result = 1, i = 1;
                                                while (i <= num) {
                                                result *= i;
                                                ++i;
                                                }
                                                    cout << "Factorial of " << num << " is: " << result << endl;
                                                }
                                                system("pause");
                                                system("cls");

}
//7 Do-while loop (Function with argument with no return)
int factorialdw(int num) {

                                                system ("cls");
                                                cout << "Enter a number to find its factorial using a do-while loop: ";
                                                cin >> num;

                                                if (num < 0) {
                                                cout << "Factorial is not defined for negative numbers." << endl;
                                                } else {
                                                int result = 1, i = 1;
                                                do {
                                                result *= i;
                                                ++i;
                                                } while (i <= num);
                                                cout << "Factorial of " << num << " is: " << result << endl;
                                                }
                                                system("pause");
                                                system("cls");



}
//8 For Loop (function without argument and no return)
int gcdf () {
                                                system ("cls");
                                                int num1, num2;
                                                cout << "Enter two numbers to find their GCD using a for loop: ";
                                                cin >> num1 >> num2;

                                                while (num1 != num2) {
                                                if (num1 > num2) {
                                                num1 -= num2;
                                                } else {
                                                num2 -= num1;
                                                }
                                                }
                                                cout << "GCD is: " << num1 << endl;
                                                system("pause");
                                                system("cls");


}
//8 While Loop (function without argument and no return)
int gcdw() {

system ("cls");
                                                int num1, num2;
                                                cout << "Enter two numbers to find their GCD using a while loop: ";
                                                cin >> num1 >> num2;

                                                while (num1 != num2) {
                                                    if (num1 > num2) {
                                                        num1 -= num2;
                                                    } else {
                                                        num2 -= num1;
                                                    }
                                                }
                                                cout << "GCD is: " << num1 << endl;
                                                system("pause");
                                                system("cls");

}
//8 Do-while Loop (function without argument and no return)
int gcddw() {

                        system ("cls");
                                                int num1, num2;
                                                cout << "Enter two numbers to find their GCD using a do-while loop: ";
                                                cin >> num1 >> num2;

                                                do {
                                                if (num1 > num2) {
                                                num1 -= num2;
                                                } else {
                                                num2 -= num1;
                                                }
                                                } while (num1 != num2);
                                                cout << "GCD is: " << num1 << endl;

}
int main() {
    char choice;
    bool exitMenu = false;
    int ctr;

    do {
        cout << "Loop Menu:" << endl;
        cout << "1. Loop 1" << endl;
        cout << "2. Loop 2" << endl;
        cout << "3. Loop 3" << endl;
        cout << "4. Loop 4" << endl;
        cout << "5. Loop 5" << endl;
        cout << "6. Loop 6" << endl;
        cout << "7. Loop 7" << endl;
        cout << "8. Loop 8" << endl;
        cout << "9. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
             case '1': {
              system("cls");

                char subChoice;
                do {

                    cout << "Loop 1 Menu (A program that prints name five times)" << endl;
                    cout << "a. For Loop" << endl;
                    cout << "b. While Loop" << endl;
                    cout << "c. Do-While Loop" << endl;
                    cout << "d. Back to Loop Menu" << endl;
                    cout << "Enter your choice: ";
                    cin >> subChoice;

                    switch (subChoice) {

                        case 'a':
                                                        fnamef();
                                                        break;

                        case 'b':

                                                        fnamew();
                                                        break;


                        case 'c':
                                                        fnamedw();
                                                        break;



                        case 'd':
                            system("cls");
                            break;

                        default:
                            cout << "Invalid choice. Please try again." << endl;
                            break;
                    }
                } while (subChoice != 'd');
                break;
            }

            case '2': {
                 system("cls");
                char subChoice;
                do {
                    cout << "Loop 2 Menu (A program that counts numbers from one up to five)" << endl;
                    cout << "a. For Loop" << endl;
                    cout << "b. While Loop" << endl;
                    cout << "c. Do-While Loop" << endl;
                    cout << "d. Back to Loop Menu" << endl;
                    cout << "Enter your choice: ";
                    cin >> subChoice;

                    switch (subChoice) {
                        case 'a':
                                                    onetoff(1, 5);
                                                    break;


                        case 'b':

                                                    onetofw(1,5);
                                                    break;

                        case 'c':

                                                    onetofdw(1, 5);
                                                    break;

                        case 'd':
                            system("cls");
                            break;

                        default:
                            cout << "Invalid choice. Please try again." << endl;
                            break;
                    }
                } while (subChoice != 'd');
                break;
            }

            case '3': {
                system("cls");
                char subChoice;
                do {
                    cout << "Loop 3 Menu (A program that counts numbers from five down to one)" << endl;
                    cout << "a. For Loop" << endl;
                    cout << "b. While Loop" << endl;
                    cout << "c. Do-While Loop" << endl;
                    cout << "d. Back to Loop Menu" << endl;
                    cout << "Enter your choice: ";
                    cin >> subChoice;

                    switch (subChoice) {
                    case 'a':
                            fivetof(1, 5);
                            break;

                        case 'b':
                                                    fivetow(1, 5);
                                                    break;

                        case 'c':
                                                    fivetodw(1, 5);
                                                    break;


                        case 'd':
                             system("cls");
                            break; // Return to the Loop Menu

                        default:
                            cout << "Invalid choice. Please try again." << endl;
                            break;
                    }
                } while (subChoice != 'd');
                break;
            }

            case '4': {
                 system("cls");
                char subChoice;
                do {
                    cout << "Loop 4 Menu (A program that counts even numbers from one up to ten)" << endl;
                    cout << "a. For Loop" << endl;
                    cout << "b. While Loop" << endl;
                    cout << "c. Do-While Loop" << endl;
                    cout << "d. Back to Loop Menu" << endl;
                    cout << "Enter your choice: ";
                    cin >> subChoice;

                    switch (subChoice) {
                        case 'a':
                                                    evenf(2, 10);
                                                    break;

                        case 'b':
                                                    evenw(2, 10);
                                                    break;

                        case 'c':

                                                evendw(2, 10);

                                    break;

                        case 'd':
                            system ("cls");
                            break;
                        default:
                            cout << "Invalid choice. Please try again." << endl;
                            break;
                    }
                } while (subChoice != 'd');
                break;
            }

            case '5': {
                 system("cls");
                char subChoice;
                do {
                    cout << "Loop 5 Menu (A program that counts odd numbers from one up to ten)" << endl;
                    cout << "a. For Loop" << endl;
                    cout << "b. While Loop" << endl;
                    cout << "c. Do-While Loop" << endl;
                    cout << "d. Back to Loop Menu" << endl;
                    cout << "Enter your choice: ";
                    cin >> subChoice;

                    switch (subChoice) {
                        case 'a':
                                                    oddf();

                            break;

                        case 'b':
                                            oddw();

                                            break;

                        case 'c':

                                            odddw();
                                            break;

                        case 'd':
                            system ("cls");
                            break;

                        default:
                            cout << "Invalid choice. Please try again." << endl;
                            break;
                    }
                } while (subChoice != 'd');
                break;
            }

            case '6': {
                system ("cls");
                char subChoice;
                do {
                    cout << "Loop 6 Menu (A program to check and display whether a number is prime or not)" << endl;
                    cout << "a. For Loop" << endl;
                    cout << "b. While Loop" << endl;
                    cout << "c. Do-While Loop" << endl;
                    cout << "d. Back to Loop Menu" << endl;
                    cout << "Enter your choice: ";
                    cin >> subChoice;

                    switch (subChoice) {
                        case 'a': {
                                                primef();
                                                break;
                                                }
                        case 'b': {
                                                primew();
                                                break;
                                                }

                        case 'c': {

                                                primedw();
                                                break;
                                                }
                        case 'd':
                            system ("cls");
                            break;
                        default:
                            cout << "Invalid choice. Please try again." << endl;
                            break;
                    }
                } while (subChoice != 'd');
                break;
            }


            case '7': {
                system ("cls");
                char subChoice;
                do {
                    cout << "Loop 7 Menu (A program to find and display the factorial of a given or inputted number.)" << endl;
                    cout << "a. For Loop" << endl;
                    cout << "b. While Loop" << endl;
                    cout << "c. Do-While Loop" << endl;
                    cout << "d. Back to Main Menu" << endl;
                    cout << "Enter your choice: ";
                    cin >> subChoice;

                    switch (subChoice) {
                        case 'a': {
                                                int num;
                                                factorialf(num);
                                                break;
                                                }

                        case 'b': {
                                                int num;
                                                factorialw(num);
                                                break;
                                                }

                        case 'c': {
                                                int num;
                                                factorial(num);

                                                break;
                                            }

                                            case 'd':
                                                system ("cls");
                                                break;
                                            default:
                                                cout << "Invalid choice. Please try again." << endl;
                                                break;
                                        }
                                    } while (subChoice != 'd');
                                    break;
                                }

            case '8': {
                system ("cls");
                char subChoice;
                do {
                    cout << "Loop 8 Menu (A program to find and display the Greatest Common Divisor (GCD) of two given numbers)" << endl;
                    cout << "a. For Loop" << endl;
                    cout << "b. While Loop" << endl;
                    cout << "c. Do-While Loop" << endl;
                    cout << "d. Back to Main Menu" << endl;
                    cout << "Enter your choice: ";
                    cin >> subChoice;

                    switch (subChoice) {
                        case 'a': {
                                                gcdf();
                                                break;
                                                }


                        case 'b': {

                                                gcdw();
                                                break;
                                                }

                        case 'c': {
                                                gcddw();
                                                break;
                                            }

                        case 'd':
                                                system ("cls");
                                                break;
                                                default:
                                                cout << "Invalid choice. Please try again." << endl;
                                                break;
                                                }
                                                } while (subChoice != 'd');
                                                system("pause");
                                                system("cls");

                                                break;

                                                }

            case '9': {
                system ("cls");
                exitMenu = true;
                break;
            }
            default:
                cout << "Invalid choice. Please try again." << endl;
                break;
        }

    } while (!exitMenu);

    cout << "Exiting the program. Goodbye!" << endl;
    return 0;
}
