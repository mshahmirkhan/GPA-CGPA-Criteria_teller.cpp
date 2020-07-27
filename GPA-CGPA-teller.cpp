#include <stdio.h>
#include <stdlib.h>
#include<iostream>
#include <conio.h>

using namespace std;
main()
{
	char repeat;
	cout<<"\n\n\n\t\t\t *********************";
	cout<<"\n\n\t\t\t *    GPA  TELLER    *";
	cout<<"\n\n\t\t\t *********************";
	
	do{//for repretition

	//universities names.
	
	cout<<"\n\n\n\n\t\t   SELECT ANY ISLAMABAD UNIVERSITY.";
	cout<<"\n\n\n  1:-  NUML\t\t\t\t\t\t2:-   BAHRIA";
	cout<<"\n\n  3:-  CUST\t\t\t\t\t\t4:-   QUAID-I-AZAM";
	cout<<"\n\n  5:-  SZABIST\t\t\t\t\t\t6:-   NDU";
	cout<<"\n\n  7:-  COMSETS\t\t\t\t\t\t8:-   NUST";
	cout<<"\n\n  9:-  IIUI\t\t\t\t\t\t10:-  FAST";
	cout<<"\n\n  11:- IQRA\t\t\t\t\t\t12:-  IST";
	cout<<"\n\n  13:- RIPHAH INTERNATIONAL";
	
	
	//select any university
	
	int s;
	cout<<"\n\n\n\nSETECT UNIVERSITY  : ";                                               
	cin>>s;
	 int a=0,b=0,c[9]={0},j=0,shah=0;
	 float l[9]={0},e=0,f=0,g=0,d[9]={0};
	 
	 
	 
	switch(s)
	{
		
		case 1://numl
			
			
				
		//option
		    cout<<"\n\n\t1 =>  CALCULATE GPA";
			cout<<"\n\t2 =>  CALCULATE CGPA";
			cout<<"\n\t3 =>  CHECK FORMULA";
			
			cout<<"\n\nWHAT YOU WANT TO DO : ";
			
			cin>>a;
			
			switch(a)
			{
				case 1://CALCULATE GPA
				{
				int subject=0;
				cout<<"HOW MANY SUBJECT :";
				cin>>subject;
					for( int i=0;i<subject;i++)
                      	{
                      		j++;
                      		cout<<"\n\n\t"<<j<<":-  SUBJECT MARKS  : ";
                      		cin>>c[i];
                      		cout<<"\t\t   SUBJECT CREDIT HOURS : ";
                      		cin>>d[i];
                      		
                      		if(c[i]>=90)
                      		{
                      			l[i]=4*d[i]; 
								cout<<"\n\t\t\t\t\t GRADE  : A1";                             			
							  }
							  
							else if  ( (c[i]>=80)&&(c[i]<=89) )
							{
								l[i]=4*d[i];
								  cout<<"\n\t\t\t\t\t GRADE  : A2";        
							}
							  
							else if ( (c[i]>=77)&&(c[i]<=79) )
							{
								l[i]=3.66*d[i];
								  cout<<"\n\t\t\t\t\t GRADE  : A3";        
							}
							  
							else if ( (c[i]>=74)&&(c[i]<=76) )
							{
								l[i]=3.33*d[i];
								  cout<<"\n\t\t\t\t\t GRADE  : B1";        
							}
							  
							else if ( (c[i]>=70)&&(c[i]<=73) )
							{
								l[i]=3*d[i];
								  cout<<"\n\t\t\t\t\t GRADE  : B2";        
							}
							  
							else if ( (c[i]>=67)&&(c[i]<=69) )
							{
								l[i]=2.66*d[i];
								  cout<<"\n\t\t\t\t\t GRADE  : B3";        
							}
							  
							else if ( (c[i]>=64)&&(c[i]<=66) )
							{
								l[i]=2.33*d[i];
								  cout<<"\n\t\t\t\t\t GRADE  : C1";        
							}
							  
							else if ( (c[i]>=60)&&(c[i]<=63) )
							{
								l[i]=2*d[i];
								  cout<<"\n\t\t\t\t\t GRADE  : C2";        
							}
							  
							else if ( (c[i]>=50)&&(c[i]<=59) )
							{
								l[i]=1.5*d[i];
								  cout<<"\n\t\t\t\t\t GRADE  : D";        
							}
						
							else if ( c[i]<=49 )
							{
								l[i]=0*d[i];
								  cout<<"\n\t\t\t\t\t GRADE  : F";        
								
							}
							//e=e+l[i];
							//cout<<e;
						}//FOR
						  
						  e=l[0]+l[1]+l[2]+l[3]+l[4]+l[5]+l[6]+l[7]+l[8];
						  f=d[0]+d[1]+d[2]+d[3]+d[4]+d[5]+d[6]+d[7]+d[8];
						 // cout<<e;//just to check e value****************************************
						  //cout<<f;//just to check e value
						  g=e/f;
						  cout<<"\n\n\n\tGPA : "<<g;//gpa 
						  
						  
	 
						  //repeater ==========================
						  
						  
						  
						  cout<<"\n\n\n\n\t IF YOU WANT TO CONTINUE PRESS  [Y] :";
						  cin>>repeat;						  
						  
						  
						  if (repeat<89)
						  {
						  	cout<<"\n\n\n\n\n\t\t\t\t\t   CREATED BY : MUHAMMAD SHAHMIR KHAN\a";
						  	getch();
						  }
						  
						  if (repeat>=90 && repeat<121)
						  {
						  	cout<<"\n\n\n\n\n\t\t\t\t\t   CREATED BY : MUHAMMAD SHAHMIR KHAN\a";
						  	getch();
						  }
						  
						  if (repeat>=122)
						  {
						  	cout<<"\n\n\n\n\n\t\t\t\t\t   CREATED BY : MUHAMMAD SHAHMIR KHAN\a";
						  	getch();
						  }
						  
						  
						  
				
				
					break;
					}
			 //=========================================================================================================
				
	
				case 2://CALCULATE CGPA
				
{
					    int z,j=0;
					    float x[9]={0},w[9]={0},m[9]={0},n=0,r=0,o=0;
					
						cout<<"\n\n\t\t\t\a**********************";
	                    cout<<"\n\n\t\t\t*   CALCULATE CGPA   *";
                      	cout<<"\n\n\t\t\t**********************";
                      	
                      	cout<<"\n\nENTER SEMESTER NUMBER : ";
                      	cin>>z;
                      	
                      	for(int i=0;i<z;i++)
                      	{
                      		j++;
                      		cout<<"\n\n\t"<<j<<":-  SEMESTER GPA : ";
                      		cin>>x[i];
                      		cout<<"\n\t\tSEMESTER CREDIT HOURS : ";
                      		cin>>w[i];
                      		
                      		m[i]=x[i]*w[i];
						  }
						  r=m[0]+m[1]+m[2]+m[3]+m[4]+m[5]+m[6]+m[7]+m[8];
						  n=w[0]+w[1]+w[2]+w[3]+w[4]+w[5]+w[6]+w[7]+w[8];
						  o=r/n;
						  cout<<"\n\n    YOUR CGPA IS  "<<o;
						  
						  
	 
						  //repeater ==========================
						  
						  
						  
						  cout<<"\n\n\n\n\t IF YOU WANT TO CONTINUE PRESS  [Y] :";
						  cin>>repeat;						  
						  
						  
						  if (repeat<89)
						  {
						  	cout<<"\n\n\n\n\n\t\t\t\t\t   CREATED BY : MUHAMMAD SHAHMIR KHAN\a";
						  }
						  
						  if (repeat>=90 && repeat<121)
						  {
						  	cout<<"\n\n\n\n\n\t\t\t\t\t   CREATED BY : MUHAMMAD SHAHMIR KHAN\a";
						  }
						  
						  if (repeat>=122)
						  {
						  	cout<<"\n\n\n\n\n\t\t\t\t\t   CREATED BY : MUHAMMAD SHAHMIR KHAN\a";
						  }
						  
						  
						  
				
				
                      	
                      	
				}
					break;

				
				//=========================================================================================================
				
				case 3://CHECK FORMULA
				
                    
				
                    cout<<"\n\n\t\t\t\a     *********************";
	                cout<<"\n\n\t\t\t     *   CHECK FORMULA   *";
                    cout<<"\n\n\t\t\t     *********************";
                    
                    cout<<"\n\n\n\t  ------------     \t    -----      \t         -------";
                    cout<<"\n\t   PECENTAGE     \t     GPA       \t          GRADE";
                    cout<<"\n\t  ------------     \t    -----      \t         -------";
                    
                    cout<<"\n\n\n\t  90%  -  100%     \t    4.00       \t           A1";
                    cout<<"\n\n\t   80% - 89%     \t    4.00                   A2";
                    cout<<"\n\n\t   77% - 79%     \t    3.66                   A3";
                    cout<<"\n\n\t   74% - 76%     \t    3.33                   B1";
                    cout<<"\n\n\t   70% - 73%     \t    3.00                   B2";
                    cout<<"\n\n\t   67% - 69%     \t    2.66                   B3";
                    cout<<"\n\n\t   64% - 66%     \t    2.33                   C1";
                    cout<<"\n\n\t   60% - 63%     \t    2.00                   C2";
                    cout<<"\n\n\t   50% - 59%     \t    1.50                   D";
                    cout<<"\n\n\t  49% AND LESS     \t    0.00                   F";
                      	
                      	
						 
	 
						  //repeater ==========================
						  
						  
						  
						  cout<<"\n\n\n\n\t IF YOU WANT TO CONTINUE PRESS  [Y] :";
						  cin>>repeat;						  
						  
						  
						  if (repeat<89)
						  {
						  	cout<<"\n\n\n\n\n\t\t\t\t\t   CREATED BY : MUHAMMAD SHAHMIR KHAN\a";
						  }
						  
						  if (repeat>=90 && repeat<121)
						  {
						  	cout<<"\n\n\n\n\n\t\t\t\t\t   CREATED BY : MUHAMMAD SHAHMIR KHAN\a";
						  }
						  
						  if (repeat>=122)
						  {
						  	cout<<"\n\n\n\n\n\t\t\t\t\t   CREATED BY : MUHAMMAD SHAHMIR KHAN\a";
						  }
						  
						  
						  
				
				
                  
				
					break;
				//=========================================================================================================
					
				default:
				     cout<<"\n\n\n\t\t(((((((((((((((  INVALID NUMBER  )))))))))))))))";
	 
	 
						  //repeater ==========================
						  
						  
						  
						  cout<<"\n\n\n\n\t IF YOU WANT TO CONTINUE PRESS  [Y] :";
						  cin>>repeat;						  
						  
						  
						  if (repeat<89)
						  {
						  	cout<<"\n\n\n\n\n\t\t\t\t\t   CREATED BY : MUHAMMAD SHAHMIR KHAN\a";
						  }
						  
						  if (repeat>=90 && repeat<121)
						  {
						  	cout<<"\n\n\n\n\n\t\t\t\t\t   CREATED BY : MUHAMMAD SHAHMIR KHAN\a";
						  }
						  
						  if (repeat>=122)
						  {
						  	cout<<"\n\n\n\n\n\t\t\t\t\t   CREATED BY : MUHAMMAD SHAHMIR KHAN\a";
						  }
						  			
		
				     
			}//inner switch
			
			
			break;
			
		//***************************************************************************************************************
		
		
		
		//***************************************************************************************************************
		
		
		case 2://bahria
		
		    //option
		    cout<<"\n\n\t1 =>  CALCULATE GPA";
			cout<<"\n\t2 =>  CALCULATE CGPA";
			cout<<"\n\t3 =>  CHECK FORMULA";
			
			cout<<"\n\nWHAT YOU WANT TO DO : ";
			
			cin>>a;
			
			switch(a)
			{
				case 1://CALCULATE GPA
				{
				int subject=0;
				cout<<"HOW MANY SUBJECT :";
				cin>>subject;
					for( int i=0;i<subject;i++)
                      	{
                      		j++;
                      		cout<<"\n\n\t"<<j<<":-  SUBJECT MARKS  : ";
                      		cin>>c[i];
                      		cout<<"\t\t   SUBJECT CREDIT HOURS : ";
                      		cin>>d[i];
                      		
                      		if(c[i]>=87)
                      		{
                      			l[i]=4*d[i]; 
								  cout<<"\n\t\t\t\t\t GRADE  : A";                             			
							  }
							  
							else if  ( (c[i]>=80)&&(c[i]<=86) )
							{
								l[i]=3.5*d[i];
								  cout<<"\n\t\t\t\t\t GRADE  : B+";        
							}
							  
							else if ( (c[i]>=72)&&(c[i]<=79) )
							{
								l[i]=3.00*d[i];
								  cout<<"\n\t\t\t\t\t GRADE  : B";        
							}
							  
							else if ( (c[i]>=66)&&(c[i]<=71) )
							{
								l[i]=2.5*d[i];
								  cout<<"\n\t\t\t\t\t GRADE  : C+";        
							}
							  
							else if ( (c[i]>=60)&&(c[i]<=65) )
							{
								l[i]=2.00*d[i];
								  cout<<"\n\t\t\t\t\t GRADE  : C";        
							}
							  
							else if ( (c[i]>=50)&&(c[i]<=60) )
							{
								l[i]=1.5*d[i];
								  cout<<"\n\t\t\t\t\t GRADE  : D";        
							}
				
							else if ( c[i]<=49 )
							{
								l[i]=0*d[i];
								  cout<<"\n\t\t\t\t\t GRADE  : F";        
								
							}
							//e=e+l[i];
							//cout<<e;
						}//FOR
						  
						  e=l[0]+l[1]+l[2]+l[3]+l[4]+l[5]+l[6]+l[7]+l[8];
						  f=d[0]+d[1]+d[2]+d[3]+d[4]+d[5]+d[6]+d[7]+d[8];
						 // cout<<e;//just to check e value****************************************
						  //cout<<f;//just to check e value
						  g=e/f;
						  
						  cout<<"\n\n\n\tGPA : "<<g;//gpa 
						  
	 
						  //repeater ==========================
						  
						  
						  
						  cout<<"\n\n\n\n\t IF YOU WANT TO CONTINUE PRESS  [Y] :";
						  cin>>repeat;						  
						  
						  
						  if (repeat<89)
						  {
						  	cout<<"\n\n\n\n\n\t\t\t\t\t   CREATED BY : MUHAMMAD SHAHMIR KHAN\a";
						  }
						  
						  if (repeat>=90 && repeat<121)
						  {
						  	cout<<"\n\n\n\n\n\t\t\t\t\t   CREATED BY : MUHAMMAD SHAHMIR KHAN\a";
						  }
						  
						  if (repeat>=122)
						  {
						  	cout<<"\n\n\n\n\n\t\t\t\t\t   CREATED BY : MUHAMMAD SHAHMIR KHAN\a";
						  }
						  
						  
				
				
					break;
			//=========================================================================================================
			}
				
				case 2://CALCULATE CGPA
				
{
					    int z,j=0;
					    float x[9]={0},w[9]={0},m[9]={0},n=0,r=0,o=0;
					
						cout<<"\n\n\t\t\t\a**********************";
	                    cout<<"\n\n\t\t\t*   CALCULATE CGPA   *";
                      	cout<<"\n\n\t\t\t**********************";
                      	
                      	cout<<"\n\nENTER SEMESTER NUMBER : ";
                      	cin>>z;
                      	
                      	for(int i=0;i<z;i++)
                      	{
                      		j++;
                      		cout<<"\n\n\t"<<j<<":-  SEMESTER GPA : ";
                      		cin>>x[i];
                      		cout<<"\n\t\tSEMESTER CREDIT HOURS : ";
                      		cin>>w[i];
                      		
                      		m[i]=x[i]*w[i];
						  }
						  r=m[0]+m[1]+m[2]+m[3]+m[4]+m[5]+m[6]+m[7]+m[8];
						  n=w[0]+w[1]+w[2]+w[3]+w[4]+w[5]+w[6]+w[7]+w[8];
						  o=r/n;
						  cout<<"\n\n    YOUR CGPA IS  "<<o;
						  
						  
	 
						  //repeater ==========================
						  
						  
						  
						  cout<<"\n\n\n\n\t IF YOU WANT TO CONTINUE PRESS  [Y] :";
						  cin>>repeat;						  
						  
						  
						  if (repeat<89)
						  {
						  	cout<<"\n\n\n\n\n\t\t\t\t\t   CREATED BY : MUHAMMAD SHAHMIR KHAN\a";
						  }
						  
						  if (repeat>=90 && repeat<121)
						  {
						  	cout<<"\n\n\n\n\n\t\t\t\t\t   CREATED BY : MUHAMMAD SHAHMIR KHAN\a";
						  }
						  
						  if (repeat>=122)
						  {
						  	cout<<"\n\n\n\n\n\t\t\t\t\t   CREATED BY : MUHAMMAD SHAHMIR KHAN\a";
						  }
						  
						  
						  
				
				
                      	
                      	
				}
					break;

				//=========================================================================================================
				
				case 3://CHECK FORMULA
				
                    cout<<"\n\n\t\t\t\a     *********************";
	                cout<<"\n\n\t\t\t     *   CHECK FORMULA   *";
                    cout<<"\n\n\t\t\t     *********************";
                    
                    cout<<"\n\n\n\t  ------------     \t    -----      \t         -------";
                    cout<<"\n\t   PECENTAGE     \t     GPA       \t          GRADE";
                    cout<<"\n\t  ------------     \t    -----      \t         -------";
                    
                    cout<<"\n\n\n\t  87%  -  100%     \t    4.00       \t           A";
                    cout<<"\n\n\t   80% - 86%     \t    3.50                   B+";
                    cout<<"\n\n\t   72% - 79%     \t    3.00                   B";
                    cout<<"\n\n\t   66% - 71%     \t    2.50                   C+";
                    cout<<"\n\n\t   60% - 65%     \t    2.50                   C";
                    cout<<"\n\n\t   50% - 60%     \t    1.50                   D";
                    cout<<"\n\n\t  49% AND LESS     \t    0.00                   F";
                      	
                     
	 
						  //repeater ==========================
						  
						  
						  
						  cout<<"\n\n\n\n\t IF YOU WANT TO CONTINUE PRESS  [Y] :";
						  cin>>repeat;						  
						  
						  
						  if (repeat<89)
						  {
						  	cout<<"\n\n\n\n\n\t\t\t\t\t   CREATED BY : MUHAMMAD SHAHMIR KHAN\a";
						  }
						  
						  if (repeat>=90 && repeat<121)
						  {
						  	cout<<"\n\n\n\n\n\t\t\t\t\t   CREATED BY : MUHAMMAD SHAHMIR KHAN\a";
						  }
						  
						  if (repeat>=122)
						  {
						  	cout<<"\n\n\n\n\n\t\t\t\t\t   CREATED BY : MUHAMMAD SHAHMIR KHAN\a";
						  }
						  
						  
				
				 	
                      					
					break;
				//=========================================================================================================
					
				default:
				    cout<<"\n\n\n\t\t(((((((((((((((  INVALID NUMBER  )))))))))))))))\n";
	 
	 
						  //repeater ==========================
						  
						  
						  
						  cout<<"\n\n\n\n\t IF YOU WANT TO CONTINUE PRESS  [Y] :";
						  cin>>repeat;						  
						  
						  
						  if (repeat<89)
						  {
						  	cout<<"\n\n\n\n\n\t\t\t\t\t   CREATED BY : MUHAMMAD SHAHMIR KHAN\a";
						  }
						  
						  if (repeat>=90 && repeat<121)
						  {
						  	cout<<"\n\n\n\n\n\t\t\t\t\t   CREATED BY : MUHAMMAD SHAHMIR KHAN\a";
						  }
						  
						  if (repeat>=122)
						  {
						  	cout<<"\n\n\n\n\n\t\t\t\t\t   CREATED BY : MUHAMMAD SHAHMIR KHAN\a";
						  }
						  			
		
				    
			}//inner switch
			
						
			break;
			
		//***************************************************************************************************************
		
		
		case 3://cust
		
		    //option
		    cout<<"\n\n\t1 =>  CALCULATE GPA";
			cout<<"\n\t2 =>  CALCULATE CGPA";
			cout<<"\n\t3 =>  CHECK FORMULA";
			 
			cout<<"\n\nWHAT YOU WANT TO DO : ";
			
			cin>>a;
			
			switch(a)
			{
				case 1://CALCULATE GPA
				{
				int subject=0;
				cout<<"HOW MANY SUBJECT :";
				cin>>subject;
					for( int i=0;i<subject;i++)
                      	{
                      		j++;
                      		cout<<"\n\n\t"<<j<<":-  SUBJECT MARKS  : ";
                      		cin>>c[i];
                      		cout<<"\t\t   SUBJECT CREDIT HOURS : ";
                      		cin>>d[i];
                      		
                      		if(c[i]>=90)
                      		{
                      			l[i]=4*d[i]; 
								  cout<<"\n\t\t\t\t\t GRADE  : A";                             			
							  }
							  
							else if  ( (c[i]>=86)&&(c[i]<=89) )
							{
								l[i]=3.67*d[i];
								  cout<<"\n\t\t\t\t\t GRADE  : A-";        
							}
							  
							else if ( (c[i]>=81)&&(c[i]<=85) )
							{
								l[i]=3.33*d[i];
								  cout<<"\n\t\t\t\t\t GRADE  : B+";        
							}
							  
							else if ( (c[i]>=77)&&(c[i]<=80) )
							{
								l[i]=3.00*d[i];
								  cout<<"\n\t\t\t\t\t GRADE  : B";        
							}
							  
							else if ( (c[i]>=72)&&(c[i]<=76) )
							{
								l[i]=2.67*d[i];
								  cout<<"\n\t\t\t\t\t GRADE  : B-";        
							}
							  
							else if ( (c[i]>=68)&&(c[i]<=71) )
							{
								l[i]=2.33*d[i];
								  cout<<"\n\t\t\t\t\t GRADE  : C+";        
							}
							  
							else if ( (c[i]>=63)&&(c[i]<=67) )
							{
								l[i]=2.00*d[i];
								  cout<<"\n\t\t\t\t\t GRADE  : C";        
							}
							  
							else if ( (c[i]>=58)&&(c[i]<=62) )
							{
								l[i]=1.67*d[i];
								  cout<<"\n\t\t\t\t\t GRADE  : C-";        
							}
							  
							else if ( (c[i]>=54)&&(c[i]<=57) )
							{
								l[i]=1.33*d[i];
								  cout<<"\n\t\t\t\t\t GRADE  : D+";        
							}
							  
							else if ( (c[i]>=50)&&(c[i]<=53) )
							{
								l[i]=1.00*d[i];
								  cout<<"\n\t\t\t\t\t GRADE  : D";        
							}
						
							else if ( c[i]<=49 )
							{
								l[i]=0*d[i];
								  cout<<"\n\t\t\t\t\t GRADE  : F";        
								
							}
							//e=e+l[i];
							//cout<<e;
						}//FOR
						  
						  e=l[0]+l[1]+l[2]+l[3]+l[4]+l[5]+l[6]+l[7]+l[8];
						  f=d[0]+d[1]+d[2]+d[3]+d[4]+d[5]+d[6]+d[7]+d[8];
						 // cout<<e;//just to check e value****************************************
						  //cout<<f;//just to check e value
						  g=e/f;
						  cout<<"\n\n\n\tGPA : "<<g;//gpa 
	
	 
						  //repeater ==========================
						  
						  cout<<"\n\n\n\n\t IF YOU WANT TO CONTINUE PRESS  [Y] :";
						  cin>>repeat;
						  
						  
						  
						  if (repeat<89)
						  {
						  	cout<<"\n\n\n\n\n\t\t\t\t\t   CREATED BY : MUHAMMAD SHAHMIR KHAN\a";
						  }
						  
						  if (repeat>=90 && repeat<121)
						  {
						  	cout<<"\n\n\n\n\n\t\t\t\t\t   CREATED BY : MUHAMMAD SHAHMIR KHAN\a";
						  }
						  
						  if (repeat>=122)
						  {
						  	cout<<"\n\n\n\n\n\t\t\t\t\t   CREATED BY : MUHAMMAD SHAHMIR KHAN\a";
						  }
						  
						  
						  
					break;
				//=========================================================================================================
			}
				
				case 2://CALCULATE CGPA
					{
					    int z,j=0;
					    float x[9]={0},w[9]={0},m[9]={0},n=0,r=0,o=0;
					
						cout<<"\n\n\t\t\t\a**********************";
	                    cout<<"\n\n\t\t\t*   CALCULATE CGPA   *";
                      	cout<<"\n\n\t\t\t**********************";
                      	
                      	cout<<"\n\nENTER SEMESTER NUMBER : ";
                      	cin>>z;
                      	
                      	for(int i=0;i<z;i++)
                      	{
                      		j++;
                      		cout<<"\n\n\t"<<j<<":-  SEMESTER GPA : ";
                      		cin>>x[i];
                      		cout<<"\n\t\tSEMESTER CREDIT HOURS : ";
                      		cin>>w[i];
                      		
                      		m[i]=x[i]*w[i];
						  }
						  r=m[0]+m[1]+m[2]+m[3]+m[4]+m[5]+m[6]+m[7]+m[8];
						  n=w[0]+w[1]+w[2]+w[3]+w[4]+w[5]+w[6]+w[7]+w[8];
						  o=r/n;
						  cout<<"\n\n    YOUR CGPA IS  "<<o;
                      	
                        
						  
	 
						  //repeater ==========================
						  
						  
						  
						  cout<<"\n\n\n\n\t IF YOU WANT TO CONTINUE PRESS  [Y] :";
						  cin>>repeat;						  
						  
						  
						  if (repeat<89)
						  {
						  	cout<<"\n\n\n\n\n\t\t\t\t\t   CREATED BY : MUHAMMAD SHAHMIR KHAN\a";
						  }
						  
						  if (repeat>=90 && repeat<121)
						  {
						  	cout<<"\n\n\n\n\n\t\t\t\t\t   CREATED BY : MUHAMMAD SHAHMIR KHAN\a";
						  }
						  
						  if (repeat>=122)
						  {
						  	cout<<"\n\n\n\n\n\t\t\t\t\t   CREATED BY : MUHAMMAD SHAHMIR KHAN\a";
						  }
						  
						          	
				}
					
					break;
				
				//=========================================================================================================
				
				case 3://CHECK FORMULA
				
                    cout<<"\n\n\t\t\t\a     *********************";
	                cout<<"\n\n\t\t\t     *   CHECK FORMULA   *";
                    cout<<"\n\n\t\t\t     *********************";
                    
                    cout<<"\n\n\n\t  ------------     \t    -----      \t         -------";
                    cout<<"\n\t   PECENTAGE     \t     GPA       \t          GRADE";
                    cout<<"\n\t  ------------     \t    -----      \t         -------";
                    
                    cout<<"\n\n\n\t  90%  -  100%     \t    4.00       \t           A";
                    cout<<"\n\n\t   86% - 89%     \t    3.67                   A-";
                    cout<<"\n\n\t   81% - 85%     \t    3.33                   B+";
                    cout<<"\n\n\t   77% - 80%     \t    3.00                   B";
                    cout<<"\n\n\t   72% - 76%     \t    2.67                   B-";
                    cout<<"\n\n\t   68% - 71%     \t    2.33                   C+";
                    cout<<"\n\n\t   63% - 67%     \t    2.00                   C";
                    cout<<"\n\n\t   58% - 62%     \t    1.67                   C-";
                    cout<<"\n\n\t   54% - 57%     \t    1.33                   D+";
                    cout<<"\n\n\t   50% - 53%     \t    1.00                   D";
                    cout<<"\n\n\t  49% AND LESS     \t    0.00                   F";
                      	
                 
						  
	 
						  //repeater ==========================
						  
						  
						  
						  cout<<"\n\n\n\n\t IF YOU WANT TO CONTINUE PRESS  [Y] :";
						  cin>>repeat;						  
						  
						  
						  if (repeat<89)
						  {
						  	cout<<"\n\n\n\n\n\t\t\t\t\t   CREATED BY : MUHAMMAD SHAHMIR KHAN\a";
						  }
						  
						  if (repeat>=90 && repeat<121)
						  {
						  	cout<<"\n\n\n\n\n\t\t\t\t\t   CREATED BY : MUHAMMAD SHAHMIR KHAN\a";
						  }
						  
						  if (repeat>=122)
						  {
						  	cout<<"\n\n\n\n\n\t\t\t\t\t   CREATED BY : MUHAMMAD SHAHMIR KHAN\a";
						  }
						  
						  
				
				      	
                      					
					break;
				//=========================================================================================================
					
				default:
				     cout<<"\n\n\n\t\t(((((((((((((((  INVALID NUMBER  )))))))))))))))";
	 
	 
						  //repeater ==========================
						  
						  
						  
						  cout<<"\n\n\n\n\t IF YOU WANT TO CONTINUE PRESS  [Y] :";
						  cin>>repeat;						  
						  
						  
						  if (repeat<89)
						  {
						  	cout<<"\n\n\n\n\n\t\t\t\t\t   CREATED BY : MUHAMMAD SHAHMIR KHAN\a";
						  }
						  
						  if (repeat>=90 && repeat<121)
						  {
						  	cout<<"\n\n\n\n\n\t\t\t\t\t   CREATED BY : MUHAMMAD SHAHMIR KHAN\a";
						  }
						  
						  if (repeat>=122)
						  {
						  	cout<<"\n\n\n\n\n\t\t\t\t\t   CREATED BY : MUHAMMAD SHAHMIR KHAN\a";
						  }
						  			
		
				   
			}//inner switch
			
			
			
			break;
			
		//***************************************************************************************************************
		
		
		case 4://quiad-i-azam
		
		    //option
		    cout<<"\n\n\t1 =>  CALCULATE GPA";
			cout<<"\n\t2 =>  CALCULATE CGPA";
			cout<<"\n\t3 =>  CHECK FORMULA";
			 
			cout<<"\n\nWHAT YOU WANT TO DO : ";
			
			cin>>a;
			
			switch(a)
			{
				case 1://CALCULATE GPA
				
				{
				int subject=0;
				cout<<"HOW MANY SUBJECT :";
				cin>>subject;
					for( int i=0;i<subject;i++)
                      	{
                      		j++;
                      		cout<<"\n\n\t"<<j<<":-  SUBJECT MARKS  : ";
                      		cin>>c[i];
                      		cout<<"\t\t   SUBJECT CREDIT HOURS : ";
                      		cin>>d[i];
                      		
                      		if(c[i]>=80)
                      		{
                      			l[i]=4*d[i];
								  cout<<"\n\t\t\t\t\t GRADE  : A";                              			
							  }
							  
							else if  ( (c[i]>=76)&&(c[i]<=79) )
							{
								l[i]=3.80*d[i];
								  cout<<"\n\t\t\t\t\t GRADE  : A-";        
							}
							  
							else if ( (c[i]>=72)&&(c[i]<=75) )
							{
								l[i]=3.50*d[i];
								  cout<<"\n\t\t\t\t\t GRADE  : B+";        
							}
							  
							else if ( (c[i]>=68)&&(c[i]<=71) )
							{
								l[i]=3.00*d[i];
								  cout<<"\n\t\t\t\t\t GRADE  : B";        
							}
							  
							else if ( (c[i]>=64)&&(c[i]<=67) )
							{
								l[i]=2.80*d[i];
								  cout<<"\n\t\t\t\t\t GRADE  : B-";        
							}
							  
							else if ( (c[i]>=60)&&(c[i]<=63) )
							{
								l[i]=2.50*d[i];
								  cout<<"\n\t\t\t\t\t GRADE  : C+";        
							}
							  
							else if ( (c[i]>=55)&&(c[i]<=59) )
							{
								l[i]=2.00*d[i];
								  cout<<"\n\t\t\t\t\t GRADE  : C";        
							}
							  
							else if ( (c[i]>=50)&&(c[i]<=54) )
							{
								l[i]=1.00*d[i];
								  cout<<"\n\t\t\t\t\t GRADE  : D";        
							}
													
							else if ( c[i]<=49 )
							{
								l[i]=0*d[i];
								  cout<<"\n\t\t\t\t\t GRADE  : F";        
								
							}
							//e=e+l[i];
							//cout<<e;
						}//FOR
						  
						  e=l[0]+l[1]+l[2]+l[3]+l[4]+l[5]+l[6]+l[7]+l[8];
						  f=d[0]+d[1]+d[2]+d[3]+d[4]+d[5]+d[6]+d[7]+d[8];
						 // cout<<e;//just to check e value****************************************
						  //cout<<f;//just to check e value
						  g=e/f;
						  cout<<"\n\n\n\tGPA : "<<g;//gpa 
						  
	 
						  //repeater ==========================
						  
						  
						  
						  cout<<"\n\n\n\n\t IF YOU WANT TO CONTINUE PRESS  [Y] :";
						  cin>>repeat;						  
						  
						  
						  if (repeat<89)
						  {
						  	cout<<"\n\n\n\n\n\t\t\t\t\t   CREATED BY : MUHAMMAD SHAHMIR KHAN\a";
						  }
						  
						  if (repeat>=90 && repeat<121)
						  {
						  	cout<<"\n\n\n\n\n\t\t\t\t\t   CREATED BY : MUHAMMAD SHAHMIR KHAN\a";
						  }
						  
						  if (repeat>=122)
						  {
						  	cout<<"\n\n\n\n\n\t\t\t\t\t   CREATED BY : MUHAMMAD SHAHMIR KHAN\a";
						  }
						  
						  
				
				
					break;
				//=========================================================================================================
			}
				
				case 2://CALCULATE CGPA
					{
					    int z,j=0;
					    float x[9]={0},w[9]={0},m[9]={0},n=0,r=0,o=0;
					
						cout<<"\n\n\t\t\t\a**********************";
	                    cout<<"\n\n\t\t\t*   CALCULATE CGPA   *";
                      	cout<<"\n\n\t\t\t**********************";
                      	
                      	cout<<"\n\nENTER SEMESTER NUMBER : ";
                      	cin>>z;
                      	
                      	for(int i=0;i<z;i++)
                      	{
                      		j++;
                      		cout<<"\n\n\t"<<j<<":-  SEMESTER GPA : ";
                      		cin>>x[i];
                      		cout<<"\n\t\tSEMESTER CREDIT HOURS : ";
                      		cin>>w[i];
                      		
                      		m[i]=x[i]*w[i];
						  }
						  r=m[0]+m[1]+m[2]+m[3]+m[4]+m[5]+m[6]+m[7]+m[8];
						  n=w[0]+w[1]+w[2]+w[3]+w[4]+w[5]+w[6]+w[7]+w[8];
						  o=r/n;
						  cout<<"\n\n    YOUR CGPA IS  "<<o;
                      	
	 
						  //repeater ==========================
						  
						  
						  
						  cout<<"\n\n\n\n\t IF YOU WANT TO CONTINUE PRESS  [Y] :";
						  cin>>repeat;						  
						  
						  
						  if (repeat<89)
						  {
						  	cout<<"\n\n\n\n\n\t\t\t\t\t   CREATED BY : MUHAMMAD SHAHMIR KHAN\a";
						  }
						  
						  if (repeat>=90 && repeat<121)
						  {
						  	cout<<"\n\n\n\n\n\t\t\t\t\t   CREATED BY : MUHAMMAD SHAHMIR KHAN\a";
						  }
						  
						  if (repeat>=122)
						  {
						  	cout<<"\n\n\n\n\n\t\t\t\t\t   CREATED BY : MUHAMMAD SHAHMIR KHAN\a";
						  }
						  
						  
				
				}
					
					break;
				
				//=========================================================================================================
				
				case 3://CHECK FORMULA
				
                    cout<<"\n\n\t\t\t\a     *********************";
	                cout<<"\n\n\t\t\t     *   CHECK FORMULA   *";
                    cout<<"\n\n\t\t\t     *********************";
                    
                    cout<<"\n\n\n\t  ------------     \t    -----      \t         -------";
                    cout<<"\n\t   PECENTAGE     \t     GPA       \t          GRADE";
                    cout<<"\n\t  ------------     \t    -----      \t         -------";
                    
                    cout<<"\n\n\n\t  80%  -  100%     \t    4.00       \t           A";
                    cout<<"\n\n\t   76% - 79%     \t    3.80                   A-";
                    cout<<"\n\n\t   72% - 75%     \t    3.56                   B+";
                    cout<<"\n\n\t   68% - 71%     \t    3.00                   B";
                    cout<<"\n\n\t   64% - 67%     \t    2.80                   B-";
                    cout<<"\n\n\t   60% - 63%     \t    2.56                   C+";
                    cout<<"\n\n\t   55% - 59%     \t    2.00                   C";
                    cout<<"\n\n\t   50% - 54%     \t    1.00                   D";
                    cout<<"\n\n\t  49% AND LESS     \t    0.00                   F";
                      	
	 
						  //repeater ==========================
						  
						  
						  
						  cout<<"\n\n\n\n\t IF YOU WANT TO CONTINUE PRESS  [Y] :";
						  cin>>repeat;						  
						  
						  
						  if (repeat<89)
						  {
						  	cout<<"\n\n\n\n\n\t\t\t\t\t   CREATED BY : MUHAMMAD SHAHMIR KHAN\a";
						  }
						  
						  if (repeat>=90 && repeat<121)
						  {
						  	cout<<"\n\n\n\n\n\t\t\t\t\t   CREATED BY : MUHAMMAD SHAHMIR KHAN\a";
						  }
						  
						  if (repeat>=122)
						  {
						  	cout<<"\n\n\n\n\n\t\t\t\t\t   CREATED BY : MUHAMMAD SHAHMIR KHAN\a";
						  }
						  
						  
				
                      					
					break;
					//=========================================================================================================
				
				default:
				    cout<<"\n\n\n\t\t(((((((((((((((  INVALID NUMBER  )))))))))))))))";
	 
	 
						  //repeater ==========================
						  
						  
						  
						  cout<<"\n\n\n\n\t IF YOU WANT TO CONTINUE PRESS  [Y] :";
						  cin>>repeat;						  
						  
						  
						  if (repeat<89)
						  {
						  	cout<<"\n\n\n\n\n\t\t\t\t\t   CREATED BY : MUHAMMAD SHAHMIR KHAN\a";
						  }
						  
						  if (repeat>=90 && repeat<121)
						  {
						  	cout<<"\n\n\n\n\n\t\t\t\t\t   CREATED BY : MUHAMMAD SHAHMIR KHAN\a";
						  }
						  
						  if (repeat>=122)
						  {
						  	cout<<"\n\n\n\n\n\t\t\t\t\t   CREATED BY : MUHAMMAD SHAHMIR KHAN\a";
						  }
						  			
		
			}//inner switch
			
			
			
			break;
			
		//***************************************************************************************************************
		
		
		case 5://szabist
		
		    //option
		    cout<<"\n\n\t1 =>  CALCULATE GPA";
			cout<<"\n\t2 =>  CALCULATE CGPA";
			cout<<"\n\t3 =>  CHECK FORMULA";
			 
			cout<<"\n\nWHAT YOU WANT TO DO : ";
			
			cin>>a;
			
			switch(a)
			{
				case 1://CALCULATE GPA
					
				{
				int subject=0;
				cout<<"HOW MANY SUBJECT :";
				cin>>subject;
					for( int i=0;i<subject;i++)
                      	{
                      		j++;
                      		cout<<"\n\n\n\t"<<j<<":-  SUBJECT MARKS  : ";
                      		cin>>c[i];
                      		cout<<"\t\t   SUBJECT CREDIT HOURS : ";
                      		cin>>d[i];
                      		
                      		if(c[i]>=90)
                      		{
                      			l[i]=4*d[i];
								  cout<<"\n\t\t\t\t\t GRADE  : A+";                  			
								                       			
							  }
							  
							else if  ( (c[i]>=85)&&(c[i]<=89) )
							{
								l[i]=3.75*d[i];
								  cout<<"\n\t\t\t\t\t GRADE  : A"; 
							}
							  
							else if ( (c[i]>=80)&&(c[i]<=84) )
							{
								l[i]=3.55*d[i];
								  cout<<"\n\t\t\t\t\t GRADE  : A-"; 
							}
							  
							else if ( (c[i]>=75)&&(c[i]<=79) )
							{
								l[i]=3.25*d[i];
								  cout<<"\n\t\t\t\t\t GRADE  : B+"; 
							}
							  
							else if ( (c[i]>=70)&&(c[i]<=74) )
							{
								l[i]=3.00*d[i];
								  cout<<"\n\t\t\t\t\t GRADE  : B"; 
							}
							  
							else if ( (c[i]>=66)&&(c[i]<=69) )
							{
								l[i]=2.75*d[i];
								  cout<<"\n\t\t\t\t\t GRADE  : B-"; 
							}
							  
							else if ( (c[i]>=63)&&(c[i]<=65) )
							{
								l[i]=2.50*d[i];
								  cout<<"\n\t\t\t\t\t GRADE  : C+"; 
							}
							  
							else if ( (c[i]>=60)&&(c[i]<=62) )
							{
								l[i]=2.00*d[i];
								  cout<<"\n\t\t\t\t\t GRADE  : C"; 
							}
								  
							else if ( (c[i]>=55)&&(c[i]<=59) )
							{
								l[i]=1.50*d[i];
								  cout<<"\n\t\t\t\t\t GRADE  : C-"; 
							}
																				
							else if ( c[i]<=54 )
							{
								l[i]=0*d[i];
								  cout<<"\n\t\t\t\t\t GRADE  : F"; 
								
							}
							//e=e+l[i];
							//cout<<e;
						}//FOR
						  
						  e=l[0]+l[1]+l[2]+l[3]+l[4]+l[5]+l[6]+l[7]+l[8];
						  f=d[0]+d[1]+d[2]+d[3]+d[4]+d[5]+d[6]+d[7]+d[8];
						 // cout<<e;//just to check e value****************************************
						  //cout<<f;//just to check e value
						  g=e/f;
						  cout<<"\n\n\n\tGPA : "<<g;//gpa 
						  
	 
						  //repeater ==========================
						  
						  
						  
						  cout<<"\n\n\n\n\t IF YOU WANT TO CONTINUE PRESS  [Y] :";
						  cin>>repeat;						  
						  
						  
						  if (repeat<89)
						  {
						  	cout<<"\n\n\n\n\n\t\t\t\t\t   CREATED BY : MUHAMMAD SHAHMIR KHAN\a";
						  }
						  
						  if (repeat>=90 && repeat<121)
						  {
						  	cout<<"\n\n\n\n\n\t\t\t\t\t   CREATED BY : MUHAMMAD SHAHMIR KHAN\a";
						  }
						  
						  if (repeat>=122)
						  {
						  	cout<<"\n\n\n\n\n\t\t\t\t\t   CREATED BY : MUHAMMAD SHAHMIR KHAN\a";
						  }
						  
						  
				
				
					break;
					
					}
				//=========================================================================================================
				
				
				case 2://CALCULATE CGPA
					{
					    int z,j=0;
					    float x[9]={0},w[9]={0},m[9]={0},n=0,r=0,o=0;
					
						cout<<"\n\n\t\t\t\a**********************";
	                    cout<<"\n\n\t\t\t*   CALCULATE CGPA   *";
                      	cout<<"\n\n\t\t\t**********************";
                      	
                      	cout<<"\n\nENTER SEMESTER NUMBER : ";
                      	cin>>z;
                      	
                      	for(int i=0;i<z;i++)
                      	{
                      		j++;
                      		cout<<"\n\n\t"<<j<<":-  SEMESTER GPA : ";
                      		cin>>x[i];
                      		cout<<"\n\t\tSEMESTER CREDIT HOURS : ";
                      		cin>>w[i];
                      		
                      		m[i]=x[i]*w[i];
						  }
						  r=m[0]+m[1]+m[2]+m[3]+m[4]+m[5]+m[6]+m[7]+m[8];
						  n=w[0]+w[1]+w[2]+w[3]+w[4]+w[5]+w[6]+w[7]+w[8];
						  o=r/n;
						  cout<<"\n\n    YOUR CGPA IS  "<<o;
                      	
	 
						  //repeater ==========================
						  
						  
						  
						  cout<<"\n\n\n\n\t IF YOU WANT TO CONTINUE PRESS  [Y] :";
						  cin>>repeat;						  
						  
						  
						  if (repeat<89)
						  {
						  	cout<<"\n\n\n\n\n\t\t\t\t\t   CREATED BY : MUHAMMAD SHAHMIR KHAN\a";
						  }
						  
						  if (repeat>=90 && repeat<121)
						  {
						  	cout<<"\n\n\n\n\n\t\t\t\t\t   CREATED BY : MUHAMMAD SHAHMIR KHAN\a";
						  }
						  
						  if (repeat>=122)
						  {
						  	cout<<"\n\n\n\n\n\t\t\t\t\t   CREATED BY : MUHAMMAD SHAHMIR KHAN\a";
						  }
						  
						  
                      	
				}
					
					break;
				
				//=========================================================================================================
				
				case 3://CHECK FORMULA
				
                    cout<<"\n\n\t\t\t\a     *********************";
	                cout<<"\n\n\t\t\t     *   CHECK FORMULA   *";
                    cout<<"\n\n\t\t\t     *********************";
                    
                    cout<<"\n\n\n\t  ------------     \t    -----      \t         -------";
                    cout<<"\n\t   PECENTAGE     \t     GPA       \t          GRADE";
                    cout<<"\n\t  ------------     \t    -----      \t         -------";
                    
                    cout<<"\n\n\n\t  90%  -  100%     \t    4.00       \t           A+";
                    cout<<"\n\n\t   85% - 89%     \t    3.75                   A";
                    cout<<"\n\n\t   80% - 84%     \t    3.55                   A-";
                    cout<<"\n\n\t   75% - 79%     \t    3.25                   B+";
                    cout<<"\n\n\t   70% - 74%     \t    3.00                   B";
                    cout<<"\n\n\t   66% - 69%     \t    2.75                   B-";
                    cout<<"\n\n\t   63% - 65%     \t    2.50                   C+";
                    cout<<"\n\n\t   60% - 62%     \t    2.00                   C";
                    cout<<"\n\n\t   55% - 59%     \t    1.50                   C-";
                    cout<<"\n\n\t  54% AND LESS     \t    0.00                   F";
                      	
                      	
	 
						  //repeater ==========================
						  
						  
						  
						  cout<<"\n\n\n\n\t IF YOU WANT TO CONTINUE PRESS  [Y] :";
						  cin>>repeat;						  
						  
						  
						  if (repeat<89)
						  {
						  	cout<<"\n\n\n\n\n\t\t\t\t\t   CREATED BY : MUHAMMAD SHAHMIR KHAN\a";
						  }
						  
						  if (repeat>=90 && repeat<121)
						  {
						  	cout<<"\n\n\n\n\n\t\t\t\t\t   CREATED BY : MUHAMMAD SHAHMIR KHAN\a";
						  }
						  
						  if (repeat>=122)
						  {
						  	cout<<"\n\n\n\n\n\t\t\t\t\t   CREATED BY : MUHAMMAD SHAHMIR KHAN\a";
						  }
						  
						  
				
                      					
					break;
				//=========================================================================================================
					
				default:
				     cout<<"\n\n\n\t\t(((((((((((((((  INVALID NUMBER  )))))))))))))))";
	 
	 
						  //repeater ==========================
						  
						  
						  
						  cout<<"\n\n\n\n\t IF YOU WANT TO CONTINUE PRESS  [Y] :";
						  cin>>repeat;						  
						  
						  
						  if (repeat<89)
						  {
						  	cout<<"\n\n\n\n\n\t\t\t\t\t   CREATED BY : MUHAMMAD SHAHMIR KHAN\a";
						  }
						  
						  if (repeat>=90 && repeat<121)
						  {
						  	cout<<"\n\n\n\n\n\t\t\t\t\t   CREATED BY : MUHAMMAD SHAHMIR KHAN\a";
						  }
						  
						  if (repeat>=122)
						  {
						  	cout<<"\n\n\n\n\n\t\t\t\t\t   CREATED BY : MUHAMMAD SHAHMIR KHAN\a";
						  }
						  			
		
			}//inner switch
			
			
			
			break;
			
		//***************************************************************************************************************
		
		
		case 6://ndu
		
		    //option
		    cout<<"\n\n\t1 =>  CALCULATE GPA";
			cout<<"\n\t2 =>  CALCULATE CGPA";
			cout<<"\n\t3 =>  CHECK FORMULA";
			 
			cout<<"\n\nWHAT YOU WANT TO DO : ";
			
			cin>>a;
			
			switch(a)
			{
				case 1://CALCULATE GPA
							
				{
				int subject=0;
				cout<<"HOW MANY SUBJECT :";
				cin>>subject;
					for( int i=0;i<subject;i++)
                      	{
                      		j++;
                      		cout<<"\n\n\n\t"<<j<<":-  SUBJECT MARKS  : ";
                      		cin>>c[i];
                      		cout<<"\t\t   SUBJECT CREDIT HOURS : ";
                      		cin>>d[i];
                      		
                      		if(c[i]>=90)
                      		{
                      			l[i]=4*d[i];
								  cout<<"\n\t\t\t\t\t GRADE  : A+";                  			
								                       			
							  }
							  
							else if  ( (c[i]>=80)&&(c[i]<=89) )
							{
								l[i]=4.00*d[i];
								  cout<<"\n\t\t\t\t\t GRADE  : A"; 
							}
							  
							else if ( (c[i]>=70)&&(c[i]<=79) )
							{
								l[i]=3.50*d[i];
								  cout<<"\n\t\t\t\t\t GRADE  : B+"; 
							}
							  
							else if ( (c[i]>=65)&&(c[i]<=69) )
							{
								l[i]=3.00*d[i];
								  cout<<"\n\t\t\t\t\t GRADE  : B"; 
							}
							  
							else if ( (c[i]>=60)&&(c[i]<=64) )
							{
								l[i]=2.50*d[i];
								  cout<<"\n\t\t\t\t\t GRADE  : C+"; 
							}
							  
							else if ( (c[i]>=50)&&(c[i]<=59) )
							{
								l[i]=2.00*d[i];
								  cout<<"\n\t\t\t\t\t GRADE  : C"; 
							}
									  
																				
							else if ( c[i]<=49 )
							{
								l[i]=0*d[i];
								  cout<<"\n\t\t\t\t\t GRADE  : F"; 
								
							}
							//e=e+l[i];
							//cout<<e;
						}//FOR
						  
						  e=l[0]+l[1]+l[2]+l[3]+l[4]+l[5]+l[6]+l[7]+l[8];
						  f=d[0]+d[1]+d[2]+d[3]+d[4]+d[5]+d[6]+d[7]+d[8];
						 // cout<<e;//just to check e value****************************************
						  //cout<<f;//just to check e value
						  g=e/f;
						  cout<<"\n\n\n\tGPA : "<<g;//gpa 
	 
						  //repeater ==========================
						  
						  
						  
						  cout<<"\n\n\n\n\t IF YOU WANT TO CONTINUE PRESS  [Y] :";
						  cin>>repeat;						  
						  
						  
						  if (repeat<89)
						  {
						  	cout<<"\n\n\n\n\n\t\t\t\t\t   CREATED BY : MUHAMMAD SHAHMIR KHAN\a";
						  }
						  
						  if (repeat>=90 && repeat<121)
						  {
						  	cout<<"\n\n\n\n\n\t\t\t\t\t   CREATED BY : MUHAMMAD SHAHMIR KHAN\a";
						  }
						  
						  if (repeat>=122)
						  {
						  	cout<<"\n\n\n\n\n\t\t\t\t\t   CREATED BY : MUHAMMAD SHAHMIR KHAN\a";
						  }
						  
						  
				
					break;
					
					}
				//=========================================================================================================
				
				
				case 2://CALCULATE CGPA
					{
					    int z,j=0;
					    float x[9]={0},w[9]={0},m[9]={0},n=0,r=0,o=0;
					
						cout<<"\n\n\t\t\t\a**********************";
	                    cout<<"\n\n\t\t\t*   CALCULATE CGPA   *";
                      	cout<<"\n\n\t\t\t**********************";
                      	
                      	cout<<"\n\nENTER SEMESTER NUMBER : ";
                      	cin>>z;
                      	
                      	for(int i=0;i<z;i++)
                      	{
                      		j++;
                      		cout<<"\n\n\t"<<j<<":-  SEMESTER GPA : ";
                      		cin>>x[i];
                      		cout<<"\n\t\tSEMESTER CREDIT HOURS : ";
                      		cin>>w[i];
                      		
                      		m[i]=x[i]*w[i];
						  }
						  r=m[0]+m[1]+m[2]+m[3]+m[4]+m[5]+m[6]+m[7]+m[8];
						  n=w[0]+w[1]+w[2]+w[3]+w[4]+w[5]+w[6]+w[7]+w[8];
						  o=r/n;
						  cout<<"\n\n    YOUR CGPA IS  "<<o;
                      	
						  
	 
						  //repeater ==========================
						  
						  
						  
						  cout<<"\n\n\n\n\t IF YOU WANT TO CONTINUE PRESS  [Y] :";
						  cin>>repeat;						  
						  
						  
						  if (repeat<89)
						  {
						  	cout<<"\n\n\n\n\n\t\t\t\t\t   CREATED BY : MUHAMMAD SHAHMIR KHAN\a";
						  }
						  
						  if (repeat>=90 && repeat<121)
						  {
						  	cout<<"\n\n\n\n\n\t\t\t\t\t   CREATED BY : MUHAMMAD SHAHMIR KHAN\a";
						  }
						  
						  if (repeat>=122)
						  {
						  	cout<<"\n\n\n\n\n\t\t\t\t\t   CREATED BY : MUHAMMAD SHAHMIR KHAN\a";
						  }
						  
						  
				
				
                      	
				}
					
					break;
				
				//=========================================================================================================
				
				
				case 3://CHECK FORMULA
				
                    cout<<"\n\n\t\t\t\a     *********************";
	                cout<<"\n\n\t\t\t     *   CHECK FORMULA   *";
                    cout<<"\n\n\t\t\t     *********************";
                    
                    cout<<"\n\n\n\t  ------------     \t    -----      \t         -------";
                    cout<<"\n\t   PECENTAGE     \t     GPA       \t          GRADE";
                    cout<<"\n\t  ------------     \t    -----      \t         -------";
                    
                    cout<<"\n\n\n\t  90%  -  100%     \t    4.00       \t           A+";
                    cout<<"\n\n\t   80% - 89%     \t    4.00                   A";
                    cout<<"\n\n\t   70% - 79%     \t    3.50                   B+";
                    cout<<"\n\n\t   65% - 69%     \t    3.00                   B";
                    cout<<"\n\n\t   60% - 64%     \t    3.50                   C+";
                    cout<<"\n\n\t   50% - 59%     \t    2.00                   C";
                    cout<<"\n\n\t  49% AND LESS     \t    0.00                   F";
                      	
                      	
						  
	 
						  //repeater ==========================
						  
						  
						  
						  cout<<"\n\n\n\n\t IF YOU WANT TO CONTINUE PRESS  [Y] :";
						  cin>>repeat;						  
						  
						  
						  if (repeat<89)
						  {
						  	cout<<"\n\n\n\n\n\t\t\t\t\t   CREATED BY : MUHAMMAD SHAHMIR KHAN\a";
						  }
						  
						  if (repeat>=90 && repeat<121)
						  {
						  	cout<<"\n\n\n\n\n\t\t\t\t\t   CREATED BY : MUHAMMAD SHAHMIR KHAN\a";
						  }
						  
						  if (repeat>=122)
						  {
						  	cout<<"\n\n\n\n\n\t\t\t\t\t   CREATED BY : MUHAMMAD SHAHMIR KHAN\a";
						  }
						  
						  
				
                      					
					break;
				//=========================================================================================================
					
				default:
				     cout<<"\n\n\n\t\t(((((((((((((((  INVALID NUMBER  )))))))))))))))";
	 
	 
						  //repeater ==========================
						  
						  
						  
						  cout<<"\n\n\n\n\t IF YOU WANT TO CONTINUE PRESS  [Y] :";
						  cin>>repeat;						  
						  
						  
						  if (repeat<89)
						  {
						  	cout<<"\n\n\n\n\n\t\t\t\t\t   CREATED BY : MUHAMMAD SHAHMIR KHAN\a";
						  }
						  
						  if (repeat>=90 && repeat<121)
						  {
						  	cout<<"\n\n\n\n\n\t\t\t\t\t   CREATED BY : MUHAMMAD SHAHMIR KHAN\a";
						  }
						  
						  if (repeat>=122)
						  {
						  	cout<<"\n\n\n\n\n\t\t\t\t\t   CREATED BY : MUHAMMAD SHAHMIR KHAN\a";
						  }
						  			
			
			}//inner switch
			
			
			
			break;
			
		
		//***************************************************************************************************************
		
		
		case 7://COMSETS
		
		    //option
		    cout<<"\n\n\t1 =>  CALCULATE GPA";
			cout<<"\n\t2 =>  CALCULATE CGPA";
			cout<<"\n\t3 =>  CHECK FORMULA";
			 
			cout<<"\n\nWHAT YOU WANT TO DO : ";
			
			cin>>a;
			
			switch(a)
			{
				case 1://CALCULATE GPA
							
				{
				int subject=0;
				cout<<"HOW MANY SUBJECT :";
				cin>>subject;
					for( int i=0;i<subject;i++)
                      	{
                      		j++;
                      		cout<<"\n\n\n\t"<<j<<":-  SUBJECT MARKS  : ";
                      		cin>>c[i];
                      		cout<<"\t\t   SUBJECT CREDIT HOURS : ";
                      		cin>>d[i];
                      		
                      		if(c[i]>=90)
                      		{
                      			l[i]=4.00*d[i];
								  cout<<"\n\t\t\t\t\t GRADE  : A";                  			
								                       			
							  }
							  
							else if  ( (c[i]>=85)&&(c[i]<=89) )
							{
								l[i]=3.70*d[i];
								  cout<<"\n\t\t\t\t\t GRADE  : A-"; 
							}
							  
							else if ( (c[i]>=80)&&(c[i]<=84) )
							{
								l[i]=3.30*d[i];
								  cout<<"\n\t\t\t\t\t GRADE  : B+"; 
							}
							  
							else if ( (c[i]>=75)&&(c[i]<=79) )
							{
								l[i]=3.00*d[i];
								  cout<<"\n\t\t\t\t\t GRADE  : B"; 
							}
							  
							else if ( (c[i]>=70)&&(c[i]<=74) )
							{
								l[i]=2.70*d[i];
								  cout<<"\n\t\t\t\t\t GRADE  : B-"; 
							}
							  
							else if ( (c[i]>=65)&&(c[i]<=69) )
							{
								l[i]=2.30*d[i];
								  cout<<"\n\t\t\t\t\t GRADE  : C+"; 
							}
							  
							else if ( (c[i]>=60)&&(c[i]<=64) )
							{
								l[i]=2.00*d[i];
								  cout<<"\n\t\t\t\t\t GRADE  : C"; 
							}
							  
							else if ( (c[i]>=55)&&(c[i]<=59) )
							{
								l[i]=1.70*d[i];
								  cout<<"\n\t\t\t\t\t GRADE  : C-"; 
							}
								  
							else if ( (c[i]>=50)&&(c[i]<=54) )
							{
								l[i]=1.30*d[i];
								  cout<<"\n\t\t\t\t\t GRADE  : D"; 
							}
																				
							else if ( c[i]<=49 )
							{
								l[i]=0*d[i];
								  cout<<"\n\t\t\t\t\t GRADE  : F"; 
								
							}
							//e=e+l[i];
							//cout<<e;
						}//FOR
						  
						  e=l[0]+l[1]+l[2]+l[3]+l[4]+l[5]+l[6]+l[7]+l[8];
						  f=d[0]+d[1]+d[2]+d[3]+d[4]+d[5]+d[6]+d[7]+d[8];
						 // cout<<e;//just to check e value****************************************
						  //cout<<f;//just to check e value
						  g=e/f;
						  cout<<"\n\n\n\tGPA : "<<g;//gpa 
						  
	 
						  //repeater ==========================
						  
						  
						  
						  cout<<"\n\n\n\n\t IF YOU WANT TO CONTINUE PRESS  [Y] :";
						  cin>>repeat;						  
						  
						  
						  if (repeat<89)
						  {
						  	cout<<"\n\n\n\n\n\t\t\t\t\t   CREATED BY : MUHAMMAD SHAHMIR KHAN\a";
						  }
						  
						  if (repeat>=90 && repeat<121)
						  {
						  	cout<<"\n\n\n\n\n\t\t\t\t\t   CREATED BY : MUHAMMAD SHAHMIR KHAN\a";
						  }
						  
						  if (repeat>=122)
						  {
						  	cout<<"\n\n\n\n\n\t\t\t\t\t   CREATED BY : MUHAMMAD SHAHMIR KHAN\a";
						  }
						  
						  
				
				
					break;
					
					}
				
				//=========================================================================================================
				
				case 2://CALCULATE CGPA
					{
					    int z,j=0;
					    float x[9]={0},w[9]={0},m[9]={0},n=0,r=0,o=0;
					
						cout<<"\n\n\t\t\t\a**********************";
	                    cout<<"\n\n\t\t\t*   CALCULATE CGPA   *";
                      	cout<<"\n\n\t\t\t**********************";
                      	
                      	cout<<"\n\nENTER SEMESTER NUMBER : ";
                      	cin>>z;
                      	
                      	for(int i=0;i<z;i++)
                      	{
                      		j++;
                      		cout<<"\n\n\t"<<j<<":-  SEMESTER GPA : ";
                      		cin>>x[i];
                      		cout<<"\n\t\tSEMESTER CREDIT HOURS : ";
                      		cin>>w[i];
                      		
                      		m[i]=x[i]*w[i];
						  }
						  r=m[0]+m[1]+m[2]+m[3]+m[4]+m[5]+m[6]+m[7]+m[8];
						  n=w[0]+w[1]+w[2]+w[3]+w[4]+w[5]+w[6]+w[7]+w[8];
						  o=r/n;
						  cout<<"\n\n    YOUR CGPA IS  "<<o;
                      	
						  
	 
						  //repeater ==========================
						  
						  
						  
						  cout<<"\n\n\n\n\t IF YOU WANT TO CONTINUE PRESS  [Y] :";
						  cin>>repeat;						  
						  
						  
						  if (repeat<89)
						  {
						  	cout<<"\n\n\n\n\n\t\t\t\t\t   CREATED BY : MUHAMMAD SHAHMIR KHAN\a";
						  }
						  
						  if (repeat>=90 && repeat<121)
						  {
						  	cout<<"\n\n\n\n\n\t\t\t\t\t   CREATED BY : MUHAMMAD SHAHMIR KHAN\a";
						  }
						  
						  if (repeat>=122)
						  {
						  	cout<<"\n\n\n\n\n\t\t\t\t\t   CREATED BY : MUHAMMAD SHAHMIR KHAN\a";
						  }
						  
						  
				
                      	
				}
					
					break;
				//=========================================================================================================
				
				
				case 3://CHECK FORMULA
				
                    cout<<"\n\n\t\t\t\a     *********************";
	                cout<<"\n\n\t\t\t     *   CHECK FORMULA   *";
                    cout<<"\n\n\t\t\t     *********************";
                    
                    cout<<"\n\n\n\t  ------------     \t    -----      \t         -------";
                    cout<<"\n\t   PECENTAGE     \t     GPA       \t          GRADE";
                    cout<<"\n\t  ------------     \t    -----      \t         -------";
                    
                    cout<<"\n\n\n\t  90%  -  100%     \t    4.00       \t           A";
                    cout<<"\n\n\t   85% - 89%     \t    3.70                   A-";
                    cout<<"\n\n\t   80% - 84%     \t    3.30                   B+";
                    cout<<"\n\n\t   75% - 79%     \t    3.00                   B";
                    cout<<"\n\n\t   70% - 74%     \t    3.70                   B-";
                    cout<<"\n\n\t   65% - 69%     \t    2.30                   C+";
                    cout<<"\n\n\t   60% - 64%     \t    2.00                   C";
                    cout<<"\n\n\t   55% - 59%     \t    1.70                   C-";
                    cout<<"\n\n\t   50% - 54%     \t    1.30                   D";
                    cout<<"\n\n\t  49% AND LESS     \t    0.00                   F";
                      	
                      	
						  
	 
						  //repeater ==========================
						  
						  
						  
						  cout<<"\n\n\n\n\t IF YOU WANT TO CONTINUE PRESS  [Y] :";
						  cin>>repeat;						  
						  
						  
						  if (repeat<89)
						  {
						  	cout<<"\n\n\n\n\n\t\t\t\t\t   CREATED BY : MUHAMMAD SHAHMIR KHAN\a";
						  }
						  
						  if (repeat>=90 && repeat<121)
						  {
						  	cout<<"\n\n\n\n\n\t\t\t\t\t   CREATED BY : MUHAMMAD SHAHMIR KHAN\a";
						  }
						  
						  if (repeat>=122)
						  {
						  	cout<<"\n\n\n\n\n\t\t\t\t\t   CREATED BY : MUHAMMAD SHAHMIR KHAN\a";
						  }
						  
						  
				
                      					
					break;
					//=========================================================================================================
				
				default:
				     cout<<"\n\n\n\t\t(((((((((((((((  INVALID NUMBER  )))))))))))))))";
	 
	 
						  //repeater ==========================
						  
						  
						  
						  cout<<"\n\n\n\n\t IF YOU WANT TO CONTINUE PRESS  [Y] :";
						  cin>>repeat;						  
						  
						  
						  if (repeat<89)
						  {
						  	cout<<"\n\n\n\n\n\t\t\t\t\t   CREATED BY : MUHAMMAD SHAHMIR KHAN\a";
						  }
						  
						  if (repeat>=90 && repeat<121)
						  {
						  	cout<<"\n\n\n\n\n\t\t\t\t\t   CREATED BY : MUHAMMAD SHAHMIR KHAN\a";
						  }
						  
						  if (repeat>=122)
						  {
						  	cout<<"\n\n\n\n\n\t\t\t\t\t   CREATED BY : MUHAMMAD SHAHMIR KHAN\a";
						  }
						  			
		
			}//inner switch
			
			
			
			break;
		
		
		//***************************************************************************************************************
		
		
		
		case 8://NUST
		
		    //option
		    cout<<"\n\n\t1 =>  CALCULATE GPA";
			cout<<"\n\t2 =>  CALCULATE CGPA";
			cout<<"\n\t3 =>  CHECK FORMULA";
			 
			cout<<"\n\nWHAT YOU WANT TO DO : ";
			
			cin>>a;
			
			switch(a)
			{
				case 1://CALCULATE GPA
					
						cout<<"\n\n\t\t\t\a**********************";
	                    cout<<"\n\n\t\t\t*   CALCULATE GPA    *";
                      	cout<<"\n\n\t\t\t**********************";
                      	
                      	
                      	cout<<"\n\n\n\t NUST HAS RELATIVE MARKING .";
					
						 
	 
						  //repeater ==========================
						  
						  
						  
						  cout<<"\n\n\n\n\t IF YOU WANT TO CONTINUE PRESS  [Y] :";
						  cin>>repeat;						  
						  
						  
						  if (repeat<89)
						  {
						  	cout<<"\n\n\n\n\n\t\t\t\t\t   CREATED BY : MUHAMMAD SHAHMIR KHAN\a";
						  }
						  
						  if (repeat>=90 && repeat<121)
						  {
						  	cout<<"\n\n\n\n\n\t\t\t\t\t   CREATED BY : MUHAMMAD SHAHMIR KHAN\a";
						  }
						  
						  if (repeat>=122)
						  {
						  	cout<<"\n\n\n\n\n\t\t\t\t\t   CREATED BY : MUHAMMAD SHAHMIR KHAN\a";
						  }
						  
						  
				
				
					break;
				//=========================================================================================================
				
				
				case 2://CALCULATE CGPA
					{
					    int z,j=0;
					    float x[9]={0},w[9]={0},m[9]={0},n=0,r=0,o=0;
					
						cout<<"\n\n\t\t\t\a**********************";
	                    cout<<"\n\n\t\t\t*   CALCULATE CGPA   *";
                      	cout<<"\n\n\t\t\t**********************";
                      	
                      	cout<<"\n\nENTER SEMESTER NUMBER : ";
                      	cin>>z;
                      	
                      	for(int i=0;i<z;i++)
                      	{
                      		j++;
                      		cout<<"\n\n\t"<<j<<":-  SEMESTER GPA : ";
                      		cin>>x[i];
                      		cout<<"\n\t\tSEMESTER CREDIT HOURS : ";
                      		cin>>w[i];
                      		
                      		m[i]=x[i]*w[i];
						  }
						  r=m[0]+m[1]+m[2]+m[3]+m[4]+m[5]+m[6]+m[7]+m[8];
						  n=w[0]+w[1]+w[2]+w[3]+w[4]+w[5]+w[6]+w[7]+w[8];
						  o=r/n;
						  cout<<"\n\n    YOUR CGPA IS  "<<o;
                      	
						  
	 
						  //repeater ==========================
						  
						  
						  
						  cout<<"\n\n\n\n\t IF YOU WANT TO CONTINUE PRESS  [Y] :";
						  cin>>repeat;						  
						  
						  
						  if (repeat<89)
						  {
						  	cout<<"\n\n\n\n\n\t\t\t\t\t   CREATED BY : MUHAMMAD SHAHMIR KHAN\a";
						  }
						  
						  if (repeat>=90 && repeat<121)
						  {
						  	cout<<"\n\n\n\n\n\t\t\t\t\t   CREATED BY : MUHAMMAD SHAHMIR KHAN\a";
						  }
						  
						  if (repeat>=122)
						  {
						  	cout<<"\n\n\n\n\n\t\t\t\t\t   CREATED BY : MUHAMMAD SHAHMIR KHAN\a";
						  }
						  
						  
				
                      	
				}
					
					break;
				//=========================================================================================================
				
				
				case 3://CHECK FORMULA
				
                    cout<<"\n\n\t\t\t\a     *********************";
	                cout<<"\n\n\t\t\t     *   CHECK FORMULA   *";
                    cout<<"\n\n\t\t\t     *********************";
                    
                    cout<<"\n\n\n\t  NUST HAS RELATIVE MARKING SYSTEM .";
                      	
						  
	 
						  //repeater ==========================
						  
						  
						  
						  cout<<"\n\n\n\n\t IF YOU WANT TO CONTINUE PRESS  [Y] :";
						  cin>>repeat;						  
						  
						  
						  if (repeat<89)
						  {
						  	cout<<"\n\n\n\n\n\t\t\t\t\t   CREATED BY : MUHAMMAD SHAHMIR KHAN\a";
						  }
						  
						  if (repeat>=90 && repeat<121)
						  {
						  	cout<<"\n\n\n\n\n\t\t\t\t\t   CREATED BY : MUHAMMAD SHAHMIR KHAN\a";
						  }
						  
						  if (repeat>=122)
						  {
						  	cout<<"\n\n\n\n\n\t\t\t\t\t   CREATED BY : MUHAMMAD SHAHMIR KHAN\a";
						  }
						  
						  
								
					break;
				//=========================================================================================================
					
				default:
				     cout<<"\n\n\n\t\t(((((((((((((((  INVALID NUMBER  )))))))))))))))";
	 
	 
						  //repeater ==========================
						  
						  
						  
						  cout<<"\n\n\n\n\t IF YOU WANT TO CONTINUE PRESS  [Y] :";
						  cin>>repeat;						  
						  
						  
						  if (repeat<89)
						  {
						  	cout<<"\n\n\n\n\n\t\t\t\t\t   CREATED BY : MUHAMMAD SHAHMIR KHAN\a";
						  }
						  
						  if (repeat>=90 && repeat<121)
						  {
						  	cout<<"\n\n\n\n\n\t\t\t\t\t   CREATED BY : MUHAMMAD SHAHMIR KHAN\a";
						  }
						  
						  if (repeat>=122)
						  {
						  	cout<<"\n\n\n\n\n\t\t\t\t\t   CREATED BY : MUHAMMAD SHAHMIR KHAN\a";
						  }
						  			
		
			}//inner switch
			
			
			
			break;
			
		//***************************************************************************************************************
		
		
		case 9://IIUI
		
		    //option
		    cout<<"\n\n\t1 =>  CALCULATE GPA";
			cout<<"\n\t2 =>  CALCULATE CGPA";
			cout<<"\n\t3 =>  CHECK FORMULA";
			 
			cout<<"\n\nWHAT YOU WANT TO DO : ";
			
			cin>>a;
			
			switch(a)
			{
				case 1://CALCULATE GPA
					
							
				{
				int subject=0;
				cout<<"HOW MANY SUBJECT :";
				cin>>subject;
					for( int i=0;i<subject;i++)
                      	{
                      		j++;
                      		cout<<"\n\n\n\t"<<j<<":-  SUBJECT MARKS  : ";
                      		cin>>c[i];
                      		cout<<"\t\t   SUBJECT CREDIT HOURS : ";
                      		cin>>d[i];
                      		
                      		if(c[i]>=80)
                      		{
                      			l[i]=4.00*d[i];
								  cout<<"\n\t\t\t\t\t GRADE  : A";                  			
								                       			
							  }
							  
							else if  ( (c[i]>=75)&&(c[i]<=79) )
							{
								l[i]=3.50*d[i];
								  cout<<"\n\t\t\t\t\t GRADE  : B+"; 
							}
							  
							else if ( (c[i]>=70)&&(c[i]<=74) )
							{
								l[i]=3.00*d[i];
								  cout<<"\n\t\t\t\t\t GRADE  : B"; 
							}
							  
							else if ( (c[i]>=65)&&(c[i]<=69) )
							{
								l[i]=2.50*d[i];
								  cout<<"\n\t\t\t\t\t GRADE  : C+"; 
							}
							  
							else if ( (c[i]>=60)&&(c[i]<=64) )
							{
								l[i]=2.00*d[i];
								  cout<<"\n\t\t\t\t\t GRADE  : C"; 
							}
							  
							else if ( (c[i]>=55)&&(c[i]<=59) )
							{
								l[i]=1.50*d[i];
								  cout<<"\n\t\t\t\t\t GRADE  : D+"; 
							}
							  
							else if ( (c[i]>=50)&&(c[i]<=54) )
							{
								l[i]=1.00*d[i];
								  cout<<"\n\t\t\t\t\t GRADE  : D"; 
							}
							 
																				
							else if ( c[i]<=49 )
							{
								l[i]=0*d[i];
								  cout<<"\n\t\t\t\t\t GRADE  : F"; 
								
							}
							//e=e+l[i];
							//cout<<e;
						}//FOR
						  
						  e=l[0]+l[1]+l[2]+l[3]+l[4]+l[5]+l[6]+l[7]+l[8];
						  f=d[0]+d[1]+d[2]+d[3]+d[4]+d[5]+d[6]+d[7]+d[8];
						 // cout<<e;//just to check e value****************************************
						  //cout<<f;//just to check e value
						  g=e/f;
						  cout<<"\n\n\n\tGPA : "<<g;//gpa 
						  
						  
	 
						  //repeater ==========================
						  
						  
						  
						  cout<<"\n\n\n\n\t IF YOU WANT TO CONTINUE PRESS  [Y] :";
						  cin>>repeat;						  
						  
						  
						  if (repeat<89)
						  {
						  	cout<<"\n\n\n\n\n\t\t\t\t\t   CREATED BY : MUHAMMAD SHAHMIR KHAN\a";
						  }
						  
						  if (repeat>=90 && repeat<121)
						  {
						  	cout<<"\n\n\n\n\n\t\t\t\t\t   CREATED BY : MUHAMMAD SHAHMIR KHAN\a";
						  }
						  
						  if (repeat>=122)
						  {
						  	cout<<"\n\n\n\n\n\t\t\t\t\t   CREATED BY : MUHAMMAD SHAHMIR KHAN\a";
						  }
						  
						  
					break;
					
					}
				
				//=========================================================================================================
				
				
				case 2://CALCULATE CGPA
					{
					    int z,j=0;
					    float x[9]={0},w[9]={0},m[9]={0},n=0,r=0,o=0;
					
						cout<<"\n\n\t\t\t\a**********************";
	                    cout<<"\n\n\t\t\t*   CALCULATE CGPA   *";
                      	cout<<"\n\n\t\t\t**********************";
                      	
                      	cout<<"\n\nENTER SEMESTER NUMBER : ";
                      	cin>>z;
                      	
                      	for(int i=0;i<z;i++)
                      	{
                      		j++;
                      		cout<<"\n\n\t"<<j<<":-  SEMESTER GPA : ";
                      		cin>>x[i];
                      		cout<<"\n\t\tSEMESTER CREDIT HOURS : ";
                      		cin>>w[i];
                      		
                      		m[i]=x[i]*w[i];
						  }
						  r=m[0]+m[1]+m[2]+m[3]+m[4]+m[5]+m[6]+m[7]+m[8];
						  n=w[0]+w[1]+w[2]+w[3]+w[4]+w[5]+w[6]+w[7]+w[8];
						  o=r/n;
						  cout<<"\n\n    YOUR CGPA IS  "<<o;
                      	
                      	
	 
						  //repeater ==========================
						  
						  
						  
						  cout<<"\n\n\n\n\t IF YOU WANT TO CONTINUE PRESS  [Y] :";
						  cin>>repeat;						  
						  
						  
						  if (repeat<89)
						  {
						  	cout<<"\n\n\n\n\n\t\t\t\t\t   CREATED BY : MUHAMMAD SHAHMIR KHAN\a";
						  }
						  
						  if (repeat>=90 && repeat<121)
						  {
						  	cout<<"\n\n\n\n\n\t\t\t\t\t   CREATED BY : MUHAMMAD SHAHMIR KHAN\a";
						  }
						  
						  if (repeat>=122)
						  {
						  	cout<<"\n\n\n\n\n\t\t\t\t\t   CREATED BY : MUHAMMAD SHAHMIR KHAN\a";
						  }
						  
						  
				
							
				}
					
					break;
				
				//=========================================================================================================
				
				case 3://CHECK FORMULA
				
                    cout<<"\n\n\t\t\t\a     *********************";
	                cout<<"\n\n\t\t\t     *   CHECK FORMULA   *";
                    cout<<"\n\n\t\t\t     *********************";
                    
                    cout<<"\n\n\n\t  ------------     \t    -----      \t         -------";
                    cout<<"\n\t   PECENTAGE     \t     GPA       \t          GRADE";
                    cout<<"\n\t  ------------     \t    -----      \t         -------";
                    
                    cout<<"\n\n\n\t  80%  -  100%     \t    4.00       \t           A+";
                    cout<<"\n\n\t   75% - 79%     \t    3.50                   B+";
                    cout<<"\n\n\t   70% - 74%     \t    3.00                   B";
                    cout<<"\n\n\t   65% - 69%     \t    2.50                   C+";
                    cout<<"\n\n\t   60% - 64%     \t    2.00                   C";
                    cout<<"\n\n\t   55% - 59%     \t    1.50                   D+";
                    cout<<"\n\n\t   50% - 54%     \t    1.00                   D";
                    cout<<"\n\n\t  49% AND LESS     \t    0.00                   F";
                      	
                      	
	 
						  //repeater ==========================
						  
						  
						  
						  cout<<"\n\n\n\n\t IF YOU WANT TO CONTINUE PRESS  [Y] :";
						  cin>>repeat;						  
						  
						  
						  if (repeat<89)
						  {
						  	cout<<"\n\n\n\n\n\t\t\t\t\t   CREATED BY : MUHAMMAD SHAHMIR KHAN\a";
						  }
						  
						  if (repeat>=90 && repeat<121)
						  {
						  	cout<<"\n\n\n\n\n\t\t\t\t\t   CREATED BY : MUHAMMAD SHAHMIR KHAN\a";
						  }
						  
						  if (repeat>=122)
						  {
						  	cout<<"\n\n\n\n\n\t\t\t\t\t   CREATED BY : MUHAMMAD SHAHMIR KHAN\a";
						  }
						  
						  
				
							
                      					
					break;
				//=========================================================================================================
					
				default:
				     cout<<"\n\n\n\t\t(((((((((((((((  INVALID NUMBER  )))))))))))))))";
	 
	 
						  //repeater ==========================
						  
						  
						  
						  cout<<"\n\n\n\n\t IF YOU WANT TO CONTINUE PRESS  [Y] :";
						  cin>>repeat;						  
						  
						  
						  if (repeat<89)
						  {
						  	cout<<"\n\n\n\n\n\t\t\t\t\t   CREATED BY : MUHAMMAD SHAHMIR KHAN\a";
						  }
						  
						  if (repeat>=90 && repeat<121)
						  {
						  	cout<<"\n\n\n\n\n\t\t\t\t\t   CREATED BY : MUHAMMAD SHAHMIR KHAN\a";
						  }
						  
						  if (repeat>=122)
						  {
						  	cout<<"\n\n\n\n\n\t\t\t\t\t   CREATED BY : MUHAMMAD SHAHMIR KHAN\a";
						  }
						  			
		
			}//inner switch
			
			
			
			break;
			
		//***************************************************************************************************************
		
		
		case 10://FAST
		
		    //option
		    cout<<"\n\n\t1 =>  CALCULATE GPA";
			cout<<"\n\t2 =>  CALCULATE CGPA";
			cout<<"\n\t3 =>  CHECK FORMULA";
			 
			cout<<"\n\nWHAT YOU WANT TO DO : ";
			
			cin>>a;
			
			switch(a)
			{
				case 1://CALCULATE GPA
					
						cout<<"\n\n\t\t\t\a**********************";
	                    cout<<"\n\n\t\t\t*   CALCULATE GPA    *";
                      	cout<<"\n\n\t\t\t**********************";
                      	
                      	
                      	cout<<"\n\n\n\t CUST HAS RELATIVE MARKING .";
					
	 
						  //repeater ==========================
						  
						  
						  
						  cout<<"\n\n\n\n\t IF YOU WANT TO CONTINUE PRESS  [Y] :";
						  cin>>repeat;						  
						  
						  
						  if (repeat<89)
						  {
						  	cout<<"\n\n\n\n\n\t\t\t\t\t   CREATED BY : MUHAMMAD SHAHMIR KHAN\a";
						  }
						  
						  if (repeat>=90 && repeat<121)
						  {
						  	cout<<"\n\n\n\n\n\t\t\t\t\t   CREATED BY : MUHAMMAD SHAHMIR KHAN\a";
						  }
						  
						  if (repeat>=122)
						  {
						  	cout<<"\n\n\n\n\n\t\t\t\t\t   CREATED BY : MUHAMMAD SHAHMIR KHAN\a";
						  }
						  
						  
						  
					break;
				//=========================================================================================================
				
				
				case 2://CALCULATE CGPA
					{
					    int z,j=0;
					    float x[9]={0},w[9]={0},m[9]={0},n=0,r=0,o=0;
					
						cout<<"\n\n\t\t\t\a**********************";
	                    cout<<"\n\n\t\t\t*   CALCULATE CGPA   *";
                      	cout<<"\n\n\t\t\t**********************";
                      	
                      	cout<<"\n\nENTER SEMESTER NUMBER : ";
                      	cin>>z;
                      	
                      	for(int i=0;i<z;i++)
                      	{
                      		j++;
                      		cout<<"\n\n\t"<<j<<":-  SEMESTER GPA : ";
                      		cin>>x[i];
                      		cout<<"\n\t\tSEMESTER CREDIT HOURS : ";
                      		cin>>w[i];
                      		
                      		m[i]=x[i]*w[i];
						  }
						  r=m[0]+m[1]+m[2]+m[3]+m[4]+m[5]+m[6]+m[7]+m[8];
						  n=w[0]+w[1]+w[2]+w[3]+w[4]+w[5]+w[6]+w[7]+w[8];
						  o=r/n;
						  cout<<"\n\n    YOUR CGPA IS  "<<o;
						  
						  
	 
						  //repeater ==========================
						  
						  
						  
						  cout<<"\n\n\n\n\t IF YOU WANT TO CONTINUE PRESS  [Y] :";
						  cin>>repeat;						  
						  
						  
						  if (repeat<89)
						  {
						  	cout<<"\n\n\n\n\n\t\t\t\t\t   CREATED BY : MUHAMMAD SHAHMIR KHAN\a";
						  }
						  
						  if (repeat>=90 && repeat<121)
						  {
						  	cout<<"\n\n\n\n\n\t\t\t\t\t   CREATED BY : MUHAMMAD SHAHMIR KHAN\a";
						  }
						  
						  if (repeat>=122)
						  {
						  	cout<<"\n\n\n\n\n\t\t\t\t\t   CREATED BY : MUHAMMAD SHAHMIR KHAN\a";
						  }
						  
						  
                      	
                      	
				}
					
					break;
				//=========================================================================================================
				
				
				case 3://CHECK FORMULA
				
                    cout<<"\n\n\t\t\t\a     *********************";
	                cout<<"\n\n\t\t\t     *   CHECK FORMULA   *";
                    cout<<"\n\n\t\t\t     *********************";
                    
                    cout<<"\n\n\n\t  FAST HAS RELATIVE MATKING .";
                      	
                      	
	 
						  //repeater ==========================
						  
						  
						  
						  cout<<"\n\n\n\n\t IF YOU WANT TO CONTINUE PRESS  [Y] :";
						  cin>>repeat;						  
						  
						  
						  if (repeat<89)
						  {
						  	cout<<"\n\n\n\n\n\t\t\t\t\t   CREATED BY : MUHAMMAD SHAHMIR KHAN\a";
						  }
						  
						  if (repeat>=90 && repeat<121)
						  {
						  	cout<<"\n\n\n\n\n\t\t\t\t\t   CREATED BY : MUHAMMAD SHAHMIR KHAN\a";
						  }
						  
						  if (repeat>=122)
						  {
						  	cout<<"\n\n\n\n\n\t\t\t\t\t   CREATED BY : MUHAMMAD SHAHMIR KHAN\a";
						  }
						  
						  
                      					
					break;
				//=========================================================================================================
					
				default:
				     cout<<"\n\n\n\t\t(((((((((((((((  INVALID NUMBER  )))))))))))))))";
	 
	 
						  //repeater ==========================
						  
						  
						  
						  cout<<"\n\n\n\n\t IF YOU WANT TO CONTINUE PRESS  [Y] :";
						  cin>>repeat;						  
						  
						  
						  if (repeat<89)
						  {
						  	cout<<"\n\n\n\n\n\t\t\t\t\t   CREATED BY : MUHAMMAD SHAHMIR KHAN\a";
						  }
						  
						  if (repeat>=90 && repeat<121)
						  {
						  	cout<<"\n\n\n\n\n\t\t\t\t\t   CREATED BY : MUHAMMAD SHAHMIR KHAN\a";
						  }
						  
						  if (repeat>=122)
						  {
						  	cout<<"\n\n\n\n\n\t\t\t\t\t   CREATED BY : MUHAMMAD SHAHMIR KHAN\a";
						  }
						  			
			
			}//inner switch
			
			
			
			break;
			
		//***************************************************************************************************************
		
		
		case 11://IQRA
		
		    //option
		    cout<<"\n\n\t1 =>  CALCULATE GPA";
			cout<<"\n\t2 =>  CALCULATE CGPA";
			cout<<"\n\t3 =>  CHECK FORMULA";
			 
			cout<<"\n\nWHAT YOU WANT TO DO : ";
			
			cin>>a;
			
			switch(a)
			{
				case 1://CALCULATE GPA
				
							
				{
				int subject=0;
				cout<<"HOW MANY SUBJECT :";
				cin>>subject;
					for( int i=0;i<subject;i++)
                      	{
                      		j++;
                      		cout<<"\n\n\n\t"<<j<<":-  SUBJECT MARKS  : ";
                      		cin>>c[i];
                      		cout<<"\t\t   SUBJECT CREDIT HOURS : ";
                      		cin>>d[i];
                      		
                      		if(c[i]>=88)
                      		{
                      			l[i]=4.00*d[i];
								  cout<<"\n\t\t\t\t\t GRADE  : A";                  			
								                       			
							  }
							  
							else if  ( (c[i]>=81)&&(c[i]<=87) )
							{
								l[i]=3.50*d[i];
								  cout<<"\n\t\t\t\t\t GRADE  : B+"; 
							}
							  
							else if ( (c[i]>=74)&&(c[i]<=80) )
							{
								l[i]=3.00*d[i];
								  cout<<"\n\t\t\t\t\t GRADE  : B"; 
							}
							  
							else if ( (c[i]>=67)&&(c[i]<=73) )
							{
								l[i]=2.50*d[i];
								  cout<<"\n\t\t\t\t\t GRADE  : C+"; 
							}
							  
							else if ( (c[i]>=60)&&(c[i]<=66) )
							{
								l[i]=2.00*d[i];
								  cout<<"\n\t\t\t\t\t GRADE  : C"; 
							}
							  							 												
							else if ( c[i]<=59 )
							{
								l[i]=0*d[i];
								  cout<<"\n\t\t\t\t\t GRADE  : F"; 
								
							}
							//e=e+l[i];
							//cout<<e;
						}//FOR
						  
						  e=l[0]+l[1]+l[2]+l[3]+l[4]+l[5]+l[6]+l[7]+l[8];
						  f=d[0]+d[1]+d[2]+d[3]+d[4]+d[5]+d[6]+d[7]+d[8];
						 // cout<<e;//just to check e value****************************************
						  //cout<<f;//just to check e value
						  g=e/f;
						  cout<<"\n\n\n\tGPA : "<<g;//gpa 
						  
	 
						  //repeater ==========================
						  
						  
						  
						  cout<<"\n\n\n\n\t IF YOU WANT TO CONTINUE PRESS  [Y] :";
						  cin>>repeat;						  
						  
						  
						  if (repeat<89)
						  {
						  	cout<<"\n\n\n\n\n\t\t\t\t\t   CREATED BY : MUHAMMAD SHAHMIR KHAN\a";
						  }
						  
						  if (repeat>=90 && repeat<121)
						  {
						  	cout<<"\n\n\n\n\n\t\t\t\t\t   CREATED BY : MUHAMMAD SHAHMIR KHAN\a";
						  }
						  
						  if (repeat>=122)
						  {
						  	cout<<"\n\n\n\n\n\t\t\t\t\t   CREATED BY : MUHAMMAD SHAHMIR KHAN\a";
						  }
						  
						  
				
				
				
					break;
					
					}
				
					break;
				//=========================================================================================================
				
				
				case 2://CALCULATE CGPA
					{
					    int z,j=0;
					    float x[9]={0},w[9]={0},m[9]={0},n=0,r=0,o=0;
					
						cout<<"\n\n\t\t\t\a**********************";
	                    cout<<"\n\n\t\t\t*   CALCULATE CGPA   *";
                      	cout<<"\n\n\t\t\t**********************";
                      	
                      	cout<<"\n\nENTER SEMESTER NUMBER : ";
                      	cin>>z;
                      	
                      	for(int i=0;i<z;i++)
                      	{
                      		j++;
                      		cout<<"\n\n\t"<<j<<":-  SEMESTER GPA : ";
                      		cin>>x[i];
                      		cout<<"\n\t\tSEMESTER CREDIT HOURS : ";
                      		cin>>w[i];
                      		
                      		m[i]=x[i]*w[i];
						  }
						  r=m[0]+m[1]+m[2]+m[3]+m[4]+m[5]+m[6]+m[7]+m[8];
						  n=w[0]+w[1]+w[2]+w[3]+w[4]+w[5]+w[6]+w[7]+w[8];
						  o=r/n;
						  cout<<"\n\n    YOUR CGPA IS  "<<o;
                      	
						  
	 
						  //repeater ==========================
						  
						  
						  
						  cout<<"\n\n\n\n\t IF YOU WANT TO CONTINUE PRESS  [Y] :";
						  cin>>repeat;						  
						  
						  
						  if (repeat<89)
						  {
						  	cout<<"\n\n\n\n\n\t\t\t\t\t   CREATED BY : MUHAMMAD SHAHMIR KHAN\a";
						  }
						  
						  if (repeat>=90 && repeat<121)
						  {
						  	cout<<"\n\n\n\n\n\t\t\t\t\t   CREATED BY : MUHAMMAD SHAHMIR KHAN\a";
						  }
						  
						  if (repeat>=122)
						  {
						  	cout<<"\n\n\n\n\n\t\t\t\t\t   CREATED BY : MUHAMMAD SHAHMIR KHAN\a";
						  }
						  
						  
						  
                      	
				}
					
					break;
				
				//=========================================================================================================
				
				case 3://CHECK FORMULA
				
                    cout<<"\n\n\t\t\t\a     *********************";
	                cout<<"\n\n\t\t\t     *   CHECK FORMULA   *";
                    cout<<"\n\n\t\t\t     *********************";
                    
                    cout<<"\n\n\n\t  ------------     \t    -----      \t         -------";
                    cout<<"\n\t   PECENTAGE     \t     GPA       \t          GRADE";
                    cout<<"\n\t  ------------     \t    -----      \t         -------";
                    
                    cout<<"\n\n\n\t  88%  -  100%     \t    4.00       \t           A";
                    cout<<"\n\n\t   81% - 87%     \t    3.50                   B+";
                    cout<<"\n\n\t   74% - 80%     \t    3.00                   B";
                    cout<<"\n\n\t   67% - 73%     \t    2.50                   C+";
                    cout<<"\n\n\t   60% - 66%     \t    2.00                   C";
                    cout<<"\n\n\t  59% AND LESS     \t    0.00                   F";
                      	
                      	
						  
	 
						  //repeater ==========================
						  
						  
						  
						  cout<<"\n\n\n\n\t IF YOU WANT TO CONTINUE PRESS  [Y] :";
						  cin>>repeat;						  
						  
						  
						  if (repeat<89)
						  {
						  	cout<<"\n\n\n\n\n\t\t\t\t\t   CREATED BY : MUHAMMAD SHAHMIR KHAN\a";
						  }
						  
						  if (repeat>=90 && repeat<121)
						  {
						  	cout<<"\n\n\n\n\n\t\t\t\t\t   CREATED BY : MUHAMMAD SHAHMIR KHAN\a";
						  }
						  
						  if (repeat>=122)
						  {
						  	cout<<"\n\n\n\n\n\t\t\t\t\t   CREATED BY : MUHAMMAD SHAHMIR KHAN\a";
						  }
						  
						  
                      					
					break;
				//=========================================================================================================
					
				default:
				     cout<<"\n\n\n\t\t(((((((((((((((  INVALID NUMBER  )))))))))))))))";
	 
	 
						  //repeater ==========================
						  
						  
						  
						  cout<<"\n\n\n\n\t IF YOU WANT TO CONTINUE PRESS  [Y] :";
						  cin>>repeat;						  
						  
						  
						  if (repeat<89)
						  {
						  	cout<<"\n\n\n\n\n\t\t\t\t\t   CREATED BY : MUHAMMAD SHAHMIR KHAN\a";
						  }
						  
						  if (repeat>=90 && repeat<121)
						  {
						  	cout<<"\n\n\n\n\n\t\t\t\t\t   CREATED BY : MUHAMMAD SHAHMIR KHAN\a";
						  }
						  
						  if (repeat>=122)
						  {
						  	cout<<"\n\n\n\n\n\t\t\t\t\t   CREATED BY : MUHAMMAD SHAHMIR KHAN\a";
						  }
						  			
		
			}//inner switch
			
			
			
			break;
			
		//***************************************************************************************************************
		
		
		case 12://IST
		
		    //option
		    cout<<"\n\n\t1 =>  CALCULATE GPA";
			cout<<"\n\t2 =>  CALCULATE CGPA";
			cout<<"\n\t3 =>  CHECK FORMULA";
			 
			cout<<"\n\nWHAT YOU WANT TO DO : ";
			
			cin>>a;
			
			switch(a)
			{
				case 1://CALCULATE GPA
					
						cout<<"\n\n\t\t\t\a**********************";
	                    cout<<"\n\n\t\t\t*   CALCULATE GPA    *";
                      	cout<<"\n\n\t\t\t**********************";
                      	
                      	
                      	cout<<"\n\n\n\t IST  HAS RELATIVE MARKING .";
					
	 
						  //repeater ==========================
						  
						  
						  
						  cout<<"\n\n\n\n\t IF YOU WANT TO CONTINUE PRESS  [Y] :";
						  cin>>repeat;						  
						  
						  
						  if (repeat<89)
						  {
						  	cout<<"\n\n\n\n\n\t\t\t\t\t   CREATED BY : MUHAMMAD SHAHMIR KHAN\a";
						  }
						  
						  if (repeat>=90 && repeat<121)
						  {
						  	cout<<"\n\n\n\n\n\t\t\t\t\t   CREATED BY : MUHAMMAD SHAHMIR KHAN\a";
						  }
						  
						  if (repeat>=122)
						  {
						  	cout<<"\n\n\n\n\n\t\t\t\t\t   CREATED BY : MUHAMMAD SHAHMIR KHAN\a";
						  }
						  
						  
						  
					break;
				
				//=========================================================================================================
				
				case 2://CALCULATE CGPA
					{
					    int z,j=0;
					    float x[9]={0},w[9]={0},m[9]={0},n=0,r=0,o=0;
					
						cout<<"\n\n\t\t\t\a**********************";
	                    cout<<"\n\n\t\t\t*   CALCULATE CGPA   *";
                      	cout<<"\n\n\t\t\t**********************";
                      	
                      	cout<<"\n\nENTER SEMESTER NUMBER : ";
                      	cin>>z;
                      	
                      	for(int i=0;i<z;i++)
                      	{
                      		j++;
                      		cout<<"\n\n\t"<<j<<":-  SEMESTER GPA : ";
                      		cin>>x[i];
                      		cout<<"\n\t\tSEMESTER CREDIT HOURS : ";
                      		cin>>w[i];
                      		
                      		m[i]=x[i]*w[i];
						  }
						  r=m[0]+m[1]+m[2]+m[3]+m[4]+m[5]+m[6]+m[7]+m[8];
						  n=w[0]+w[1]+w[2]+w[3]+w[4]+w[5]+w[6]+w[7]+w[8];
						  o=r/n;
						  cout<<"\n\n    YOUR CGPA IS  "<<o;
                      	
                      	
	 
						  //repeater ==========================
						  
						  
						  
						  cout<<"\n\n\n\n\t IF YOU WANT TO CONTINUE PRESS  [Y] :";
						  cin>>repeat;						  
						  
						  
						  if (repeat<89)
						  {
						  	cout<<"\n\n\n\n\n\t\t\t\t\t   CREATED BY : MUHAMMAD SHAHMIR KHAN\a";
						  }
						  
						  if (repeat>=90 && repeat<121)
						  {
						  	cout<<"\n\n\n\n\n\t\t\t\t\t   CREATED BY : MUHAMMAD SHAHMIR KHAN\a";
						  }
						  
						  if (repeat>=122)
						  {
						  	cout<<"\n\n\n\n\n\t\t\t\t\t   CREATED BY : MUHAMMAD SHAHMIR KHAN\a";
						  }
						  
						  
						  
				}
					
					break;
				
				//=========================================================================================================
				
				case 3://CHECK FORMULA
				
                    cout<<"\n\n\t\t\t\a     *********************";
	                cout<<"\n\n\t\t\t     *   CHECK FORMULA   *";
                    cout<<"\n\n\t\t\t     *********************";
                    
                    
                    cout<<"\n\n\n\t  FAST HAS RELATIVE MATKING .";
                      	
	 
						  //repeater ==========================
						  
						  
						  
						  cout<<"\n\n\n\n\t IF YOU WANT TO CONTINUE PRESS  [Y] :";
						  cin>>repeat;						  
						  
						  
						  if (repeat<89)
						  {
						  	cout<<"\n\n\n\n\n\t\t\t\t\t   CREATED BY : MUHAMMAD SHAHMIR KHAN\a";
						  }
						  
						  if (repeat>=90 && repeat<121)
						  {
						  	cout<<"\n\n\n\n\n\t\t\t\t\t   CREATED BY : MUHAMMAD SHAHMIR KHAN\a";
						  }
						  
						  if (repeat>=122)
						  {
						  	cout<<"\n\n\n\n\n\t\t\t\t\t   CREATED BY : MUHAMMAD SHAHMIR KHAN\a";
						  }
						  
						  
						  
					break;
				//=========================================================================================================
					
				default:
				     cout<<"\n\n\n\t\t(((((((((((((((  INVALID NUMBER  )))))))))))))))";
	 
	 
						  //repeater ==========================
						  
						  
						  
						  cout<<"\n\n\n\n\t IF YOU WANT TO CONTINUE PRESS  [Y] :";
						  cin>>repeat;						  
						  
						  
						  if (repeat<89)
						  {
						  	cout<<"\n\n\n\n\n\t\t\t\t\t   CREATED BY : MUHAMMAD SHAHMIR KHAN\a";
						  }
						  
						  if (repeat>=90 && repeat<121)
						  {
						  	cout<<"\n\n\n\n\n\t\t\t\t\t   CREATED BY : MUHAMMAD SHAHMIR KHAN\a";
						  }
						  
						  if (repeat>=122)
						  {
						  	cout<<"\n\n\n\n\n\t\t\t\t\t   CREATED BY : MUHAMMAD SHAHMIR KHAN\a";
						  }
						  			
		
			}//inner switch
			
			 
			
			break;
			
		//***************************************************************************************************************
		
		case 13://RIPHAH
		     
		    
			 
		     
		    //option
		    cout<<"\n\n\t1 =>  CALCULATE GPA";
			cout<<"\n\t2 =>  CALCULATE CGPA";
			cout<<"\n\t3 =>  CHECK FORMULA";
			 
			cout<<"\n\nWHAT YOU WANT TO DO : ";
			
			cin>>a;
			
			switch(a)
			{
				case 1://CALCULATE GPA
							
				{
				int subject=0;
				cout<<"HOW MANY SUBJECT :";
				cin>>subject;
					for( int i=0;i<subject;i++)
                      	{
                      		j++;
                      		cout<<"\n\n\n\t"<<j<<":-  SUBJECT MARKS  : ";
                      		cin>>c[i];
                      		cout<<"\t\t   SUBJECT CREDIT HOURS : ";
                      		cin>>d[i];
                      		
                      		if(c[i]>=90)
                      		{
                      			l[i]=4.00*d[i];
								  cout<<"\n\t\t\t\t\t GRADE  : A+";                  			
								                       			
							  }
							  
							else if  ( (c[i]>=80)&&(c[i]<=89) )
							{
								l[i]=4.00*d[i];
								  cout<<"\n\t\t\t\t\t GRADE  : A"; 
							}
							  
							  //70%
							  
							else if ( c[i]==70 )
							{
								l[i]=3.00*d[i];
								  cout<<"\n\t\t\t\t\t GRADE  : B"; 
							}
							  
							else if ( c[i]==71 )
							{
								l[i]=3.10*d[i];
								  cout<<"\n\t\t\t\t\t GRADE  : B"; 
							}
							  
							else if ( c[i]==72 )
							{
								l[i]=3.20*d[i];
								  cout<<"\n\t\t\t\t\t GRADE  : B"; 
							}
							  
							else if ( c[i]==73 )
							{
								l[i]=3.30*d[i];
								  cout<<"\n\t\t\t\t\t GRADE  : B"; 
							}
							  
							else if ( c[i]==74 )
							{
								l[i]=3.40*d[i];
								  cout<<"\n\t\t\t\t\t GRADE  : B"; 
							}
							  
							else if ( c[i]==75 )
							{
								l[i]=3.50*d[i];
								  cout<<"\n\t\t\t\t\t GRADE  : B"; 
							}
							  
							else if ( c[i]==76 )
							{
								l[i]=3.60*d[i];
								  cout<<"\n\t\t\t\t\t GRADE  : B"; 
							}
							  
							else if ( c[i]==77 )
							{
								l[i]=3.70*d[i];
								  cout<<"\n\t\t\t\t\t GRADE  : B"; 
							}
							  
							else if ( c[i]==78 )
							{
								l[i]=3.80*d[i];
								  cout<<"\n\t\t\t\t\t GRADE  : B"; 
							}
							  
							else if ( c[i]==79 )
							{
								l[i]=3.90*d[i];
								  cout<<"\n\t\t\t\t\t GRADE  : B"; 
							}
							
							
							//60%
							
							  
							else if ( c[i]==60 )
							{
								l[i]=2.00*d[i];
								  cout<<"\n\t\t\t\t\t GRADE  : C"; 
							}
							  
							else if ( c[i]==61 )
							{
								l[i]=2.10*d[i];
								  cout<<"\n\t\t\t\t\t GRADE  : C"; 
							}
							  
							else if ( c[i]==62 )
							{
								l[i]=2.20*d[i];
								  cout<<"\n\t\t\t\t\t GRADE  : C"; 
							}
							  
							else if ( c[i]==63 )
							{
								l[i]=2.30*d[i];
								  cout<<"\n\t\t\t\t\t GRADE  : C"; 
							}
							  
							else if ( c[i]==64 )
							{
								l[i]=2.40*d[i];
								  cout<<"\n\t\t\t\t\t GRADE  : C"; 
							}
							  
							else if ( c[i]==65 )
							{
								l[i]=2.50*d[i];
								  cout<<"\n\t\t\t\t\t GRADE  : C"; 
							}
							  
							else if ( c[i]==66 )
							{
								l[i]=2.60*d[i];
								  cout<<"\n\t\t\t\t\t GRADE  : C"; 
							}
							  
							else if ( c[i]==67 )
							{
								l[i]=2.70*d[i];
								  cout<<"\n\t\t\t\t\t GRADE  : C"; 
							}
							  
							else if ( c[i]==68 )
							{
								l[i]=2.80*d[i];
								  cout<<"\n\t\t\t\t\t GRADE  : C"; 
							}
							  
							else if ( c[i]==69 )
							{
								l[i]=2.90*d[i];
								  cout<<"\n\t\t\t\t\t GRADE  : C"; 
							}
							
							
							
							  //50%
							 
							  
							  
							else if ( c[i]==50 )
							{
								l[i]=1.00*d[i];
								  cout<<"\n\t\t\t\t\t GRADE  : D"; 
							}  
							  
							else if ( c[i]==51 )
							{
								l[i]=1.10*d[i];
								  cout<<"\n\t\t\t\t\t GRADE  : D"; 
							}
							  
							else if ( c[i]==52 )
							{
								l[i]=1.20*d[i];
								  cout<<"\n\t\t\t\t\t GRADE  : D"; 
							} 
							  
							else if ( c[i]==53 )
							{
								l[i]=1.30*d[i];
								  cout<<"\n\t\t\t\t\t GRADE  : D"; 
							} 
							  
							else if ( c[i]==54 )
							{
								l[i]=1.40*d[i];
								  cout<<"\n\t\t\t\t\t GRADE  : D"; 
							} 
							  
							else if ( c[i]==55 )
							{
								l[i]=1.50*d[i];
								  cout<<"\n\t\t\t\t\t GRADE  : D"; 
							} 
							  
							else if ( c[i]==56 )
							{
								l[i]=1.60*d[i];
								  cout<<"\n\t\t\t\t\t GRADE  : D"; 
							} 
							  
							else if ( c[i]==57 )
							{
								l[i]=1.70*d[i];
								  cout<<"\n\t\t\t\t\t GRADE  : D"; 
							} 
							  
							else if ( c[i]==58 )
							{
								l[i]=1.80*d[i];
								  cout<<"\n\t\t\t\t\t GRADE  : D"; 
							} 
							  
							else if ( c[i]==59 )
							{
								l[i]=1.90*d[i];
								  cout<<"\n\t\t\t\t\t GRADE  : D"; 
							}				
																									
							else if ( c[i]<=49 )
							{
								l[i]=0*d[i];
								  cout<<"\n\t\t\t\t\t GRADE  : F"; 
								
							}
							//e=e+l[i];
							//cout<<e;
						}//FOR
						  
						  e=l[0]+l[1]+l[2]+l[3]+l[4]+l[5]+l[6]+l[7]+l[8];
						  f=d[0]+d[1]+d[2]+d[3]+d[4]+d[5]+d[6]+d[7]+d[8];
						 // cout<<e;//just to check e value****************************************
						  //cout<<f;//just to check e value
						  g=e/f;
						  cout<<"\n\n\n\tGPA : "<<g;//gpa 
						  
	 
						  //repeater ==========================
						  
						  
						  
						  cout<<"\n\n\n\n\t IF YOU WANT TO CONTINUE PRESS  [Y] :";
						  cin>>repeat;						  
						  
						  
						  if (repeat<89)
						  {
						  	cout<<"\n\n\n\n\n\t\t\t\t\t   CREATED BY : MUHAMMAD SHAHMIR KHAN\a";
						  }
						  
						  if (repeat>=90 && repeat<121)
						  {
						  	cout<<"\n\n\n\n\n\t\t\t\t\t   CREATED BY : MUHAMMAD SHAHMIR KHAN\a";
						  }
						  
						  if (repeat>=122)
						  {
						  	cout<<"\n\n\n\n\n\t\t\t\t\t   CREATED BY : MUHAMMAD SHAHMIR KHAN\a";
						  }
						  
						  
				
				
					break;
					
					}
				
				//=========================================================================================================
				
				
				case 2://CALCULATE CGPA
					{
					    int z,j=0;
					    float x[9]={0},w[9]={0},m[9]={0},n=0,r=0,o=0;
					
						cout<<"\n\n\t\t\t\a**********************";
	                    cout<<"\n\n\t\t\t*   CALCULATE CGPA   *";
                      	cout<<"\n\n\t\t\t**********************";
                      	
                      	cout<<"\n\nENTER SEMESTER NUMBER : ";
                      	cin>>z;
                      	
                      	for(int i=0;i<z;i++)
                      	{
                      		j++;
                      		cout<<"\n\n\t"<<j<<":-  SEMESTER GPA : ";
                      		cin>>x[i];
                      		cout<<"\n\t\tSEMESTER CREDIT HOURS : ";
                      		cin>>w[i];
                      		
                      		m[i]=x[i]*w[i];
						  }
						  r=m[0]+m[1]+m[2]+m[3]+m[4]+m[5]+m[6]+m[7]+m[8];
						  n=w[0]+w[1]+w[2]+w[3]+w[4]+w[5]+w[6]+w[7]+w[8];
						  o=r/n;
						  cout<<"\n\n    YOUR CGPA IS  "<<o;
                      	
	 
						  //repeater ==========================
						  
						  
						  
						  cout<<"\n\n\n\n\t IF YOU WANT TO CONTINUE PRESS  [Y] :";
						  cin>>repeat;						  
						  
						  
						  if (repeat<89)
						  {
						  	cout<<"\n\n\n\n\n\t\t\t\t\t   CREATED BY : MUHAMMAD SHAHMIR KHAN\a";
						  }
						  
						  if (repeat>=90 && repeat<121)
						  {
						  	cout<<"\n\n\n\n\n\t\t\t\t\t   CREATED BY : MUHAMMAD SHAHMIR KHAN\a";
						  }
						  
						  if (repeat>=122)
						  {
						  	cout<<"\n\n\n\n\n\t\t\t\t\t   CREATED BY : MUHAMMAD SHAHMIR KHAN\a";
						  }
						  
						  
						  
				}
					
					break;
				
				//=========================================================================================================
				
				case 3://CHECK FORMULA
				
                    cout<<"\n\n\t\t\t\a     *********************";
	                cout<<"\n\n\t\t\t     *   CHECK FORMULA   *";
                    cout<<"\n\n\t\t\t     *********************";
                    
                    cout<<"\n\n\n\t  ------------     \t    -----      \t         -------";
                    cout<<"\n\t   PECENTAGE     \t     GPA       \t          GRADE";
                    cout<<"\n\t  ------------     \t    -----      \t         -------";
                    
                    cout<<"\n\n\n\t  90%  -  100%     \t    4.00       \t           A+";
                    cout<<"\n\n\t   80% - 89%     \t    4.00                   A";
                    cout<<"\n\n\t   70% - 79%     \t    3.66*                  B";
                    cout<<"\n\n\t   60% - 69%     \t    2.33*                  C";
                    cout<<"\n\n\t   50% - 59%     \t    1.00*                  D";
                    cout<<"\n\n\t  49% AND LESS     \t    0.00                   F";
                    
                    cout<<"\n\n\n (*) BY INCREASE OF EVERY 1% ,  0.1 IS ADDED IN GPA";
                      	
	 
						  //repeater ==========================
						  
						  
						  
						  cout<<"\n\n\n\n\t IF YOU WANT TO CONTINUE PRESS  [Y] :";
						  cin>>repeat;						  
						  
						  
						  if (repeat<89)
						  {
						  	cout<<"\n\n\n\n\n\t\t\t\t\t   CREATED BY : MUHAMMAD SHAHMIR KHAN\a";
						  }
						  
						  if (repeat>=90 && repeat<121)
						  {
						  	cout<<"\n\n\n\n\n\t\t\t\t\t   CREATED BY : MUHAMMAD SHAHMIR KHAN\a";
						  }
						  
						  if (repeat>=122)
						  {
						  	cout<<"\n\n\n\n\n\t\t\t\t\t   CREATED BY : MUHAMMAD SHAHMIR KHAN\a";
						  }
						  
						  
						  
                      	
                      					
					break;
				//=========================================================================================================
					
				default:
				     cout<<"\n\n\n\t\t(((((((((((((((  INVALID NUMBER  )))))))))))))))";
	 
	 
						  //repeater ==========================
						  
						  
						  
						  cout<<"\n\n\n\n\t IF YOU WANT TO CONTINUE PRESS  [Y] :";
						  cin>>repeat;						  
						  
						  
						  if (repeat<89)
						  {
						  	cout<<"\n\n\n\n\n\t\t\t\t\t   CREATED BY : MUHAMMAD SHAHMIR KHAN\a";
						  }
						  
						  if (repeat>=90 && repeat<121)
						  {
						  	cout<<"\n\n\n\n\n\t\t\t\t\t   CREATED BY : MUHAMMAD SHAHMIR KHAN\a";
						  }
						  
						  if (repeat>=122)
						  {
						  	cout<<"\n\n\n\n\n\t\t\t\t\t   CREATED BY : MUHAMMAD SHAHMIR KHAN\a";
						  }
						  			
		
				     
					 	
			}//inner switch
		
		
	
			
			
			break;
		
			
		
		
		default:
			
			cout<<"\n\n\n\t\t(((((((((((((((  INVALID NUMBER  )))))))))))))))";
	 
	 
						  //repeater ==========================
						  
						  
						  
						  cout<<"\n\n\n\n\t IF YOU WANT TO CONTINUE PRESS  [Y] :";
						  cin>>repeat;						  
						  
						  
						  if (repeat<89)
						  {
						  	cout<<"\n\n\n\n\n\t\t\t\t\t   CREATED BY : MUHAMMAD SHAHMIR KHAN\a";
						  }
						  
						  if (repeat>=90 && repeat<121)
						  {
						  	cout<<"\n\n\n\n\n\t\t\t\t\t   CREATED BY : MUHAMMAD SHAHMIR KHAN\a";
						  }
						  
						  if (repeat>=122)
						  {
						  	cout<<"\n\n\n\n\n\t\t\t\t\t   CREATED BY : MUHAMMAD SHAHMIR KHAN\a";
						  }
						  			
			break;

			
			
	}//switch
		
	
	cout<<"\a";
	
}//do
while( repeat == 'y' || repeat =='Y' );
getch();



}//main
