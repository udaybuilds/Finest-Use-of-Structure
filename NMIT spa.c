//NMIT	spa(Student Perforformance Analysis)
#include<stdio.h>
#include<string.h>
#include<stdlib.h>                                          //Header Files INcluded

struct spa
{
	char name[20];
	long int usn;
	int year;
	int sem;
	char Branch[30];
	long int m1,m2,m3,m4,m5,m6;	
};
void SPA(struct spa x);
void SPLS(struct spa y,struct spa z);
void DP(struct spa a,struct spa b,struct spa c);
main()
{int flag=0;
	 struct spa s1[]={                                                             //Inputing data
	             {"Raman",120,1,2,"Aeronautical",8,9,7,8,9,10},
	             {"Shifa",121,1,2,"Aeronautical",9,9,9,10,7,8},
	             {"Anku",122,1,2,"Aeronautical",8,9,7,10,9,9},
	             {"Raman",120,1,1,"Aeronautical",9,9,9,10,7,8},
	             {"Shifa",121,1,1,"Aeronautical",8,9,7,8,9,10},
	             {"Anku",122,1,1,"Aeronautical",7,8,7,9,10,8},
	             {"Raman",123,2,4,"Computer Science",8,9,7,8,9,10},
	             {"Shifa",124,2,4,"Computer Science",9,9,9,10,7,8},
	             {"Anku",125,2,4,"Computer Science",8,9,7,10,9,9},
	             {"Raman",123,2,3,"Computer Science",9,9,9,10,7,8},
	             {"Shifa",124,2,3,"Computer Science",8,9,7,8,9,10},
	             {"Anku",125,2,3,"Computer Science",7,8,7,9,10,8},
	             {"Raman",126,3,6,"Mechanical",8,9,7,8,9,10},
	             {"Shifa",127,3,6,"Mechanical",9,9,9,10,7,8},
	             {"Anku",128,3,6,"Mechanical",8,9,7,10,9,9},
	             {"Raman",126,3,5,"Mechanical",9,9,9,10,7,8},
	             {"Shifa",127,3,5,"Mechanical",8,9,7,8,9,10},
	             {"Anku",128,3,5,"Mechanical",7,8,7,9,10,8},
	             {"kartik",129,4,8,"Aeronautical",9,9,8,7,10,7},
	             {"Saman",130,4,8,"Aeronautical",10,7,7,8,9,10},
	             {"Rajika",131,4,8,"Aeronautical",8,7,9,9,10,9},
	             {"kartik",129,4,7,"Aeronautical",8,7,9,9,10,9},
	             {"Saman",130,4,7,"Aeronautical",9,9,8,7,10,7},
	             {"Rajika",131,4,7,"Aeronautical",10,7,7,8,9,10},
	             {"kartik",132,1,2,"Computer Science",9,9,8,7,10,7},
	             {"Saman",133,1,2,"Computer Science",10,7,7,8,9,10},
	             {"Rajika",134,1,2,"Computer Science",8,7,9,9,10,9},
	             {"kartik",132,1,1,"Computer Science",8,7,9,9,10,9},
	             {"Saman",133,1,1,"Computer Science",9,9,8,7,10,7},
	             {"Rajika",134,1,1,"Computer Science",10,7,7,8,9,10},
	             {"kartik",135,2,4,"Mechanical",9,9,8,7,10,7},
	             {"Saman",136,2,4,"Mechanical",10,7,7,8,9,10},
	             {"Rajika",137,2,4,"Mechanical",8,7,9,9,10,9},
	             {"kartik",135,2,3,"Mechanical",8,7,9,9,10,9},
	             {"Saman",136,2,3,"Mechanical",9,9,8,7,10,7},
	             {"Rajika",137,2,3,"Mechanical",10,7,7,8,9,10},
	             {"shashank",138,3,6,"Aeronautical",8,9,10,6,7,6},
	             {"Alok     ",139,3,6,"Aeronautical",9,9,9,7,7,9},
	             {"Divyanee",140,3,6,"Aeronautical",7,8,8,9,10,9},
	             {"shashank",138,3,5,"Aeronautical",9,9,9,7,7,9},
	             {"Alok     ",139,3,5,"Aeronautical",7,8,8,9,10,9},
	             {"Divyanee",140,3,5,"Aeronautical",8,9,10,6,7,6},
	             {"shashank",141,4,8,"Computer Science",9,9,9,7,7,9},
	             {"Alok     ",142,4,8,"Computer Science",7,8,8,9,10,9},
	             {"Divyanee",143,4,8,"Computer Science",8,9,10,6,7,6},
	             {"shashank",141,4,7,"Computer Science",8,9,10,6,7,6},
	             {"Alok     ",142,4,7,"Computer Science",9,9,9,7,7,9},
	             {"Divyanee",143,4,7,"Computer Science",7,8,8,9,10,9},
	             {"shashank",144,1,2,"Mechanical",9,9,9,7,7,9},
	             {"Alok     ",145,1,2,"Mechanical",7,8,8,9,10,9},
	             {"Divyanee",146,1,2,"Mechanical",8,9,10,6,7,6},
	             {"shashank",144,1,1,"Mechanical",8,9,10,6,7,6},
	             {"Alok     ",145,1,1,"Mechanical",9,9,9,7,7,9},
	             {"Divyanee",146,1,1,"Mechanical",7,8,8,9,10,9},
	             {"Rishav",147,2,4,"Aeronautical",9,8,7,8,8,7},
	             {"Piyush",148,2,4,"Aeronautical",7,8,8,8,9,10},
	             {"Aman",149,2,4,"Aeronautical",9,9,9,9,10,8},
	             {"Rishav",147,2,3,"Aeronautical",7,8,8,8,9,10},
	             {"Piyush",148,2,3,"Aeronautical",9,9,9,9,10,8},
	             {"Aman",149,2,3,"Aeronautical",9,8,7,8,8,7},
	             {"Rishav",150,3,6,"Computer Science",9,8,7,8,8,7},
	             {"Piyush",151,3,6,"Computer Science",7,8,8,8,9,10},
	             {"Aman",152,3,6,"Computer Science",9,9,9,9,10,8},
	             {"Rishav",150,3,5,"Computer Science",7,8,8,8,9,10},
	             {"Piyush",151,3,5,"Computer Science",9,9,9,9,10,8},
	             {"Aman",152,3,5,"Computer Science",9,8,7,8,8,7},
	             {"Rishav",153,4,8,"Mechanical",9,8,7,8,8,7},
	             {"Piyush",154,4,8,"Mechanical",7,8,8,8,9,10},
	             {"Aman",155,4,8,"Mechanical",9,9,9,9,10,8},
	             {"Rishav",153,4,7,"Mechanical",7,8,8,8,9,10},
	             {"Piyush",154,4,7,"Mechanical",9,9,9,9,10,8},
	             {"Aman",155,4,7,"Mechanical",9,8,7,8,8,7},
	};
	int n,i,j,key,ch,y,h;
	float d1,d2,d3;printf("\t\t\t\t\t\t\t\t\tNMIT SPA(STUDENT PROGRESS ANALYSIS)");
	printf("\n\n\n\n\n\n\n\t\t\t\t\tThis Software Lets You Analyse Academic Performance of Engineering Students of all The semesters\n");     //Taking Choice From The User
	back:
	printf("\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\tWhat Do you want to do\n\n \n\t\t\t\t\t\t\t\t\t\t1)Student Performance Analysis\n\n \n\t\t\t\t\t\t\t\t\t\t2)Student Progress From Last Semester\n\n\n\t\t\t\t\t\t\t\t\t\t3)Department Comparision \n\n\n\t\t\t\t\t\t\t\t\t\t4)Exit\n\n");
	scanf("%d",&n);
	switch(n)
	scanf("%d",&n);
	switch(n)
	{
	
	case 1: up0:
	        system("clear");
	       printf("Enter the USN of the student You Want to analyse (MUST BE BETWEEN 120 TO 155)\n");        // Calling First Functiom 
	       scanf("%d",&key);
	       
	       
	   system("clear");
	       for(i=0;i<72;i++)
	       {
	       	if(s1[i].usn==key&&s1[i].sem%2==0)
	       	{
	       		flag=1;
			   SPA(s1[i]);
			   flag=1;
			   
			}
	   }
	   if(flag==0)
	   printf("\t\t\tinvalid coice");
	   printf("\n\n\n\n\t\t\tDo yo Want to continue(Press 1) or go back to main menu(Press 2)\n\n");
                scanf("%d",&ch);
	   if(ch==1)
                 goto up0;
               else if(ch==2)
                 {
                 system("clear");
	             goto back;
	             }
               else
                {
   	              printf("Wrong Choice Made exiting to main menu!!!");
   	              goto back;
	            }
	           break;
	    case 2: up:                                                                                            //Calling Second Function
	       system("clear");
	       printf("\n\n\t\tEnter the USN of the student Whose Progress You Want to Track (MUST BE BETWEEN 120 TO 155)\n\n");
	       scanf("%d",&key);
	       for(i=0;i<72;i++)
	       {
	       	if(s1[i].usn==key)
	       	{
            	SPLS(s1[i],s1[i+3]);
	       	    break;
	        }
	       } 
	   printf("\n\n\n\n\t\t\tDo yo Want to continue(Press 1) or go back to main menu(Press 2)\n\n");
                scanf("%d",&ch);
	   if(ch==1)
                 goto up;
               else if(ch==2)
                 {
                 system("clear");
	goto back;
	     }
               else
                {
   	              printf("Wrong Choice Made exiting to main menu!!!");
   	              goto back;
	            } 
	           break;
	    case 3:                                                                                               //Calling Third Function
	       up1:
	       system("clear");
	   printf("\n\n\n\t\t\t Here You Can Compare The Performance Of The Different departments Of the same year \n\n");
	   printf("\t\t\tEnter The Year In which You want to compare the Performance Of dept\n\n"); 
	   scanf("%d",&y);
	   for(i=0;i<72;i++)
	   {
	     if(s1[i].year==y&&(s1[i].sem==2||s1[i].sem==4||s1[i].sem==6||s1[i].sem==8)&&(strcmp(s1[i].Branch,"Computer Science")==0))
	      {
	  DP(s1[i],s1[i+1],s1[i+2]);
	      break;
	  }
	       }
	   for(i=0;i<72;i++)
	   {
	     if(s1[i].year==y&&(s1[i].sem==2||s1[i].sem==4||s1[i].sem==6||s1[i].sem==8)&&(strcmp(s1[i].Branch,"Aeronautical")==0))
	     {
	 
	  DP(s1[i],s1[i+1],s1[i+2]);
	      break;
	     }
	       }
	   for(i=0;i<72;i++)
	   {
	     if(s1[i].year==y&&(s1[i].sem==2||s1[i].sem==4||s1[i].sem==6||s1[i].sem==8)&&(strcmp(s1[i].Branch,"Mechanical")==0))
	     {
	 
	  DP(s1[i],s1[i+1],s1[i+2]);
	      break;
	     }
	       } 
	       printf("\n\n\n\n\t\t\tDo yo Want to continue(Press 1) or go back to main menu(Press 2)\n\n");
                scanf("%d",&ch);
	   if(ch==1)
                 goto up1;
               else if(ch==2)
                 {
                 system("clear");
	goto back;
	     }
               else
                {
   	              printf("Wrong Choice Made exiting to main menu!!!");
   	              goto back;
	            }
	       
	           break;
	
	case 4: exit(0);
	        break;
	    default: 
	       system("clear");
	       printf("\n\n\n\n\t\t\t\t\tEnter valid choice \n\n\n\n\n");
	   goto back;
	   break;
	}
}
void SPA(struct spa x)                                                                                                       
{   int t=0;                     
    if(x.usn>=123&&x.usn<=125&&x.sem==4)
	{                                                                                                             //Displaying Seperate Data For different Departments 
    printf("Details of the student is \n\n");
    printf("%s\n\n",x.name);
    printf("%d year student\n\n",x.year);
    printf("%d semester student\n\n",x.sem);
    printf("Branch of the student is %s\n\n",x.Branch);
    printf("Engineering Maths (4 credits)-- %dgpa\n\n",x.m1);
    printf("Object Oriented Programming with C++ (4 credits) -- %dgpa\n\n",x.m2);
    printf("Design and Analysis of Algorithms (4 credits)-- %dgpa\n\n",x.m3);
    printf("Graph Theory (4 credits) -- %dgpa\n\n",x.m4);
    printf("Microprocessors (4 credits)-- %dgpa\n\n",x.m5);
    printf("MP Laboratory (1.5 credits)-- %dgpa\n\n",x.m6);
    t=(4*x.m1+4*x.m2+4*x.m3+4*x.m4+4*x.m5+1.5*x.m6)/21.5;
    printf("CGPA obtained by Student including credits is %d\n\n",t);
    if(x.m1<=8)
    {
    	printf("Below 8GPA..Can do Better In Engineering Maths\n\n");
	}
	else
	{
	printf("Average Is above 8GPA..Performed Well in Engineering Maths\n\n");
	}
	if(x.m2<=8)
    {
    	printf("Below 8GPA..Can do Better In Object Oriented Programming with C++\n\n");
	}
	else
	{
	printf("Average Is above 8GPA..Performed Well in Object Oriented Programming with C++\n\n");
	}
	if(x.m3<8)
    {
    	printf("Below 8GPA..Can do Better In Design and Analysis of Algorithms\n\n");
	}
	else
	{
	printf("Average Is above 8GPA..Performed Well in Design and Analysis of Algorithms\n\n");
	}
	if(x.m4<8)
    {
    	printf("Below 8GPA..Can do Better In Graph Theory Graph Theory \n\n");
	}
	else
	{
	printf("Average Is above 8GPA..Performed Well in Graph Theory Graph Theory \n\n");
	}
	if(x.m5<8)
    {
    	printf("Below 8GPA..Can do Better In Microprocessors\n\n");
	}
	else
	{
	printf("Average Is above 8GPA..Performed Well in Microprocessors\n\n");
	}
	if(x.m6<8)
    {
    	printf("Below 8GPA..Can do Better In MP Laboratory\n\n");
	}
	else
	{
	printf("Average Is above 8GPA..Performed Well in MP Laboratory\n\n");
	}
	printf("\n\n\n\n\n\t\t\t\t\t\t\tAverage of GPAs scored by student is %d\n\n",(x.m1+x.m1+x.m1+x.m1+x.m1+x.m1)/6);
    if(((x.m1+x.m1+x.m1+x.m1+x.m1+x.m1)/6)<=7)
    {
    	printf("\n\n\n\n\t\t\t\t\t\tAverage is Below 7 .. Needs improvement\n");
	}
	if(((x.m1+x.m1+x.m1+x.m1+x.m1+x.m1)/6)>7&&((x.m1+x.m1+x.m1+x.m1+x.m1+x.m1)/6)<=8)
    {
    	printf("\n\n\n\n\t\t\t\t\t\ t\tAverage is Above.. Impresive..Work Hard and perform even Better\n");
	}
	if(((x.m1+x.m1+x.m1+x.m1+x.m1+x.m1)/6)<=9&&((x.m1+x.m1+x.m1+x.m1+x.m1+x.m1)/6)>8)
    {
    	printf("\n\n\n\n\t\t\t\t\t\t\tAverage is Above 8.. That's Brilliant.. Student has High Capabilities and can excel..\n");
	}
	if(((x.m1+x.m1+x.m1+x.m1+x.m1+x.m1)/6)>9)
    {
    	printf("\n\n\n\n\t\t\t\t\t\tAverage is above 9 .. The Student Has performed Exceptionally Well\n");
	}
	printf("\n\n\n\n\n\n\n");
	
	}
	if(x.usn>=126&&x.usn<=128&&x.sem==6)
	{ 
    printf("Details of the student is \n\n");
    printf("%s\n\n",x.name);
    printf("%d year student\n\n",x.year);
    printf("%d semester student\n\n",x.sem);
    printf("Branch of the student is %s\n\n",x.Branch);
    printf("Design of Machine Elements (4 credits)-- %dgpa\n\n",x.m1);
    printf("Mechanical Vibrations (4 credits)-- %dgpa\n\n",x.m2);
    printf("Operations Research (4 credits)-- %dgpa\n\n",x.m3);
    printf("Simulation Lab (2 credits)-- %dgpa\n\n",x.m4);
    printf("PROGRAM ELECTIVE (4 credits)-- %dgpa\n\n",x.m5);
    printf("OPEN ELECTIVE (3 credits)-- %dgpa\n\n",x.m6);
    t=(4*x.m1+4*x.m2+4*x.m3+2*x.m4+4*x.m5+3*x.m6)/21;
    printf("CGPA obtained by Student including credits is %d\n\n",t);
    if(x.m1<=8)
    {
    	printf("Below 8GPA..Can do Better Machine Elements\n\n");
	}
	else
	{
	printf("Average Is above 8GPA..Performed Well in Machine Elements\n\n");
	}
	if(x.m2<=8)
    {
    	printf("Below 8GPA..Can do Better In Mechanical Vibrations\n\n");
	}
	else
	{
	printf("Average Is above 8GPA..Performed Well in Mechanical Vibrations \n\n");
	}
	if(x.m3<8)
    {
    	printf("Below 8GPA..Can do Better In Operations Research\n\n");
	}
	else
	{
	printf("Average Is above 8GPA..Performed Well in Operations Research\n\n");
	}
	if(x.m4<8)
    {
    	printf("Below 8GPA..Can do Better In Simulation Lab\n\n");
	}
	else
	{
	printf("Average Is above 8GPA..Performed Well in Simulation Lab\n\n");
	}
	if(x.m5<8)
    {
    	printf("Below 8GPA..Can do Better In PROGRAM ELECTIVE\n\n");
	}
	else
	{
	printf("Average Is above 8GPA..Performed Well in PROGRAM ELECTIVE\n\n");
	}
	if(x.m6<8)
    {
    	printf("Below 8GPA..Can do Better In OPEN ELECTIVE\n\n");
	}
	else
	{
	printf("Average Is above 8GPA..Performed Well in OPEN ELECTIVE\n\n");
	}
	printf("\n\n\n\n\n\t\t\t\t\t\t\tAverage of GPAs scored by student is %d\n\n",(x.m1+x.m1+x.m1+x.m1+x.m1+x.m1)/6);
    if(((x.m1+x.m1+x.m1+x.m1+x.m1+x.m1)/6)<=7)
    {
    	printf("\n\n\n\n\t\t\t\t\t\tAverage is Below 7 .. Needs improvement\n");
	}
	if(((x.m1+x.m1+x.m1+x.m1+x.m1+x.m1)/6)>7&&((x.m1+x.m1+x.m1+x.m1+x.m1+x.m1)/6)<=8)
    {
    	printf("\n\n\n\n\t\t\t\t\t\t\tAverage is Above 7.. Impresive..Work Hard and perform even Better\n");
	}
	if(((x.m1+x.m1+x.m1+x.m1+x.m1+x.m1)/6)<=9&&((x.m1+x.m1+x.m1+x.m1+x.m1+x.m1)/6)>8)
    {
    	printf("\n\n\n\n\t\t\t\t\t\t\tAverage is Above 8.. That's Brilliant.. Student has High Capabilities and can excel..\n");
	}
	if(((x.m1+x.m1+x.m1+x.m1+x.m1+x.m1)/6)>9)
    {
    	printf("\n\n\n\n\t\t\t\t\t\tAverage is above 9 .. The Student Has performed Exceptionally Well\n");
	}
	printf("\n\n\n\n\n\n\n");
	
   }
   if(x.usn>=129&&x.usn<=131&&x.sem==8)
	{ 
    printf("Details of the student is \n\n");
    printf("%s\n\n",x.name);
    printf("%d year student\n\n",x.year);
    printf("%d semester student\n\n",x.sem);
    printf("Branch of the student is %s\n\n",x.Branch);
    printf("INTERNSHIP/SELF STUDY/MINOR PROJECT(2 credits)-- %dgpa\n\n",x.m1);
    printf("FLIGHT VEHICLE DESIGN(4 credits)-- %dgpa\n\n",x.m2);
    printf("PROGRAM ELECTIVE(4 credits)-- %dgpa\n\n",x.m3);
    printf("SIMULATION LAB(1.5 credits)-- %dgpa\n\n",x.m4);
    printf("MAJOR PROJECT-FINAL SUMISSION & EVALUATION(15 credits)-- %dgpa\n\n",x.m5);
    printf("OPEN ELECTIVE(3 credits)-- %dgpa\n\n",x.m6);
    t=(2*x.m1+4*x.m2+4*x.m3+1.5*x.m4+15*x.m5+3*x.m6)/29.5;
    printf("CGPA obtained by Student including credits is %d\n\n",t);
    if(x.m1<=8)
    {
    	printf("Below 8GPA..Can do Better Machine Elements\n\n");
	}
	else
	{
	printf("Average Is above 8GPA..Performed Well in Machine Elements\n\n");
	}
	if(x.m2<=8)
    {
    	printf("Below 8GPA..Can do Better In Mechanical Vibrations with C++\n\n");
	}
	else
	{
	printf("Average Is above 8GPA..Performed Well in Mechanical Vibrations with C++\n\n");
	}
	if(x.m3<8)
    {
    	printf("Below 8GPA..Can do Better In Operations Research\n\n");
	}
	else
	{
	printf("Average Is above 8GPA..Performed Well in Operations Research\n\n");
	}
	if(x.m4<8)
    {
    	printf("Below 8GPA..Can do Better In Simulation Lab\n\n");
	}
	else
	{
	printf("Average Is above 8GPA..Performed Well in Simulation Lab\n\n");
	}
	if(x.m5<8)
    { 
    	printf("Below 8GPA..Can do Better In PROGRAM ELECTIVE\n\n");
	}
	else
	{
	printf("Average Is above 8GPA..Performed Well in PROGRAM ELECTIVE\n\n");
	}
	if(x.m6<8)
    {
    	printf("Below 8GPA..Can do Better In OPEN ELECTIVE\n\n");
	}
	else
	{
	printf("Average Is above 8GPA..Performed Well in OPEN ELECTIVE\n\n");
	}
	printf("\n\n\n\n\n\t\t\t\t\t\t\tAverage of GPAs scored by student is %d\n\n",(x.m1+x.m1+x.m1+x.m1+x.m1+x.m1)/6);
    if(((x.m1+x.m1+x.m1+x.m1+x.m1+x.m1)/6)<=7)
    {
    	printf("\n\n\n\n\t\t\t\t\t\tAverage is Below 7 .. Needs improvement\n");
	}
	if(((x.m1+x.m1+x.m1+x.m1+x.m1+x.m1)/6)>7&&((x.m1+x.m1+x.m1+x.m1+x.m1+x.m1)/6)<=8)
    {
    	printf("\n\n\n\n\t\t\t\t\t\t\tAverage is Above 7.. Impresive..Work Hard a nd perform even Better\n");
	}
	if(((x.m1+x.m1+x.m1+x.m1+x.m1+x.m1)/6)<=9&&((x.m1+x.m1+x.m1+x.m1+x.m1+x.m1)/6)>8)
    {
    	printf("\n\n\n\n\t\t\t\t\t\t\tAverage is Above 8.. That's Brilliant.. Student has High Capabilities and can excel..\n");
	}
	if(((x.m1+x.m1+x.m1+x.m1+x.m1+x.m1)/6)>9)
    {
    	printf("\n\n\n\n\t\t\t\t\t\tAverage is above 9 .. The Student Has performed Exceptionally Well\n");
	}
	printf("\n\n\n\n\n\n\n");
   
}
if(x.usn>=135&&x.usn<=137&&x.sem==4)
	{ 
    printf("Details of the student is \n\n");
    printf("%s\n\n",x.name);
    printf("%d year student\n\n",x.year);
    printf("%d semester student\n\n",x.sem);
    printf("Branch of the student is %s\n\n",x.Branch);
    printf("Design of Engineering Mathematics (4 credits)-- %dgpa\n\n",x.m1);
    printf("Engineering Metrology and Measurements (3 credits)-- %dgpa\n\n",x.m2);
    printf("Applied Thermodynamics (4 credits)-- %dgpa\n\n",x.m3);
    printf("Theory of Machines (4 credits)-- %dgpa\n\n",x.m4);
    printf("Fluid Mechanics (4 credits)-- %dgpa\n\n",x.m5);
    printf("Advanced Manufacturing Technology (4 credits)-- %dgpa\n\n",x.m6);
    t=(4*x.m1+3*x.m2+4*x.m3+4*x.m4+4*x.m5+4*x.m6)/21;
    printf("CGPA obtained by Student including credits is %d\n\n",t);
    if(x.m1<=8)
    {
    	printf("Below 8GPA..Can do Better Engineering Mathematics\n\n");
	}
	else
	{
	printf("Average Is above 8GPA..Performed Well in Engineering Mathematics\n\n");
	}
	if(x.m2<=8)
    {
    	printf("Below 8GPA..Can do Better In Engineering Metrology and Measurements with C++\n\n");
	}
	else
	{
	printf("Average Is above 8GPA..Performed Well in Engineering Metrology and Measurements with C++\n\n");
	}
	if(x.m3<8)
    {
    	printf("Below 8GPA..Can do Better In Applied Thermodynamics\n\n");
	}
	else
	{
	printf("Average Is above 8GPA..Performed Well in Applied Thermodynamics\n\n");
	}
	if(x.m4<8)
    {
    	printf("Below 8GPA..Can do Better In Theory of Machines\n\n");
	}
	else
	{
	printf("Average Is above 8GPA..Performed Well in Theory of Machines\n\n");
	}
	if(x.m5<8)
    {
    	printf("Below 8GPA..Can do Better In Fluid Mechanics\n\n");
	}
	else
	{
	printf("Average Is above 8GPA..Performed Well in Fluid Mechanics\n\n");
	}
	if(x.m6<8)
    {
    	printf("Below 8GPA..Can do Better In Advanced Manufacturing Technology\n\n");
	}
	else
	{
	printf("Average Is above 8GPA..Performed Well in Advanced Manufacturing Technology\n\n");
	}
	printf("\n\n\n\n\n\t\t\t\t\t\t\tAverage of GPAs scored by student is %d\n\n",(x.m1+x.m1+x.m1+x.m1+x.m1+x.m1)/6);
    if(((x.m1+x.m1+x.m1+x.m1+x.m1+x.m1)/6)<=7)
    {
    	printf("\n\n\n\n\t\t\t\t\t\tAverage is Below 7 .. Needs improvement\n");
	}
	if(((x.m1+x.m1+x.m1+x.m1+x.m1+x.m1)/6)>7&&((x.m1+x.m1+x.m1+x.m1+x.m1+x.m1)/6)<=8)
    {
    	printf("\n\n\n\n\t\t\t\t\t\t\tAverage is Above 7.. Impresive..Work Hard and perform even Better\n");
	}
	if(((x.m1+x.m1+x.m1+x.m1+x.m1+x.m1)/6)<=9&&((x.m1+x.m1+x.m1+x.m1+x.m1+x.m1)/6)>8)
    {
    	printf("\n\n\n\n\t\t\t\t\t\t\tAverage is Above 8.. That's Brilliant.. Student has High Capabilities and can excel..\n");
	}
	if(((x.m1+x.m1+x.m1+x.m1+x.m1+x.m1)/6)>9)
    {
    	printf("\n\n\n\n\t\t\t\t\t\tAverage is above 9 .. The Student Has performed Exceptionally Well\n");
	}
	printf("\n\n\n\n\n\n\n");
   }
   if(x.usn>=138&&x.usn<=140&&x.sem==6)
	{ 
    printf("Details of the student is \n\n");
    printf("%s\n\n",x.name);
    printf("%d year student\n\n",x.year);
    printf("%d semester student\n\n",x.sem);
    printf("Branch of the student is %s\n\n",x.Branch);
    printf("AERODYNAMICS (4 credits)-- %dgpa\n\n",x.m1);
    printf("CONTROL ENGINEERING(4 credits)-- %dgpa\n\n",x.m2);
    printf("AIRCRAFT PERFORMANCE(4 credits)-- %dgpa\n\n",x.m3);
    printf("AIRCRAFT PROPULSION LAB(1.5 credits)-- %dgpa\n\n",x.m4);
    printf("PROGRAM ELECTIVE(4 credits)-- %dgpa\n\n",x.m5);
    printf("OPEN ELECTIVE(3 credits)-- %dgpa\n\n",x.m6);
    t=(4*x.m1+4*x.m2+4*x.m3+1.5*x.m4+4*x.m5+3*x.m6)/20.5;
    printf("CGPA obtained by Student including credits is %d\n\n",t);
    if(x.m1<=8)
    {
    	printf("Below 8GPA..Can do Better AERODYNAMICS\n\n");
	}
	else
	{
	printf("Average Is above 8GPA..Performed Well in AERODYNAMICS\n\n");
	}
	if(x.m2<=8)
    {
    	printf("Below 8GPA..Can do Better In CONTROL ENGINEERING\n\n");
	}
	else
	{
	printf("Average Is above 8GPA..Performed Well in CONTROL ENGINEERING\n\n");
	}
	if(x.m3<8)
    {
    	printf("Below 8GPA..Can do Better In Operations Research\n\n");
	}
	else
	{
	printf("Average Is above 8GPA..Performed Well in Operations Research\n\n");
	}
	if(x.m4<8)
    {
    	printf("Below 8GPA..Can do Better In Simulation Lab\n\n");
	}
	else
	{
	printf("Average Is above 8GPA..Performed Well in Simulation Lab\n\n");
	}
	if(x.m5<8)
    { 
    	printf("Below 8GPA..Can do Better In PROGRAM ELECTIVE\n\n");
	}
	else
	{
	printf("Average Is above 8GPA..Performed Well in PROGRAM ELECTIVE\n\n");
	}
	if(x.m6<8)
    {
    	printf("Below 8GPA..Can do Better In OPEN ELECTIVE\n\n");
	}
	else
	{
	printf("Average Is above 8GPA..Performed Well in OPEN ELECTIVE\n\n");
	}
	printf("\n\n\n\n\n\t\t\t\t\t\t\tAverage of GPAs scored by student is %d\n\n",(x.m1+x.m1+x.m1+x.m1+x.m1+x.m1)/6);
    if(((x.m1+x.m1+x.m1+x.m1+x.m1+x.m1)/6)<=7)
    {
    	printf("\n\n\n\n\t\t\t\t\t\tAverage is Below 7 .. Needs improvement\n");
	}
	if(((x.m1+x.m1+x.m1+x.m1+x.m1+x.m1)/6)>7&&((x.m1+x.m1+x.m1+x.m1+x.m1+x.m1)/6)<=8)
    {
    	printf("\n\n\n\n\t\t\t\t\t\t\tAverage is Above 7.. Impresive..Work Hard and perform even Better\n");
	}
	if(((x.m1+x.m1+x.m1+x.m1+x.m1+x.m1)/6)<=9&&((x.m1+x.m1+x.m1+x.m1+x.m1+x.m1)/6)>8)
    {
    	printf("\n\n\n\n\t\t\t\t\t\t\tAverage is Above 8.. That's Brilliant.. Student has High Capabilities and can excel..\n");
	}
	if(((x.m1+x.m1+x.m1+x.m1+x.m1+x.m1)/6)>9)
    {
    	printf("\n\n\n\n\t\t\t\t\t\tAverage is above 9 .. The Student Has performed Exceptionally Well\n");
	}
	printf("\n\n\n\n\n\n\n");
   }
   
    if(x.usn>=141&&x.usn<=143&&x.sem==8)
	{ 
    printf("Details of the student is \n\n");
    printf("%s\n\n",x.name);
    printf("%d year student\n\n",x.year);
    printf("%d semester student\n\n",x.sem);
    printf("Branch of the student is %s\n\n",x.Branch);
    printf("Cloud Computing (4 credits)-- %dgpa\n\n",x.m1);
    printf("Program Elective(3credits)-- %dgpa\n\n",x.m2);
    printf("Project work (15 credits)-- %dgpa\n\n",x.m3);
    printf("internship/ Minor Projec(2 credits)-- %dgpa\n\n",x.m4);
    printf("Distributed Computing Laboratory(1.5 credits)-- %dgpa\n\n",x.m5);
    printf("Android programming Laboratory(1.5 credits)-- %dgpa\n\n",x.m6);
    t=(4*x.m1+3*x.m2+15*x.m3+2*x.m4+1.5*x.m5+1.5*x.m6)/27;
    printf("CGPA obtained by Student including credits is %d\n\n",t);
    if(x.m1<=8)
    {
    	printf("Below 8GPA..Can do Better Cloud Computing\n\n");
	}
	else
	{
	printf("Average Is above 8GPA..Performed Well in Cloud Computing\n\n");
	}
	if(x.m2<=8)
    {
    	printf("Below 8GPA..Can do Better In Program Elective\n\n");
	}
	else
	{
	printf("Average Is above 8GPA..Performed Well in Program Elective\n\n");
	}
	if(x.m3<8)
    {
    	printf("Below 8GPA..Can do Better In Project work\n\n");
	}
	else
	{
	printf("Average Is above 8GPA..Performed Well in Project work\n\n");
	}
	if(x.m4<8)
    {
    	printf("Below 8GPA..Can do Better In internship/ Minor Projec\n\n");
	}
	else
	{
	printf("Average Is above 8GPA..Performed Well in internship/ Minor Projec\n\n");
	}
	if(x.m5<8)
    { 
    	printf("Below 8GPA..Can do Better In Distributed Computing Laboratory\n\n");
	}
	else
	{
	printf("Average Is above 8GPA..Performed Well in Distributed Computing Laboratory\n\n");
	}
	if(x.m6<8)
    {
    	printf("Below 8GPA..Can do Better In Android programming Laboratory\n\n");
	}
	else
	{
	printf("Average Is above 8GPA..Performed Well in Android programming Laboratory\n\n");
	}
	printf("\n\n\n\n\n\t\t\t\t\t\t\tAverage of GPAs scored by student is %d\n\n",(x.m1+x.m1+x.m1+x.m1+x.m1+x.m1)/6);
    if(((x.m1+x.m1+x.m1+x.m1+x.m1+x.m1)/6)<=7)
    {
    	printf("\n\n\n\n\t\t\t\t\t\tAverage is Below 7 .. Needs improvement\n");
	}
	if(((x.m1+x.m1+x.m1+x.m1+x.m1+x.m1)/6)>7&&((x.m1+x.m1+x.m1+x.m1+x.m1+x.m1)/6)<=8)
    {
    	printf("\n\n\n\n\t\t\t\t\t\t\tAverage is Above 7.. Impresive..Work Hard and perform even Better\n");
	}
	if(((x.m1+x.m1+x.m1+x.m1+x.m1+x.m1)/6)<=9&&((x.m1+x.m1+x.m1+x.m1+x.m1+x.m1)/6)>8)
    {
    	printf("\n\n\n\n\t\t\t\t\t\t\tAverage is Above 8.. That's Brilliant.. Student has High Capabilities and can excel..\n");
	}
	if(((x.m1+x.m1+x.m1+x.m1+x.m1+x.m1)/6)>9)
    {
    	printf("\n\n\n\n\t\t\t\t\t\tAverage is above 9 .. The Student Has performed Exceptionally Well\n");
	}
	printf("\n\n\n\n\n\n\n");
   
}
if(x.usn>=147&&x.usn<=149&&x.sem==4)
	{ 
    printf("Details of the student is \n\n");
    printf("%s\n\n",x.name);
    printf("%d year student\n\n",x.year);
    printf("%d semester student\n\n",x.sem);
    printf("Branch of the student is %s\n\n",x.Branch);
    printf("ENGINEERING MATHEMATICS (4 credits)-- %dgpa\n\n",x.m1);
    printf("THEORY OF MACHINES (3credits)-- %dgpa\n\n",x.m2);
    printf("MATERIAL SCIENCE AND METALLURGY (4 credits)-- %dgpa\n\n",x.m3);
    printf("COMPUTER AIDED MACHINE DRAWING(4 credits)-- %dgpa\n\n",x.m4);
    printf("AIRCRAFT PROPULSION (4 credits)-- %dgpa\n\n",x.m5);
    printf("PRODUCTION TECHNOLOGY (4 credits)-- %dgpa\n\n",x.m6);
    t=(4*x.m1+3*x.m2+4*x.m3+4*x.m4+4*x.m5+4*x.m6)/23;
    printf("CGPA obtained by Student including credits is %d\n\n",t);
    if(x.m1<=8)
    {
    	printf("Below 8GPA..Can do Better Cloud Computing\n\n");
	}
	else
	{
	printf("Average Is above 8GPA..Performed Well in Cloud Computing\n\n");
	}
	if(x.m2<=8)
    {
    	printf("Below 8GPA..Can do Better In Program Elective\n\n");
	}
	else
	{
	printf("Average Is above 8GPA..Performed Well in Program Elective\n\n");
	}
	if(x.m3<8)
    {
    	printf("Below 8GPA..Can do Better In Project work\n\n");
	}
	else
	{
	printf("Average Is above 8GPA..Performed Well in Project work\n\n");
	}
	if(x.m4<8)
    {
    	printf("Below 8GPA..Can do Better In internship/ Minor Projec\n\n");
	}
	else
	{
	printf("Average Is above 8GPA..Performed Well in internship/ Minor Projec\n\n");
	}
	if(x.m5<8)
    { 
    	printf("Below 8GPA..Can do Better In Distributed Computing Laboratory\n\n");
	}
	else
	{
	printf("Average Is above 8GPA..Performed Well in Distributed Computing Laboratory\n\n");
	}
	if(x.m6<8)
    {
    	printf("Below 8GPA..Can do Better In Android programming Laboratory\n\n");
	}
	else
	{
	printf("Average Is above 8GPA..Performed Well in Android programming Laboratory\n\n");
	}
	printf("\n\n\n\n\n\t\t\t\t\t\t\tAverage of GPAs scored by student is %d\n\n",(x.m1+x.m1+x.m1+x.m1+x.m1+x.m1)/6);
    if(((x.m1+x.m1+x.m1+x.m1+x.m1+x.m1)/6)<=7)
    {
    	printf("\n\n\n\n\t\t\t\t\t\tAverage is Below 7 .. Needs improvement\n");
	}
	if(((x.m1+x.m1+x.m1+x.m1+x.m1+x.m1)/6)>7&&((x.m1+x.m1+x.m1+x.m1+x.m1+x.m1)/6)<=8)
    {
    	printf("\n\n\n\n\t\t\t\t\t\t\tAverage is Above.. Impresive..Work Hard and perform even Better\n");
	}
	if(((x.m1+x.m1+x.m1+x.m1+x.m1+x.m1)/6)<=9&&((x.m1+x.m1+x.m1+x.m1+x.m1+x.m1)/6)>8)
    {
    	printf("\n\n\n\n\t\t\t\t\t\t\tAverage is Above 8.. That's Brilliant.. Student has High Capabilities and can excel..\n");
	}
	if(((x.m1+x.m1+x.m1+x.m1+x.m1+x.m1)/6)>9)
    {
    	printf("\n\n\n\n\t\t\t\t\t\tAverage is above 9 .. The Student Has performed Exceptionally Well\n");
	}
	printf("\n\n\n\n\n\n\n");
   
}
if(x.usn>=150&&x.usn<=152&&x.sem==6)
	{ 
    printf("Details of the student is \n\n");
    printf("%s\n\n",x.name);
    printf("%d year student\n\n",x.year);
    printf("%d semester student\n\n",x.sem);
    printf("Branch of the student is %s\n\n",x.Branch);
    printf("Core Java (4 credits)-- %dgpa\n\n",x.m1);
    printf("Software Engineering (4 credits)-- %dgpa\n\n",x.m2);
    printf("Program Elective (4 credits)-- %dgpa\n\n",x.m3);
    printf("Computer Network (4 credits)-- %dgpa\n\n",x.m4);
    printf("Open Elective (3 credits)-- %dgpa\n\n",x.m5);
    printf("Computer Graphics with OpenGL (4 credits)-- %dgpa\n\n",x.m6);
    t=(4*x.m1+4*x.m2+4*x.m3+4*x.m4+3*x.m5+4*x.m6)/23;
    printf("CGPA obtained by Student including credits is %d\n\n",t);
    if(x.m1<=8)
    {
    	printf("Below 8GPA..Can do Better Core Java\n\n");
	}
	else
	{
	printf("Average Is above 8GPA..Performed Well in Core Java\n\n");
	}
	if(x.m2<=8)
    {
    	printf("Below 8GPA..Can do Better In Software Engineering\n\n");
	}
	else
	{
	printf("Average Is above 8GPA..Performed Well in Software Engineering\n\n");
	}
	if(x.m3<8)
    {
    	printf("Below 8GPA..Can do Better In Program Elective\n\n");
	}
	else
	{
	printf("Average Is above 8GPA..Performed Well in Program Elective\n\n");
	}
	if(x.m4<8)
    {
    	printf("Below 8GPA..Can do Better In Computer Network\n\n");
	}
	else
	{
	printf("Average Is above 8GPA..Performed Well in Computer Network\n\n");
	}
	if(x.m5<8)
    { 
    	printf("Below 8GPA..Can do Better In Open Elective\n\n");
	}
	else
	{
	printf("Average Is above 8GPA..Performed Well in Open Elective\n\n");
	}
	if(x.m6<8)
    {
    	printf("Below 8GPA..Can do Better In Computer Graphics with OpenGL\n\n");
	}
	else
	{
	printf("Average Is above 8GPA..Performed Well in Computer Graphics with OpenGL\n\n");
	}
	printf("\n\n\n\n\n\t\t\t\t\t\t\tAverage of GPAs scored by student is %d\n\n",(x.m1+x.m1+x.m1+x.m1+x.m1+x.m1)/6);
    if(((x.m1+x.m1+x.m1+x.m1+x.m1+x.m1)/6)<=7)
    {
    	printf("\n\n\n\n\t\t\t\t\t\tAverage is Below 7 .. Needs improvement\n");
	}
	if(((x.m1+x.m1+x.m1+x.m1+x.m1+x.m1)/6)>7&&((x.m1+x.m1+x.m1+x.m1+x.m1+x.m1)/6)<=8)
    {
    	printf("\n\n\n\n\t\t\t\t\t\t\tAverage is Above 7.. Impresive..Work Hard and perform even Better\n");
	}
	if(((x.m1+x.m1+x.m1+x.m1+x.m1+x.m1)/6)<=9&&((x.m1+x.m1+x.m1+x.m1+x.m1+x.m1)/6)>8)
    {
    	printf("\n\n\n\n\t\t\t\t\t\t\tAverage is Above 8.. That's Brilliant.. Student has High Capabilities and can excel..\n");
	}
	if(((x.m1+x.m1+x.m1+x.m1+x.m1+x.m1)/6)>9)
    {
    	printf("\n\n\n\n\t\t\t\t\t\tAverage is above 9 .. The Student Has performed Exceptionally Well\n");
	}
	printf("\n\n\n\n\n\n\n");
   
}
if(x.usn>=153&&x.usn<=155&&x.sem==8)
	{ 
    printf("Details of the student is \n\n");
    printf("%s\n\n",x.name);
    printf("%d year student\n\n",x.year);
    printf("%d semester student\n\n",x.sem);
    printf("Branch of the student is %s\n\n",x.Branch);
    printf("Composite Materials (4 credits)-- %dgpa\n\n",x.m1);
    printf("Program ELECTIVE (4 credits)-- %dgpa\n\n",x.m2);
    printf("Project Work (14 credits)-- %dgpa\n\n",x.m3);
    printf("Internship (2 credits)-- %dgpa\n\n",x.m4);
    printf("Heat Transfer Lab (1.5 credits)-- %dgpa\n\n",x.m5);
    printf("CIM & Automation Lab (1.5 credits)-- %dgpa\n\n",x.m6);
    t=(4*x.m1+4*x.m2+14*x.m3+2*x.m4+1.5*x.m5+1.5*x.m6)/27;
    printf("CGPA obtained by Student including credits is %d\n\n",t);
    if(x.m1<=8)
    {
    	printf("Below 8GPA..Can do Better Composite Materials\n\n");
	}
	else
	{
	printf("Average Is above 8GPA..Performed Well in Composite Materials\n\n");
	}
	if(x.m2<=8)
    {
    	printf("Below 8GPA..Can do Better In Program ELECTIVE\n\n");
	}
	else
	{
	printf("Average Is above 8GPA..Performed Well in Program ELECTIVE\n\n");
	}
	if(x.m3<8)
    {
    	printf("Below 8GPA..Can do Better In Project Work\n\n");
	}
	else
	{
	printf("Average Is above 8GPA..Performed Well in Project Work\n\n");
	}
	if(x.m4<8)
    {
    	printf("Below 8GPA..Can do Better In Internship\n\n");
	}
	else
	{
	printf("Average Is above 8GPA..Performed Well in Internship\n\n");
	}
	if(x.m5<8)
    { 
    	printf("Below 8GPA..Can do Better In Heat Transfer Lab\n\n");
	}
	else
	{
	printf("Average Is above 8GPA..Performed Well in Heat Transfer Lab\n\n");
	}
	if(x.m6<8)
    {
    	printf("Below 8GPA..Can do Better In CIM & Automation Lab\n\n");
	}
	else
	{
	printf("Average Is above 8GPA..Performed Well in CIM & Automation Lab\n\n");
	}
	printf("\n\n\n\n\n\t\t\t\t\t\t\tAverage of GPAs scored by student is %d\n\n",(x.m1+x.m1+x.m1+x.m1+x.m1+x.m1)/6);
    if(((x.m1+x.m1+x.m1+x.m1+x.m1+x.m1)/6)<=7)
    {
    	printf("\n\n\n\n\t\t\t\t\t\tAverage is Below 7 .. Needs improvement\n");
	}
	if(((x.m1+x.m1+x.m1+x.m1+x.m1+x.m1)/6)>7&&((x.m1+x.m1+x.m1+x.m1+x.m1+x.m1)/6)<=8)
    {
    	printf("\n\n\n\n\t\t\t\t\t\t\tAverage is Above 7.. Impresive..Work Hard and perform even Better\n");
	}
	if(((x.m1+x.m1+x.m1+x.m1+x.m1+x.m1)/6)<=9&&((x.m1+x.m1+x.m1+x.m1+x.m1+x.m1)/6)>8)
    {
    	printf("\n\n\n\n\t\t\t\t\t\t\tAverage is Above 8.. That's Brilliant.. Student has High Capabilities and can excel..\n");
	}
	if(((x.m1+x.m1+x.m1+x.m1+x.m1+x.m1)/6)>9)
    {
    	printf("\n\n\n\n\t\t\t\t\t\tAverage is above 9 .. The Student Has performed Exceptionally Well\n");
	}
	printf("\n\n\n\n\n\n\n");
	
}
if((strcmp(x.Branch,"Mechanical")==0||strcmp(x.Branch,"Aeronautical")==0)&&x.year==1&&x.sem==2)
{
	printf("Details of the student is \n\n");
    printf("%s\n\n",x.name);
    printf("%d year student\n\n",x.year);
    printf("%d semester student\n\n",x.sem);
    printf("Branch of the student is %s\n\n",x.Branch);
    printf("Physics (4 credits)-- %dgpa\n\n",x.m1);
    printf("Engineering Mathematics (4 credits)-- %dgpa\n\n",x.m2);
    printf("Elements of Mechanical Engineering (4.5 credits)-- %dgpa\n\n",x.m3);
    printf("Engineering Mechanics (4.5 credits)-- %dgpa\n\n",x.m4);
    printf("Physics Lab (1.5 credits)-- %dgpa\n\n",x.m5);
    printf("Electrical (4 credits)-- %dgpa\n\n",x.m6);
    t=(4*x.m1+4*x.m2+4.5*x.m3+4.5*x.m4+1.5*x.m5+4*x.m6)/22.5;
    printf("CGPA obtained by Student including credits is %d\n\n",t);
    if(x.m1<=8)
    {
    	printf("Below 8GPA..Can do Better Physics\n\n");
	}
	else
	{
	printf("Average Is above 8GPA..Performed Well in Physics\n\n");
	}
	if(x.m2<=8)
    {
    	printf("Below 8GPA..Can do Better In Engineering Mathematics\n\n");
	}
	else
	{
	printf("Average Is above 8GPA..Performed Well in Engineering Mathematics\n\n");
	}
	if(x.m3<8)
    {
    	printf("Below 8GPA..Can do Better In Elements of Mechanical Engineering\n\n");
	}
	else
	{
	printf("Average Is above 8GPA..Elements of Mechanical Engineering\n\n");
	}
	if(x.m4<8)
    {
    	printf("Below 8GPA..Can do Better In Engineering Mechanics\n\n");
	}
	else
	{
	printf("Average Is above 8GPA..Performed Well in Engineering Mechanics\n\n");
	}
	if(x.m5<8)
    { 
    	printf("Below 8GPA..Can do Better In Physics Lab\n\n");
	}
	else
	{
	printf("Average Is above 8GPA..Performed Well in Physics Lab\n\n");
	}
	if(x.m6<8)
    {
    	printf("Below 8GPA..Can do Better In Electrical\n\n");
	}
	else
	{
	printf("Average Is above 8GPA..Performed Well in Electrical\n\n");
	}
	printf("\n\n\n\n\n\t\t\t\t\t\t\tAverage of GPAs scored by student is %d\n\n",(x.m1+x.m1+x.m1+x.m1+x.m1+x.m1)/6);
    if(((x.m1+x.m1+x.m1+x.m1+x.m1+x.m1)/6)<=7)
    {
    	printf("\n\n\n\n\t\t\t\t\t\tAverage is Below 7 .. Needs improvement\n");
	}
	if(((x.m1+x.m1+x.m1+x.m1+x.m1+x.m1)/6)>7&&((x.m1+x.m1+x.m1+x.m1+x.m1+x.m1)/6)<=8)
    {
    	printf("\n\n\n\n\t\t\t\t\t\t\tAverage is Above 7.. Impresive..Work Hard  and perform even Better\n");
	}
	if(((x.m1+x.m1+x.m1+x.m1+x.m1+x.m1)/6)<=9&&((x.m1+x.m1+x.m1+x.m1+x.m1+x.m1)/6)>8)
    {
    	printf("\n\n\n\n\t\t\t\t\t\t\tAverage is Above 8.. That's Brilliant.. Student has High Capabilities and can excel..\n");
	}
	if(((x.m1+x.m1+x.m1+x.m1+x.m1+x.m1)/6)>9)
    {
    	printf("\n\n\n\n\t\t\t\t\t\tAverage is above 9 .. The Student Has performed Exceptionally Well\n");
	}
	printf("\n\n\n\n\n\n\n");
}
if((strcmp(x.Branch,"Computer Science")==0&&x.year==1&&x.sem==2))
{
	printf("Details of the student is \n\n");
    printf("%s\n\n",x.name);
    printf("%d year student\n\n",x.year);
    printf("%d semester student\n\n",x.sem);
    printf("Branch of the student is %s\n\n",x.Branch);
    printf("CCP (4.5 credits)-- %dgpa\n\n",x.m1);
    printf("Engineering Mathematics (4.5 credits)-- %dgpa\n\n",x.m2);
    printf("Electronics (4.5 credits)-- %dgpa\n\n",x.m3);
    printf("Chemistry (4.5 credits)-- %dgpa\n\n",x.m4);
    printf("Computer Aided Design (4 credits)-- %dgpa\n\n",x.m5);
    printf("CCP Lab (1.5 credits)-- %dgpa\n\n",x.m6);
    t=(4.5*x.m1+4.5*x.m2+4.5*x.m3+4.5*x.m4+4*x.m5+1.5*x.m6)/23.5;
    printf("CGPA obtained by Student including credits is %d\n\n",t);
    if(x.m1<=8)
    {
    	printf("Below 8GPA..Can do Better CCP\n\n");
	}
	else
	{
	printf("Average Is above 8GPA..Performed Well in CCP\n\n");
	}
	if(x.m2<=8)
    {
    	printf("Below 8GPA..Can do Better In Engineering Mathematics\n\n");
	}
	else
	{
	printf("Average Is above 8GPA..Performed Well in Engineering Mathematics\n\n");
	}
	if(x.m3<8)
    {
    	printf("Below 8GPA..Can do Better In Electronics\n\n");
	}
	else
	{
	printf("Average Is above 8GPA..Elements of Electronics\n\n");
	}
	if(x.m4<8)
    {
    	printf("Below 8GPA..Can do Better In Chemistry\n\n");
	}
	else
	{
	printf("Average Is above 8GPA..Performed Well in Chemistry\n\n");
	}
	if(x.m5<8)
    { 
    	printf("Below 8GPA..Can do Better In Computer Aided Design\n\n");
	}
	else
	{
	printf("Average Is above 8GPA..Performed Well in Computer Aided Design\n\n");
	}
	if(x.m6<8)
    {
    	printf("Below 8GPA..Can do Better In CCP Lab\n\n");
	}
	else
	{
	printf("Average Is above 8GPA..Performed Well in CCP Lab\n\n");
	}
	printf("\n\n\n\n\n\t\t\t\t\t\t\tAverage of GPAs scored by student is %d\n\n",(x.m1+x.m1+x.m1+x.m1+x.m1+x.m1)/6);
    if(((x.m1+x.m1+x.m1+x.m1+x.m1+x.m1)/6)<=7)
    {
    	printf("\n\n\n\n\t\t\t\t\t\tAverage is Below 7 .. Needs improvement\n");
	}
	if(((x.m1+x.m1+x.m1+x.m1+x.m1+x.m1)/6)>7&&((x.m1+x.m1+x.m1+x.m1+x.m1+x.m1)/6)<=8)
    {
    	printf("\n\n\n\n\t\t\t\t\t\t\tAverage is Above.. Impresive..Work Hard and perform even Better\n");
	}
	if(((x.m1+x.m1+x.m1+x.m1+x.m1+x.m1)/6)<=9&&((x.m1+x.m1+x.m1+x.m1+x.m1+x.m1)/6)>8)
    {
    	printf("\n\n\n\n\t\t\t\t\t\t\tAverage is Above 8.. That's Brilliant.. Student has High Capabilities and can excel..\n");
	}
	if(((x.m1+x.m1+x.m1+x.m1+x.m1+x.m1)/6)>9)
    {
    	printf("\n\n\n\n\t\t\t\t\t\tAverage is above 9 .. The Student Has performed Exceptionally Well\n");
	}
	printf("\n\n\n\n\n\n\n");
}
}
void SPLS(struct spa y,struct spa z)                                            //Function For Tracking Student Progress
{ float g1,g2,ag1,ag2;
  printf("Details Of the Student Is ");
  printf("\t\t\t%s\n\n",y.name);
  printf("\t\t\t\t\t\t%d Year \n\n",y.year);
  printf("\t\tGPAs of the Student in %d Semester\t\tGPAs of the Student in %d Semester\n\n",y.sem,z.sem);
  printf("\tsubject 1\t\t%d POINTS\t\t\t\t\t\t%d POINTS\n\n",y.m1,z.m1);
  printf("\tsubject 2\t\t%d POINTS\t\t\t\t\t\t%d POINTS\n\n",y.m2,z.m2);
  printf("\tsubject 3\t\t%d POINTS\t\t\t\t\t\t%d POINTS\n\n",y.m3,z.m3);
  printf("\tsubject 4\t\t%d POINTS\t\t\t\t\t\t%d POINTS\n\n",y.m4,z.m4);
  printf("\tsubject 5\t\t%d POINTS\t\t\t\t\t\t%d POINTS\n\n",y.m5,z.m5);
  printf("\tsubject 6\t\t%d POINTS\t\t\t\t\t\t%d POINTS\n\n",y.m6,z.m6);
  g1=(y.m1*4+y.m2*4+y.m3*1.5+y.m4*1.5+y.m5*4.5+y.m6*4)/19.5;
  g2=(z.m1*4+z.m2*4+z.m3*1.5+z.m4*1.5+z.m5*4.5+z.m6*4)/19.5;
  printf("\t\tSGPA in %d semester is %f\t\t\tSGPA In %d semester is %f\n\n",y.sem,g1,z.sem,g2);
  if(g1>g2)
  {
  	printf("\t\t\t\t\tCGPA has increased from the last Semester so the student has progressed\n\n\n");
  }
  else if(g1==g2)
  printf("\t\t\t\t\tSGPA remains Same to last Semester \n\n");
  else
  {
  	printf("\t\tSGPA has decreased from the last semester so the performance has decresed... Student Needs to practice hard..\n\n");
  }
  ag1=(y.m1+y.m2+y.m3+y.m4+y.m5+y.m6)/6;
  ag2=(z.m1+z.m2+z.m3+z.m4+z.m5+z.m6)/6;
  if(ag1>ag2)
  printf("\t\t\t\tAverage GPA increased From %f to %f",ag2,ag1);
  else if(ag1==ag2)
  {
  	printf("\t\t\t\tAverage GPA is same (%f) so no progress is seen from last Semester \n\n",ag2);
  }
  else
  {
  	printf("\t\t\tAverage GPA decreased from %f to %f\n\n",ag2,ag1);
  }
 }
void DP(struct spa a,struct spa b,struct spa c)                                                  //Function For Comparing Different Departments Student
{   float yat1,yat2,yat3;
	printf("\t\t\t\n\n%s\n\n",a.Branch);
	printf("\t\tName\t\tGPAs\t\t\t\t\t\t  Avg GPA\n\n");
	yat1=(a.m1+a.m2+a.m3+a.m4+a.m5+a.m6)/6;
	
	printf("\t\t%s\t%d\t%d\t%d\t%d\t%d\t%d\t%f\n\n",a.name,a.m1,a.m2,a.m3,a.m4,a.m5,a.m6,yat1);
	
	
	yat2=(b.m1+b.m2+b.m3+b.m4+b.m5+b.m6)/6;
	printf("\t\t%s\t%d\t%d\t%d\t%d\t%d\t%d\t%f\n\n",b.name,b.m1,b.m2,b.m3,b.m4,b.m5,b.m6,yat2);
	
	yat3=(c.m1+c.m2+c.m3+c.m4+c.m5+c.m6)/6;
	printf("\t\t%s\t%d\t%d\t%d\t%d\t%d\t%d\t%f\n\n",c.name,c.m1,c.m2,c.m3,c.m4,c.m5,c.m6,yat3);
	
}
