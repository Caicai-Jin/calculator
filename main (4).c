#include <stdio.h>      //C Standard Library for input/output functions
#include <stdlib.h>     //C Standard Library for some utility functions,
                        //such as rand()
#include <time.h>       //C standard Library for date and time functions
#include <math.h>  


int main(void){
        
   
    
    char opt;
    char ope;
    int stop=0;
    int stopbranch=0;
    double num1;
    double num2;
    int a;
    int b;
    int selectA=0;
    double answer;
    char c;

	
	printf("Welcome to the Command-Line Calculator\n"
           "Developer: Jin Cai\n"
           "Version:1\n"
           "Date: 2021/10/5\n"
           "-------------------------\n");
    printf("Select one from the following items\n");

	  printf("B) - Binary Mathematical Operations, such as addition and subtraction\n"
	         "U) - Unary Mathematical Operations, such as square root, and log\n"
             "A) - Advances Mathemetical Operations, using variables, arrays\n"
             "V) - Define variable and assign them values\n"
             "X) - Exit\n");

	 
      
      
      while(stop==0){
          if(selectA==0){
              while(opt==0){
                  printf("Invalid.Please select your option from B,U,A,V,X.\n");
              }
          }
          scanf(" %c",&opt);
          if(opt=='B'||opt=='b'){
              printf("Please enter your first number\n");
              scanf("%lf",&num1);
              while(stopbranch==0){
                  printf("Please select one operation from +,-,*,/,%%,^\n");
                  scanf(" %c",&ope);
                  if(ope=='+'){
                  printf("Please enter your second number\n");
                  scanf("%lf",&num2);
                  answer=num1+num2;
                  printf("The answer is %lf\n", answer);
                  stopbranch=1;
                 }
                 else if(ope=='-'){
                  printf("Please enter your second number\n");
                  scanf("%lf",&num2);
                  answer=num1-num2;
                  printf("The answer is %lf\n", answer);
                  stopbranch=1;
                 }
                 else if(ope=='*'){
                  printf("Please enter your second number\n");
                  scanf("%lf",&num2);
                  answer=num1*num2;
                  printf("The answer is %lf\n", answer);
                  stopbranch=1;
                 }
                 else if(ope=='/'){
                     while(stopbranch==0){
                         printf("Please enter your second number\n");
                         scanf("%lf",&num2);
                         if(num2!=0){
                             answer=num1/num2;
                             printf("The answer is %lf\n", answer);
                             stopbranch=1;
                         }
                         else{
                             printf("Invalid! Please don't enter 0 for the second as demoninator can't be 0\n");
                             
                         }
                     }
                         
                 }
                 else if(ope=='%'){
                     printf("Please enter your second number\n");
                     scanf("%lf",&num2);
                     num1=a;
                     num2=b;
                     answer=a%b;
                     printf("The answer is %lf\n", answer);
                     stopbranch=1;
                 }
                 else if(ope=='^'){
                     printf("Please enter your second number\n");
                     scanf("%lf",&num2);
                     while(stopbranch=0){
                         if(num1!=0&&num2!=0){
                             answer=pow(num1,num2);
                             printf("The answer is %lf\n", answer);
                             stopbranch=1;
                         }
                         else if(num2==0&&num1==0){
                             printf("Invalid input.\n");
                         }
                         else if(num1==0&&num2!=0){
                             answer=0;
                             printf("The answer is %lf\n", answer);
                             stopbranch=1;
                         }
                         else if(num1!=0&&num2==0){
                             answer=1;
                             printf("The answer is %lf\n", answer);
                             stopbranch=1;
                         }
                         
                     }
                     
                 }
                 
          }
          stopbranch=0;
          printf("Select option from B,U,A,X,V if want to use the calculator again\n");
          selectA=0;
     } //B bracket
     
     else if(opt=='U'||opt=='u'){
         while(stopbranch==0){
             printf("Please select one operation from S(square root), L(logarithm), E(exponential), C(ceil), F(floor)\n");
             scanf(" %c",&ope);
             if(ope=='S'||ope=='s'){
                 while(stopbranch==0){
                     printf("Please enter a non-negative number\n");
                     scanf("%lf",&num1);
                     stopbranch=1;
                     if(num1<0){
                         stopbranch=0;
                     }
                     else{
                         answer=sqrt(num1);
                         printf("The answer is %lf\n", answer);
                     }
                     
                 }
                  
              }
              else if(ope=='L'||ope=='l'){
                  while(stopbranch==0){
                      printf("Please enter a positive number\n");
                      scanf("%lf",&num1);
                      stopbranch=1;
                      if(num1<=0){
                          stopbranch=0;
                          printf("Invalid number. Please enter a number greater than 0.\n");
                      }
                      else{
                      answer=log(num1);
                      printf("The answer is %lf\n", answer);
                      }
                      
                  }
             
              }
              else if(ope=='E'||ope=='e'){
                  printf("Please enter a number\n");
                  scanf("%lf",&num1);
                  answer=exp(num1);
                  printf("The answer is %lf\n", answer);
                  stopbranch=1;
              }
              else if(ope=='C'||ope=='c'){
                  printf("Please enter a number\n");
                  scanf("%lf",&num1);
                  answer=ceil(num1);
                  printf("The answer is %lf\n", answer);
                  stopbranch=1;
              }
              else if(ope=='F'||ope=='f'){
                  printf("Please enter a number\n");
                  scanf("%lf",&num1);
                  answer=floor(num1);
                  printf("The answer is %lf\n", answer);
                  stopbranch=1;
              }
              else{
                  printf("Invalid input.\n");
              }
        }//while bracket
        printf("Select option from B,U,A,X,V if want to use the calculator again\n");
        stopbranch = 0;
        selectA=0;
        
     }//U bracket
     else if(opt=='X'||opt=='x'){
              stop=1;
              printf("Thanks for using my Simple Calculator. Hope to see you soon again, Goodbye!\n");
     }//X bracket
     else if(opt=='A'||opt=='a'){
         selectA=1;
         while(stopbranch==0){
             printf("B) - Binary Mathematical Operations, such as addition and subtraction\n"
	                "U) - Unary Mathematical Operations, such as square root, and log\n"
	                "X) - Exit\n");
	         printf("Please select your option from above\n");
	         scanf(" %c",&opt);
	         if(opt=='B'||opt=='b'||opt=='U'||opt=='u'){
	             stopbranch=1;
	         }
	         else if(opt=='X'||opt=='x'){
	             stopbranch=1;
	             selectA=0;
	             printf("Please select your option from B,U,A,V,X\n");
	         }
	         else{
	             printf("Invalid input\n");
	         }
         }
         stopbranch=0;
     } //A bracket
     else if(opt=='V'||opt=='v'){
         while(stopbranch==0){
             printf("Please enter the name of the variable between 'a' to 'e' ):\n");
             scanf(" %c",&c);
             if(c=='a'||c=='b'||c=='c'||c=='d'||c=='e'){
                  printf("Please enter a variable for assigning to the variable\n");
                  scanf("%lf",&num1);
                  printf("Variable %c is set to %lf\n", c,num1);
                  stopbranch=1;
             }
             else{
                 printf("Invalid input.\n");
             }
             
          }
          printf("Select option from B,U,A,X,V if want to use the calculator again\n");
          stopbranch=0;
          selectA=0;
      }
      else{
          printf("Invalid input.\n"
                 "Please select your option from B,U,A,V,X\n");
      }
    
    }
    return 0;
 }

    

      
      
















