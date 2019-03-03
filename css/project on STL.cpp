#include<bits/stdc++.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<vector>
#include<windows.h>
#include<stdlib.h>
#include<time.h>
#define  black  color 0       
#define  blue   color 1        
#define  green  color 2      
#define  aqua   color 3    
#define  red    color 4    
#define  purple color 5   
#define  yellow color 6  
#define  white  color 7
#define grey    color 8
#define lblue   color 9
#define lgreen  color A
#define laqua   color B
#define lred    color C
#define lpurple color D
#define lyellow color E



using namespace std;

  void blink()
{
      cout<<"\n\n\t\t Do u want to Practise"<<endl;
          int m;
          for(m=10;m<15;m++)
        {
            system("color green");
            system("CLS");
            Sleep(1000);
            cout<<"\n\n\t\t Enter 'Y' for YES or 'N' for NO"<<endl;	 
			Sleep(1000);
        }
}
 
   int main()
{
	 char s[100];
	  cin.getline(s,100); // Enter a matching string which u want to find in STL library
	  
	  char ch;
	  
	  string g1,g2,g3;
	  
	  system("color 02");
	     
	     // Condition for equivalent push_back() function keywords
	     
	    if(strcmp(s,"push")==0 || strcmp(s,"push_back")==0 || strcmp(s,"pushback")==0 || strcmp(s,"push_back()")==0)
	  {
	  	     // Shows the entered string
	  	  cout<<"\n\tYou entered string :";
           cout<<s<<endl;
       
          
          Sleep(2000); // Hold on Screen 
          
          // Definition of STL keyword find mactching with input string
	  	  cout<<"\n\n push_back() function is used to push elements into a vector from the back . The new value is inserted into vector at end and size of container is increased by 1 ."<<endl;
          
		  Sleep(5000);
		  
		    // Synatx of STL keyword
		  cout<<"\n\t\t\t\t\tSyntax :- push_back(value);"<<endl;
		  
		  Sleep(2000);
		  
		   // Example case with matching keyword
		  cout<<"\nExample :"<<endl;
		  cout<<"\n\t\t vector< int > v ;"<<endl;
		  cout<<"\n\t\t v.push_back(1);"<<endl;
		  cout<<"\n\t\t v.push_back(2);"<<endl;
		  cout<<"\n\t\t for(auto it = v.begin() ; it!=v.end() ; it++)"<<endl;
		  cout<<"\n\t\t\t cout<<*it ;"<<endl;
		  
		   Sleep(2000);
		   
		    // Practise Section with matching STL keyword
		   cout<<"\n\n\t\t\t\t\t\t\t\t Do u want to Practise ?"<<endl;
		   
		   system("color 01"); // Blue color for 2 seconds after the introduction of STL keyword
		   Sleep(2000);
		   
		    system("color 02");
		    
		     // Now, asks the user choice for practise "yes" or "no"
		   cout<<"\n\n\t\t Enter 'Y' for YES or 'N' for NO :\t";	 
		   
		   // Get the character for users choice
		    cin>>ch;
		    
			
		      // If users wants to practise he enters 'y' or 'Y'
		     if(ch=='Y' || ch=='y')
		   {
		    	system("color 06"); // Yellow color for 2 seconds if users choice is yes
		   	     Sleep(2000);
		   	 
		   	    system("color 02");// Back to original color i.e. green
		   	 
		   	  // Displaying problem statement 
		   	  cout<<"\n\n\t\t\t\t\t\t\tPROBLEM STATEMENT"<<endl;
		   	  Sleep(2000);// A 2 second gap
		   	  
		   	    // Problem Statement for practise
		   	  cout<<"\n\n\tDeclare a vector 'v' and push the value 1 in the vector ."<<endl;
		   	  Sleep(3000);// A 3 seconds gap
		   	  
		   	   // Here is your proble, , fill in the blanks type
		   	  cout<<"\n\n\t\t// Declare the vector"<<endl;
		   	  Sleep(1000); // A 1 second gap
		   	   cout<<"\n\t\t\tvector<_____>_;"<<endl;
		   	   cout<<"\n\t\t\tv______(1);"<<endl;
		   	   Sleep(2000);
		   	   
		   	     // Now , fill keyword for gap 1
		   	   cout<<"\n\n\t\t\tEnter the keyword to be filled in gap 1 :\t";
		   	    cin>>g1;
		   	    
		   	    // Now, fill keyword for gap 2
		   	     cout<<"\n\t\t\tEnter the keyword to be filled in gap 2 :\t";
		   	    cin>>g2;
		   	    
		   	    // Now, fill keyword for gap 3
		   	     cout<<"\n\t\t\tEnter the keyword to be filled in gap 3 :\t";
		   	    cin>>g3;
		   	    
		   	    Sleep(2000);// After filling choice a gap for 3 seconds
		   	    
		   	        // If all 3 anwers are correct 
		   	       if(g1=="int" && g2 =="v" && g3==".pushback")
		   	     {
		   	          system("color A"); // Light Green color for correct answer
						cout<<"\n\n\n\t\t\t\t\t\t\t\t /";	
					  cout<<"\n\t\t\t\t\tCorrect answer \t\tV"<<endl;
					   Sleep(3000);
		   	    }
		   	    
		   	     // If either of answer is wrong
		   	       else
		   	     {
		   	     	system("color 04");// Red color for wrong answer
					  cout<<"\n\n\t\t\t\t\t\tWrong Answer X"<<endl;
					    Sleep(3000);
					    
					      // Display all correct answers if ur answer is wrong
					    cout<<"\n\n\t\tCorrect Answers are :"<<endl;
					    cout<<"\n\n\t\tGap 1 : int"<<endl;
					    cout<<"\n\n\t\tGap 2: v"<<endl;
					    cout<<"\n\n\t\tGap 3: .pushback"<<endl;
					    Sleep(3000);
					     exit(0);
		         }
		}
		
		     // In other case if user does not wants to practise exit
		       else
			{
				exit(0);
			}
	  }
	  
	
	  
	    if(strcmp(s,"pop")==0 || strcmp(s,"pop_back")==0 || strcmp(s,"popback")==0 || strcmp(s,"pop_back()")==0)
	  {
	  	  cout<<"\n\tYou entered string :";
          cout<<s<<endl;
       
          
          Sleep(2000);
	  	  cout<<"\n\npop_back() function is used to remove element from the back of vector . Size of container is reduced by 1 ."<<endl;
          cout<<"\n\t\t\t\t\tSyntax :- pop_back();"<<endl;
		  cout<<"\nExample :"<<endl;
		  cout<<"\n\t\t vector< int > v ;"<<endl;
		  cout<<"\n\t\t v.push_back(1);"<<endl;
		  cout<<"\n\t\t v.push_back(2);"<<endl;
		  cout<<"\n\t\t v.pop_back();"<<endl;
		   cout<<"\n\nNow , the vector v will only cointain element 1 " <<endl;  	
	  }
	  
	  if(strcmp(s,"gcd")==0 || strcmp(s,"hcf")==0 || strcmp(s,"_gcd")==0 || strcmp(s,"__gcd")==0)
	{
		cout<<"\n\tYou entered string :";
           cout<<s<<endl;
       
          
          Sleep(2000);
		cout<<"\n\ngcd function is used to find the greatest common divisor among two numbers"<<endl;
		    
          Sleep(5000);
		 cout<<"\n\tSyntax:-__gcd(a,b)"<<endl;
		      
          Sleep(2000);
		  cout<<"\n\tHere, a and b are two numbers whose gcd we need to find"<<endl;
		   cout<<"\n\tExample :"<<endl;
		    cout<<"\n\t\t gcd( 2,4)"<<endl;
		     cout<<"\n Output will be : 2"<<endl;
	}
	
	 if(strcmp(s,"map")==0)
   {
   	cout<<"\n\tYou entered string :";
           cout<<s<<endl;
       
          
          Sleep(2000);
	 	cout<<"\n\nMap is a cointainer in cpp STL which stores elements in key and their mapping value pairs. Key for mapping values are unique in map"<<endl;
	 	     
          Sleep(5000);
		   cout<<"\n\tSyntax:- map<data_type 1 , data_type 2>alias_name;"<<endl;
		      
          Sleep(2000);
	 	    cout<<"\n\tHere, data_type is data type for key elements and data_type 2 is data type for mapping values"<<endl;
	 	     cout<<"\n\tExample:"<<endl;
	 	       cout<<"\n\t\t map<char,int>m;"<<endl;
   }
	 
	if(strcmp(s,"map insert")==0 || strcmp(s,"map_insert")==0 || strcmp(s,"insert map")==0)
  {
  	cout<<"\n\tYou entered string :";
           cout<<s<<endl;
       
          
          Sleep(2000);
     cout<<"\n\nThe map::insert() is a built-in function in C++ STL which is used to insert elements with a particular key in the map container."<<endl;
          
          Sleep(5000);
       cout<<"\n\t Synatx:- map_name({value 1,value 2});"<<endl;
          
          Sleep(2000);
         cout<<"\n\t Here, value 1 is the key value and value 2 is the mapped value"<<endl;
           cout<<"\n\t Example :"<<endl;
             cout<<"\n\t\t map<char,int> m;"<<endl;
               cout<<"\n\t\t m.insert({'a',97});"<<endl;
  } 
	  getch();
}
