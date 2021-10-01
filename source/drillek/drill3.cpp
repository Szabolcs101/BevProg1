#include "std_lib_facilities.h"

int main()
{
	//Task 1

	cout << "Enter the name of the person you want to write to:\n";
	string first_name;
	cin >> first_name;
	cout << "Dear " <<first_name<<"!\n";
	
	//Task 2

	cout << "	How are you? I am fine. I miss you.\n";
	cout << " I am already looking forward to see you again.\n";

	//Task 3

	string friend_name;
	cin >> friend_name;

	cout << "Have you seen " <<friend_name<<" lately?\n";

	//Task 4

	char friend_sex = 0;

	cout << "Please enter an 'm' if your friend is a male.\n"
	        "Please enter an 'f' if your friend is a female.\n";

    cin >> friend_sex;

    if (friend_sex=='m'){

    cout << "If you see " <<friend_name<<" please ask him to call me.\n";  


    	}

    if (friend_sex=='f'){


    	cout <<"If you see " <<friend_name<<" please ask her to call me.\n";	
    
    	}

    //Task 5

    cout << "Please enter the age of the recipient:\n";

	int age;
    cin >> age;

    cout <<"I have hear you just had a birthday and you are " <<age<<" years old.\n";

    if (age <1 || age >109){

    	simple_error("You're kidding!");
    }

    //Task 6


    else if(age <12){

    	cout << "Next year you will be " <<age+1<<".\n";
    }

    else if(age==17){

    	cout <<"Next year you will be able to vote.\n";

    }


    else if(age>70){

    	cout<<"I hope you're enjoying retirement ;).\n";
    }
   

   //Task 7

    cout << "Yours sincerely \n \n";

    cout <<"Szabolcs\n";


}