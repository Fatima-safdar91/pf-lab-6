#include<iostream>
using namespace std;

char calculategrade(int marks);
main ()
{ 
    char result;
    int marks;

cout << "enter your marks";
cin >> marks;
result = calculategrade( marks );
cout << "your grade is:" << result;


}
char calculategrade(int marks)
{
    char grade;
   if (marks < 50)
   {
     grade = 'F';
   }  
    else  if (marks > 50 && marks < 60) 
   {
       grade = 'E';
   }  
    else  if (marks > 61 && marks < 70) 
   {
       grade = 'D';
   }  
    else  if (marks > 71 && marks < 80) 
   {
       grade = 'C';
   } 
    else  if (marks > 81 && marks < 85) 
   {
       grade = 'B';
   }  
    else  if (marks > 85) 
   {
       grade = 'A';
   }   
   else
   {
          grade = 'P';
   }
       return grade; 
}