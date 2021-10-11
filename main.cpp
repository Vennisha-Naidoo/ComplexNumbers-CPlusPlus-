#include<iostream>
#include<cmath>

using namespace std;


//class definition for complex number
class complex{
 private:
                float real;    //stores the real part
                float img;     //stores the complex part
 public:
                void getdata();   //takes user input
                void display();   //display the complex number

				//constructor for initialization
                complex()
				{
				   real=img=0;
				}

				//function declarations(prototypes)
                complex operator+ (complex c1);
                complex operator* (complex c1);

};


//Function definitions for the declared functions in the class

/*
Function definition for getdata()

This function takes the data from the user to store in the complex number
object.

*/

void complex::getdata()
{
    cout<<"Enter the real and img of complex no.\n";
    cout<<"Real : ";
    cin>>real;
    cout<<"Img : ";
    cin>>img;
}


/*
Function definition for display of complex number

This function displays the complex complex number in a+bi form,where "a" is real part
and "b" is the imaginary part.

*/

void complex::display()
{
   cout<<"("<<real<<")"<<"+"<<"("<<img<<")"<<"i";
}

/*
Function definition for operator "*"

This overloads the "*" operator to perform multiplication of two complex numbers.
It returns the resultant complex number.

*/

complex complex::operator* (complex c1)
{
   complex mul;
   mul.real = ((real*c1.real)-(img*c1.img));
   mul.img = ((real*c1.img)+(c1.real*img));
     return(mul);
}

/*
Function definition for operator "+"

This overloads the "*" operator to perform addition of two complex numbers.
It returns the resultant complex number.

*/
complex complex::operator+ (complex c1)
{
   complex add;
   add.real = real + c1.real;
   add.img = img + c1.img;
     return(add);
}



//start of main function
int main()
{
   complex a,b,c;  //creation of objects
    int opt,opt1=1;
    while(opt1==1)
    {
    a.getdata();   //taking data from user
    b.getdata();

    cout<<""<<endl;
    //displaying the menu for the user
	cout<<"Main Menu:"<<endl;
    cout<<"1.Addition"<<endl;
    cout<<"2.Multiplication"<<endl;
    cout<<"3.Exit"<<endl;

    cout<<""<<endl;
    cout<<"Enter your choice:"<<endl;

	  //taking user choice
    cin>>opt;
    cout<<""<<endl;

	 //handling the user option
     switch(opt)
      {
          case 1://using the operator overloading to perform addition
                 c = a+b;
                 cout<<"\n";

				 //displaying the output in user friendly format
                 a.display();
                 cout<<" + ";
                 b.display();
                 cout<<" = ";
                 c.display();
                 break;


          case 2://using the operator overloading to perform multiplication
                 c = a*b;

				 //printing the output in user friendly format
                 cout<<"\n";
                 a.display();
                 cout<<" * ";
                 b.display();
                 cout<<" = ";
                 c.display();
                 break;



          case 3: return 0;

          default: cout<<"\nInvalid choice.....try again\n";
                   break;
      }
       cout<<""<<endl;
       cout<<"Do you wish to continue(Press 1 to continue)";
        cin>>opt1;
        cout<<""<<endl;
        cout<<""<<endl;
      }

   return 0;
}
