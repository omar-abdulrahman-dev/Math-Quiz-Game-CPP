#include<iostream>
#include<string>
#include<cstdlib>
#include<cmath>
#include<ctime>

using namespace std;

enum enquestionlevel{ easy = 1 , mid = 2 , hard = 3, mix = 4};
enum enoperationtype{ add = 1 , sub = 2 , mult = 3 , divide = 4 , mix1 = 5};

int readquestionnumber()
{
  int number; 

  cout<<"how many question do you want to answer ? "<<endl;
  cin>>number;
 
  return number;
}

int RandomNumber(int from, int to)
{
    return rand() % (to - from + 1) + from;
}
struct stquestionlevel{

    int number1easy = RandomNumber(1,10);
    int number2easy = RandomNumber(1,10);

    int number1mid = RandomNumber(50,199);
    int number2mid = RandomNumber(50,199);

    int number1hard = RandomNumber(333,999);
    int number2hard = RandomNumber(33,999);

};
enoperationtype getRandomNumbertype()
{
    return (enoperationtype)RandomNumber(1,4);
}
enquestionlevel readquestionlevel()
{
    int questionlevel;

    cout <<" enter questions level : [1] easy , [2] mid , [3] hard , [4] mix? " <<endl;
    cin>>questionlevel;

    return (enquestionlevel)questionlevel;
}
string questionleveltostring(enquestionlevel z)
{
   if(z==enquestionlevel::easy)
     return "easy";
   else if (z == enquestionlevel::hard)
     return "hard";
   else if (z == enquestionlevel::mix)
     return "mix";
   else
     return "mid";

     
}
enoperationtype readquestiontype()
{
   int questiontype;

   cout<<" enter question type : [1] add , [2] sub , [3] mult , [4] div , [5] mix? "<<endl;
   cin>>questiontype;
  
   return (enoperationtype)questiontype;
}
string questiontypetostring(enoperationtype x)
{
   if(x == enoperationtype::add)
      return "add";
   else if(x == enoperationtype::sub)
      return "sub";
   else if(x == enoperationtype::mult)
      return "mult";
   else if(x == enoperationtype::mix1)
      return "mix1";
   else 
      return "divide";

}
bool operationadd(enquestionlevel x )
{
    stquestionlevel questionlevel ;
    int y = 0 ;
    int result;
    if(x == enquestionlevel::easy)
    {
        result = questionlevel.number1easy+questionlevel.number2easy;

       cout<< questionlevel.number1easy<<endl<<"+"<<questionlevel.number2easy<<endl<<"____________"<<endl;
    }
    else if (x == enquestionlevel::mid)
    {
        result = questionlevel.number1mid+questionlevel.number2mid;

       cout<< questionlevel.number1mid<<endl<<"+"<<questionlevel.number2mid<<endl<<"____________"<<endl;
    }
    else
    {
       result = questionlevel.number1hard+questionlevel.number2hard;

       cout<< questionlevel.number1hard<<endl<<"+"<<questionlevel.number2hard<<endl<<"____________"<<endl;
    }
       cin>>y;
       if(result==y)
       {
         cout<<" right answer : -)\n\n\n\n";
         return true;
       }
      else
      {
         cout<<" wrong answer : -(\n\n\n\n";
         return false;
      }
}  
bool operationsub(enquestionlevel x )
{
    stquestionlevel questionlevel ;
    int y = 0 ;
    int result;
    if(x == enquestionlevel::easy)
    {
        result = questionlevel.number1easy-questionlevel.number2easy;

       cout<< questionlevel.number1easy<<endl<<"-"<<questionlevel.number2easy<<endl<<"____________"<<endl;
    }
    else if (x == enquestionlevel::mid)
    {
        result = questionlevel.number1mid-questionlevel.number2mid;

       cout<< questionlevel.number1mid<<endl<<"-"<<questionlevel.number2mid<<endl<<"____________"<<endl;
    }
    else
    {
       result = questionlevel.number1hard-questionlevel.number2hard;

       cout<< questionlevel.number1hard<<endl<<"-"<<questionlevel.number2hard<<endl<<"____________"<<endl;
    }
       cin>>y;
       if(result==y)
       {
         cout<<" right answer : -)\n\n\n\n";
         return true;
       }
      else
      {
         cout<<" wrong answer : -(\n\n\n\n";
         return false;
      }
}  
bool operationmult(enquestionlevel x )
{
    stquestionlevel questionlevel ;
    int y = 0 ;
    int result;
    if(x == enquestionlevel::easy)
    {
        result = questionlevel.number1easy*questionlevel.number2easy;

       cout<< questionlevel.number1easy<<endl<<"*"<<questionlevel.number2easy<<endl<<"____________"<<endl;
    }
    else if (x == enquestionlevel::mid)
    {
        result = questionlevel.number1mid*questionlevel.number2mid;

       cout<< questionlevel.number1mid<<endl<<"*"<<questionlevel.number2mid<<endl<<"____________"<<endl;
    }
    else
    {
       result = questionlevel.number1hard*questionlevel.number2hard;

       cout<< questionlevel.number1hard<<endl<<"*"<<questionlevel.number2hard<<endl<<"____________"<<endl;
    }
       cin>>y;
       if(result==y)
       {
         cout<<" right answer : -)\n\n\n\n";
         return true;
       }
      else
      {
         cout<<" wrong answer : -(\n\n\n\n";
         return false;
      }
}  
bool operationdivid(enquestionlevel x )
{
    stquestionlevel questionlevel ;
    int y = 0 ;
    int result;
    if(x == enquestionlevel::easy)
    {
        result = questionlevel.number1easy/questionlevel.number2easy;

       cout<< questionlevel.number1easy<<endl<<"/"<<questionlevel.number2easy<<endl<<"____________"<<endl;
    }
    else if (x == enquestionlevel::mid)
    {
        result = questionlevel.number1mid/questionlevel.number2mid;

       cout<< questionlevel.number1mid<<endl<<"/"<<questionlevel.number2mid<<endl<<"____________"<<endl;
    }
    else
    {
       result = questionlevel.number1hard/questionlevel.number2hard;

       cout<< questionlevel.number1hard<<endl<<"/"<<questionlevel.number2hard<<endl<<"____________"<<endl;
    }
       cin>>y;
       if(result==y)
       {
         cout<<" right answer : -)\n\n\n\n";
         return true;
       }
      else
      {
         cout<<" wrong answer : -(\n\n\n\n";
         return false;
      }
}  
bool operationmix(enquestionlevel x )
{
  if( x == enquestionlevel::mix)
   {
      x = (enquestionlevel)RandomNumber(1,3);

   }
           enoperationtype questiontype =  (enoperationtype)RandomNumber(1,4);
      if(questiontype == enoperationtype::add)
          return operationadd(x);
      else if(questiontype == enoperationtype::sub)
          return operationsub(x);
      else if(questiontype == enoperationtype::mult)
          return operationmult(x);
      else
          return operationdivid(x);

     }  

