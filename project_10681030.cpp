#include<iostream>
#include<stdlib.h>
#include<iomanip>
using namespace std;
int main()
{ 
	int intro, stdIntro,editS,editS1,p=0,m,mm=0,h=0,e,del,z=0,x=0, i=0,j=0,r=0,c=0,cNo[10],print, eSLoop=0;
	char addStd, stdToMain;
	double totGpt[10],totCredit[10], GPA[10];
	string editS1L,bk;

	class student
	{ 
	public:
	  string name[10];
	  string LName[10];
	  string dob[10];
	  string ID[10];
	  string sex[10];
	  string courses[10][10];
	  double gpt[10][10];
	  int credit[10][10];
	  double score[10][10];
	  string gpa[10][10];
};

	 student k;
 
 	while(p<=100)
     {
    cout<<"***************************************************************************************************************";
 	cout<<"\n\n\t\tSCHOOL MANANGEMENT SYSTEM\n\n";
 	cout<<"***************************************************************************************************************";
 	cout<<"\n\n\t\t         HOME\n\n";
	cout<<"Enter\n1. For Students.\n";
	cout<<"2. For Staff.\n";
	cin>>intro;
	
	if(intro==1)
	 {   
	     system("cls");
	  cout<<"Enter 1 to add a new student and assign him or her to courses.\n";
	  cout<<"Enter 2 to edit a student and his or her courses.\n";
	  cout<<"Enter 3 to delete a student from the records.\n";
	  cout<<"Enter 4 to print the Academic record of a particular student.\n";
	  cout<<"NOTE!: You can't edit, delete or print the records of a student if you haven't";
	  cout<<"\n entered any, go for option 1 if that's the case.\n";
	  cin>>stdIntro;
	
	  if(stdIntro==1)
    
	{while (z<=10)
        {
    system("cls");
    i++;
    cout<<"To keep track of your entry, we number the students you create\n";
    cout<<"For instance, the first student you'll create will be referred to as\n";
    cout<<"Student 1\n";
    cout<<"Enter student "<<i<<"'s first name\n";
    cin>>k.name[j];
    cout<<"Enter student "<<i<<"'s last name\n";
    cin>>k.LName[j];
    cout<<"Enter student "<<i<<"'s date of birth(in the format:dd/mm/yy)\n";
    cin>>k.dob[j];
    cout<<"Enter student "<<i<<"'s ID number\n";
    cin>>k.ID[j];
    cout<<"Enter student "<<i<<"'s sex(m or M for male, f or F for female)\n";
    cin>>k.sex[j];
    if((k.sex[j])=="m"||(k.sex[j])=="M")
        k.sex[j]="MALE";
    else if ((k.sex[j])=="f"||(k.sex[j])=="F")
        k.sex[j]="FEMALE";
    cout<<"How many courses will "<<k.name[j]<<" be doing?(maximum is 7)\n";
    cin>>cNo[i-1];
    cout<<"Enter the course codes(after each course, press the enter key)\n";
    for(r=0;r<cNo[i-1];r++)
      {cin>>k.courses[r][j];
      }
    for(int v=0;v<cNo[i-1];v++)
      {
    cout<<"Enter the credit hours  for "<<k.courses[v][j]<<endl;
    cin>>k.credit[v][j];
    cout<<"Enter the exam score for "<<k.courses[v][j]<<endl;
    cin>>k.score[v][j];
    if((k.score[v][j])>=80)
     {(k.gpa[v][j])= "A";
     (k.gpt[v][j])=12; }
    else if((k.score[v][j])>=75&&(k.score[v][j])<80)
          {(k.gpa[v][j])="B+";
          (k.gpt[v][j])=10.5;}
    	 else if((k.score[v][j])>=70&&(k.score[v][j])<75)
           	{(k.gpa[v][j])="B";
           	(k.gpt[v][j])=9;}
    			else if((k.score[v][j])>=65&&(k.score[v][j])<70)
           		{(k.gpa[v][j])="C+";
           		(k.gpt[v][j])=7.5;}
    				else if((k.score[v][j])>=60&&(k.score[v][j])<65)
          			 {(k.gpa[v][j])="C";
          			 (k.gpt[v][j])=6;}
    					 else if((k.score[v][j])>=55&&(k.score[v][j])<60)
          				 {(k.gpa[v][j])="D";
   		       					 (k.gpt[v][j])=3;}
                               else if((k.score[v][j])>=50&&(k.score[v][j])<55)
           						 {(k.gpa[v][j])="E";
           						 (k.gpt[v][j])=1.5;}
  									  else if((k.score[v][j])>=45&&(k.score[v][j])<50)
         							   {(k.gpa[v][j])="F";
           								 (k.gpt[v][j])=0.0;}
            							totGpt[j]+=k.gpt[v][j];
           								 totCredit[j]+=k.credit[v][j];
      }
     
	  GPA[j]=totGpt[j]/totCredit[j];
    cout<<"Data of "<<k.name[j]<<" stored successfully\n";
    cout<<"Do you want to add another student or print "<<k.name[j]<<"'s academic record?\n";
    cout<<"Enter \'a\', for add or \'p\' for printing of academic record\n";
    cout<<"You can as well enter any other key to get back to main menu\n";
    cin>>addStd;
    if(addStd=='p')
     {   system("cls");
         cout<<"                                              ACADEMIC RECORD                                                     \n";
cout<<"Student number: "<<k.ID[j]<<"                                                                   DOB: "<<k.dob[j]<<endl;
cout<<"                                                                                          Sex: "<<k.sex[j]<<endl;
cout<<"Name: "<<k.name[j]<<" "<<k.LName[j]<<"                                                                          Date printed:\n";
cout<<"___________________________________________________________________________________________________________________________\n";
cout<<"Academic year:2018/2019          First semester                            CCT: 9     CCP: 9       CGPA:"<<fixed<<setprecision(1)<<GPA[j]<<"          \n";
cout<<"COURSE                                                                     CREDIT     GRADE        GPT                     \n";
for( r=0;r<cNo[i-1];r++)
cout<<k.courses[r][j]<<"                                                    \t            "<<k.credit[r][j]<<"  \t   "<<k.gpa[r][j]<<"  \t   "<<k.gpt[r][j]<<endl;
     cout<<"Enter any key to return to main menu\n";
     cin>>stdToMain;
     break;
     system("cls");
     }
    else if(addStd=='a')
          {continue;}
    else
    {   system("cls");
        break;
    }
       z++;
        }
    }//end stdIntro1 if
   else if(stdIntro==2)
    { 
		while(x<=10)
          { system("cls");
           cout<<"Enter the number of the student whose details you want to edit( e.g.enter 1 for student 1 and so on....)\n";
           cout<<"Only mutable details will be available for editing, fixed details such as age and gender will remain constant.\n";
           cout<<"Enter-999 to go back\n";
           cin>>editS;
           if (editS==-999)
            break;
           else
           { system("cls");
             cout<<"What details of student "<<editS<<" do you wish to change?(Enter the corresponding number)\n";
             cout<<"1. Name\n";
             cout<<"2. Courses\n";
             cin>>editS1;
             if (editS1==1)
             {  while (eSLoop<=10)
                    {cout<<"Enter student "<<editS<<"'s new first name\n";
                     cin>>k.name[editS-1];
                     cout<<"Enter student "<<editS<<"'s new last name\n";
                     cin>>k.LName[editS-1];
                     cout<<"Name edit success, the student is now referred to as "<<k.name[editS-1]<<" "<<k.LName[editS-1]<<endl;
                     cout<<"Enter any key to go back\n";
                     cin>>editS1L;
                     break;
                     eSLoop++;
                    } //end eSLoop

             }//end editS1 if
             else if(editS1==2)
                   { system("cls");
                    cout<<"Due to re-calculation of CGPA, you are to enter all the student's courses at fresh again\n";
                    cout<<"(Correcting any mistakes you had made prior\n)";
                    cout<<"How many courses will "<<k.name[j]<<" be doing?(maximum is 7)\n";
    cin>>cNo[i-1];
    cout<<"Enter the course codes(after each course, press the enter key)\n";
    for(r=0;r<cNo[i-1];r++)
      {cin>>k.courses[r][j];
      }
    for(int v=0;v<cNo[i-1];v++)
      {
    cout<<"Enter the credit hours  for "<<k.courses[v][j]<<endl;
    cin>>k.credit[v][j];
    cout<<"Enter the exam score for "<<k.courses[v][j]<<endl;
    cin>>k.score[v][j];
    if((k.score[v][j])>=80)
     {(k.gpa[v][j])= "A";
     (k.gpt[v][j])=12; }
    else if((k.score[v][j])>=75&&(k.score[v][j])<80)
          {(k.gpa[v][j])="B+";
          (k.gpt[v][j])=10.5;}
    else if((k.score[v][j])>=70&&(k.score[v][j])<75)
           {(k.gpa[v][j])="B";
           (k.gpt[v][j])=9;}
    else if((k.score[v][j])>=65&&(k.score[v][j])<70)
           {(k.gpa[v][j])="C+";
           (k.gpt[v][j])=7.5;}
    else if((k.score[v][j])>=60&&(k.score[v][j])<65)
           {(k.gpa[v][j])="C";
           (k.gpt[v][j])=6;}
    else if((k.score[v][j])>=55&&(k.score[v][j])<60)
           {(k.gpa[v][j])="D";
           (k.gpt[v][j])=3;}
    else if((k.score[v][j])>=50&&(k.score[v][j])<55)
            {(k.gpa[v][j])="E";
            (k.gpt[v][j])=1.5;}
    else if((k.score[v][j])>=45&&(k.score[v][j])<50)
            {(k.gpa[v][j])="F";
            (k.gpt[v][j])=0.0;}
            totGpt[j]+=k.gpt[v][j];
            totCredit[j]+=k.credit[v][j];
      }
      GPA[j]=totGpt[j]/totCredit[j];
      cout<<"Data of "<<k.name[j]<<" altered successfully\n";
      cout<<"Enter any key to go back\n";
      cin>>editS1L;
      system("cls");
      break;
                   }//end editS2 if
          }//end editS else

          x++;
          }//end stdIntro 2 while
    } //end stdIntro 2 if
     if(stdIntro==3)
    { while(e<=10)
          { system("cls");
           cout<<"Enter the number of the student whose records you want to delete( e.g.enter 1 for student 1 and so on....)\n";
           cin>>del;
           totGpt[del]=0;
           totCredit[del]=0;
           GPA[del]=0;
           k.name[del]=" ";
           k.LName[del]=" ";
           k.dob[del]=" ";
           k.ID[del]=" ";
           k.sex[del]=" ";
           for(int d=0;d<cNo[del];d++)
             {k.courses[del][j]=" ";
              k.gpt[del][j]=0;
              k.credit[del][j]=0;
              k.score[del][j]=0;
              k.gpa[del][j]=" ";
              cout<<"student's records successfully deleted, enter any key to go back\n";
              cin>>bk;
              break;
             }
             e++;
            } //end stdIntro 3 loop
          }//end stdIntro 3 if
          if(stdIntro==4)
            system("cls");
          { while(h<=10)
                {
            cout<<"Enter the student number of the student whose Academic record you wish to print\n";
            cin>>print;
           cout<<"                                              ACADEMIC RECORD                                                     \n";
cout<<"Student number: "<<k.ID[print-1]<<"                                                                   DOB: "<<k.dob[print-1]<<endl;
cout<<"                                                                                          Sex: "<<k.sex[print-1]<<endl;
cout<<"Name: "<<k.name[print-1]<<" "<<k.LName[print-1]<<"                                                                          Date printed:\n";
cout<<"___________________________________________________________________________________________________________________________\n";
cout<<"Academic year:2018/2019          First semester                            CCT: 9     CCP: 9       CGPA:"<<fixed<<setprecision(1)<<GPA[print-1]<<"          \n";
cout<<"COURSE                                                                     CREDIT     GRADE        GPT                     \n";
for( r=0;r<cNo[i-1];r++)
cout<<k.courses[r][print-1]<<"                                                    \t            "<<k.credit[r][print-1]<<"  \t   "<<k.gpa[r][print-1]<<"  \t   "<<k.gpt[r][print-1]<<endl;
     cout<<"Enter any key to return to main menu\n";
     cin>>stdToMain;
     break;
     system("cls");
     h++;
                }//end record print loop

          }//end stdInfo 4 if
   }//end stdMenu loop
   else if(intro==2)
           system("cls");
         { while(mm<=10)
        {system("color 3D");
         cout<<"Charley wossop? The staff section isn't ready yet, relax ai.\n";
         cout<<"Enter any key to go to the main menu ai.\n";
         cin>>stdToMain;
         system("cls");
         break;
         mm++;
        }
         }
 }//end main menu loop
}//main prog
