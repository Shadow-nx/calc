#include <iostream>
#include <locale.h>

using namespace std;

int main(int argc,char *argv[])
{
setlocale(LC_ALL,"RUS");	
char choice='y';	
while(choice=='y'){
    int op1,op2;	
    char x;	
       do{
            cout<<"Выберите пожалуйста одну из операций[+.-.*,/,%,^,!,&,|,<,>]:"<<endl;
            cin>>x;
         }while(x!='+' && x!='-' && x!='*' && x!='/' && x!='%' && x!='^' && x!='!' && x!='&' && x!='|' && x!='<' && x!='>');
         if(x=='+' || x=='-' || x=='*' || x=='/' || x=='%' || x=='^'|| x=='>' || x=='<' || x=='|' || x=='&')
         {
            cout<<"Введите первоое число:"<<endl;
            cin>>op1;
            cout<<"Введите второе число:"<<endl;
            cin>>op2;
               if(cin.good())
		       {  
                  switch(x)
		             {
                        case '+':cout<<"Сумма:"<<(op1+op2)<<endl;
                           break;
                        case '-':cout<<"Разность:"<<(op1-op2)<<endl;
                           break;
                        case '*':cout<<"Произведение:"<<(op1*op2)<<endl;
                           break;
                        case '/':
                           if (op2!=0)
				              cout<<"Частное:"<<(double)op1/(double)op2<<endl;
                           else
                              cerr<<"Ошибка:на 0 делить нельзя!"<<endl;
                           break;
                        case '%':cout<<"Модуль:"<<(op1%op2)<<endl;
			               break;
			            case '^':
			            	  for(int i=0,j=op1;i<op2-1;i++)
			            	     op1*=j;
						      cout<<"Возведение в степень:"<<op1<<endl;
			               break;
			            case '&':cout<<"Побитовое И:"<<(op1&op2)<<endl;
			               break;
			            case '<':
			   	           if(op2>=0) 	   
			                  cout<<"Побитовый циклический сдвиг влево:"<<(op1<<op2)<<endl;
			               else
					          cerr<<"Некорректные данные"<<endl;  
			               break;
			            case '>':
			               if(op2>=0)
			                  cout<<"Побитовый циклический сдвиг вправо:"<<(op1>>op2)<<endl;
			               else
			                  cerr<<"Некорректные данные"<<endl;
			               break; 
			            case '|':cout<<"Побитовое ИЛИ:"<<(op1|op2)<<endl;
			               break;
			            default:cerr<<"Ошибка"<<endl;               	   	       
                      }
                }
               else
               {
			           cin.clear();
			       cout<<"Некорректные данные"<<endl;
		       }
		   }
		   if(x=='!')
		   {
		      cout<<"Введите пожалуйста оператор:"<<endl;
		      cin>>op1;
		         switch(x)
		         {
		      	    case '!':cout<<(!op1)<<endl;
		      	       break;
		      	    default:
				       cerr<<"Ошибака"<<endl;  
			     }
		    }
            do{
               cout<<"Если вы хотите продолжить введите Y,если закончить введите N"<<endl;
               cin>>choice;
              }while(choice!='y'&&choice!='n');
}
cout<<"До свидания!"<<endl;
return 0;		
}