void printresultfinal(enquestionlevel x , enoperationtype questiontype, int rightquestion , int wrongquestion)
{
   cout<<"_________________________________________________________\n\n";

   if(rightquestion>wrongquestion)
   {
      cout<<"              final result is: pass                         \n\n";
      system("color 2a"); 

   }
   else
   {
      cout<<"              final result is: fail                         \n\n";
      system("color 4c"); 

   }

   cout<<"_________________________________________________________\n\n\n\n";

   cout<<" question level : "<<questionleveltostring(x)<<endl;
   cout<<" question type :  "<<questiontypetostring(questiontype)<<endl;
   cout<<" number of right answer : "<< rightquestion<<endl;
   cout<<" number of wrong answer : "<<wrongquestion<<endl;
   cout<<"_________________________________________________________\n\n";

}

void playmathquestion()
{
  int rightquestion = 0 ; 
  int wrongquestion = 0 ; 

  int number = readquestionnumber();
  enquestionlevel x = readquestionlevel();
  
  enoperationtype questiontype = readquestiontype();

    for(int i = 1 ; i<=number ; i++)
    {
       cout<<" question ["<<i<<"/"<<number<<"]  : \n\n\n";
       if(questiontype == enoperationtype::add)
       {
            if(operationadd(x))
            {
               rightquestion++;
               system("color 2a"); 
            }
            else
            {
               wrongquestion++;
               system("color 4c"); 
            }

       }
       else if(questiontype == enoperationtype::sub)
       {
            if(operationsub(x))
            {
               rightquestion++;
                system("color 2a"); 
            }
            else
            {
               wrongquestion++;
                system("color 4c"); 
            }
       }
       else if(questiontype == enoperationtype::mult)
       {
            if(operationmult(x))
            {
               rightquestion++;
                system("color 2a"); 
            }
            else
            {
               wrongquestion++;
                system("color 4c"); 
            }

       }
       else if(questiontype == enoperationtype::mix1)
       {
            
           if(operationmix(x))
             {
                rightquestion++;
                system("color 2a"); 
             }

           else
            {
                wrongquestion++;
                system("color 4c"); 
            }
         }
         else 
         {
           if(operationdivid(x))
           {
              rightquestion++;
              system("color 2a"); 
           }

          else
          {
               wrongquestion++;
                system("color 4c"); 
            
          }

       }

    }
   
    printresultfinal(x,questiontype,rightquestion,wrongquestion);
}

void startmathplay()
{
   char playagain;
   do
   {
     system("cls");      
     system("color 0F"); 

     playmathquestion();
     
     cout<<" do you want to play again ? [y]/[n]"<<endl;
     cin>>playagain;
      
   } while (playagain == 'y' || playagain == 'Y');
   
}
int main()
{
	
	srand((unsigned)time(NULL));

startmathplay();
	return 0;
}