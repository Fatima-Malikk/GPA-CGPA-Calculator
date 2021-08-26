#include<fstream>
#include<string.h>
#include<iostream>
#include<conio.h>
#include<windows.h>

using namespace std;
 
class student
{
	
          protected:
          	
          char name[40];
          char roll[10];
          char dep[20];
          char batch[5];
          
};


class GPA:protected student
{
	
 public:           	
                 		
                  float calsgpa();
                  float marks[10];
                  char subname[10][20];
                 
                  float credit[10];
                  float totalcredit;
                  float subg[10];
                  float total;
                  int i;
   
                  int no_of_courses;            
                  float gpa[5];
                  char grade;
                  char gradeno[4];
                  float final;
public:
    
     	GPA(){
                totalcredit =0;
			    total=0;    
			}
																	
void gra(float gpa[]);
                                            
void calculation()
	       	{    
	       	cout<<"\t\t-------------- GPA Calculating -----------------\n\n"<<endl;
          cout<<"\nEnter the name:  ";
          cin>>name;
          cout<<"\nEnter the roll number:  ";
          cin>>roll;
          cout<<"\nEnter the Department:   ";
          cin>>dep;
          cout<<"\nEnter the Batch:   ";
          cin>>batch;
     
     
          ofstream out(roll); 

   
          out<<"\nName :"<<" "<<name;
          out<<"\nRoll :"<<" "<<roll;
          out<<"\nDepartment :"<<" "<<dep;
		  out<<"\nBatch :"<<" "<<batch;
            
         
          cout<<"\n\nNo. of Courses : ";
          cin>>no_of_courses;
          out<<"\nNumber of courses : "<<no_of_courses;
          
         
       for(i=0;i<no_of_courses;i++)
	        {
         
									 {
                            
          cout<<"\nEnter course "<< i+1<<" name : ";
          cin>>subname[i];
         
          out<<"\nCourse "<< i+1<<" name : "<<subname[i];
       
          cout<<"\nEnter the marks obtained : ";              
          cin>>marks[i];
       
          out<<"\nMarks obtained : "<<marks[i];
          gpa[i]=calgpa(marks);
       
          cout<<"\n\tGPA in " <<subname[i] << " : "<<gpa[i]<<endl;
          out<<"\n\tGPA in " <<subname[i] << " : "<<gpa[i]<<endl;
 
          gra(gpa);
 

          cout<<"\n\tGrade in " <<subname[i] << " :"<<gradeno<<endl;
          out<<"\n\tGrade in " <<subname[i] << " :"<<gradeno<<endl;
 
}

}
}

float calgpa(float marks[])

{
while(1)
{

if(marks[i]>=85 && marks[i]<=100)
{

            return 4.0;
            
}

else if (marks[i]>=80 && marks[i]<85)
{

           return 3.7;
   
}

else if (marks[i]>=75 && marks[i]<80)
{

            return 3.3;

}

else if (marks[i]>=70 && marks[i]<75)
{

            return 3.0;

}

else if (marks[i]>=65 && marks[i]<70)
{

            return 2.7;

}

else if (marks[i]>=61 && marks[i]<65)
{

            return 3.3;

}

else if (marks[i]>=58 && marks[i]<61)
{

            return 2.0;

}

else if (marks[i]>=50 && marks[i]<58)
{

            return 1.0;

}

else if(marks[i]<50)
{

            return 0.7;

}

}

}          

};

				float GPA:: calsgpa()
				{
					
					 cout<<"\n\t\t-------------- SGPA Calculating -----------------\n\n"<<endl;
				   	ofstream out;
                    out.open(roll, ios::app);
       
							
			    for(i=0;i<no_of_courses;i++)
                   {
 
                      cout<<"\nEnter the credit hours of " <<subname[i] << " :";
                      cin>>credit[i];
                 
                      totalcredit=totalcredit+credit[i];
                      subg[i]=gpa[i]*credit[i];
                      total=total + subg[i];
                   
                   
                   }
                   
                      cout<<"\nCombined credit hours: "<<totalcredit<<endl;
                      out<<"\nCombined credit hours: "<<totalcredit<<endl;

                      final=total/totalcredit;
                   
                      cout<<"\n\t SGPA : "<<final<<endl;
                      out<<"\n\tSGPA : "<<final<<endl;
                      
                      
                      
                   }



void GPA :: gra(float gpa[])

{
	
 while(1)
                  {
                  	
                  if(gpa[i]<2.0)
                  { 
				             
					strcpy(gradeno,"F");
                   break;
                   
                  }
                  else if(gpa[i]<2.25)
                   {
                   	
				    strcpy(gradeno,"D" );
                   break;
                   
                   }
                   else if(gpa[i]<2.5)
                   {
		            
				    strcpy(gradeno,"c" );
                   break;
                   
                   }
                   else if(gpa[i]<2.75)
                   {
                   	
				     strcpy(gradeno,"c+" );
                   break;
                   
                   }
                   
                   else if(gpa[i]<3.0)
                   {
				               
					strcpy(gradeno,"B-" );
                   break;
                   
					}
																			
                   else if(gpa[i]<3.25)
                   {
				  
				    strcpy(gradeno,"B" );
                  break;
                  
                   }
                   else if(gpa[i]<3.5)
                   {
                   	
				    strcpy(gradeno,"B+" );
                  break;
               
				   }
														     
                   else if(gpa[i]<3.75)
                   {
                   	
				     strcpy(gradeno,"A-" );
                  break;
                  
                   }
                 
				  else if(gpa[i]<4.0)
                   {
                   	
				              strcpy(gradeno,"A" );
                  break;
      
						              }
                  
                  else if(gpa[i]==4)
                    {
                  	
				              strcpy(gradeno,"A+" );
                  break;
                  
								   										}

                   }

    
}

class calculateCGPA:public GPA
{
	
     public:
       	
	      float semtot;
	      float CGPA;
	      float semrs[7];
			int n;
 
	
	      claculateCGPA()
							{
								
		     semtot=0;
	      
							}
	     
void calculation()
{
	
	
   ofstream out;
   out.open( roll , ios::app);
      
	        
      cout<<"\n-------------- CGPA Calculating -----------------\n\n"<<endl;
      cout<<"How many semester results do you want input? :";
      cin>>n;
      out<<"\nN0. Of Semesters :"<<n;
     

   for(i=0;i<n;i++)
      {
   	
      cout<<"\nEnter Semester "<<i+1<<" Result(GPA): ";
      cin>>semrs[i];
      
      out<<"\nGPA of semester "<<i+1<<" : "<<semrs[i];
      cout<<"\n"<<endl;
   
      }

 
   for(int j=0;j<n;j++)
   {
   	
       semtot=semtot+semrs[j];
       
   }
   
   CGPA=semtot/n;

   cout<<"\n\tCGPA : "<<CGPA<<endl;
   out<<"\n\tCGPA : "<<CGPA;
     out.close(); 
}

};

int main()
{
	
cout<<"\n\n\n\n";
system("color A");
 

    cout<<"\t\t\t********************************************\n";
    cout<<"\t\t\t|  C++ GPA,SGPA,CGPA & GRADE CALCULATOR    |\n";
    cout<<"\t\t\t*******************************************\n";
    
int choice;    
char roll[20];
char c,a;

    a:
 while(1)
    {
 	
     cout<<"\n\n\t\t1. View Stored Data\n\t\t2. Calculate GPA and SGPA\n\t\t3. Calculate CGPA\n\t\t4. Exit\n";
     cin>>choice;
 
    if(choice==1)
    {
   
     cout<<"Input the roll no :  ";
     cin>>roll;
    
   
     ifstream file(roll);
     
    while(file)
      {
      
      file.get(c);
      cout<<c;
     

     }
   
	   getch();
 
	    }
    
				if(choice==2)
     {
     	
 	    char c;
      GPA obj1;
      obj1.calculation();
      obj1.calsgpa();
 
      }
   
    if(choice==3)
     {
     	
 	    char c;
      calculateCGPA obj2;
      obj2.calculation();

     }
     

    if(choice==4)
     {
 	
      break;

     }

else
  {
  	cout<<"Enter the correct no"<<endl;
  }
  }
  
 goto a;
   return 0;

}
