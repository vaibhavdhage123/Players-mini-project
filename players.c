#include<stdio.h>
#include<string.h>
typedef struct players
{
	char name[20];
	int matches,runs,wickets,century,fifty,rank,age,jearsy_no,highestscore;	
}players;
void storeplayers(players*,int);
void displayplayers(players*,int);
void maxruns(players*,int);
void maxwickets(players*,int);
void minruns(players*,int);
void minwickets(players*,int);
void secondhighestruns(players*,int);
void secondhighestwickets(players*,int);
void searchjearseynum(players*,int);
void searchplayerrecord(players*,int);
void main()
{
	int n;
   printf("\nHow many players you want:");
   scanf("%d",&n);
   
   players arr[n];                         //structure players arr[n];
   
	int op;
	char ch;
   do{
   
   printf("\nWhich record you want :");
   printf("\n1.Store player Information");
   printf("\n2.Display player Information");
   printf("\n3.Max run");
   printf("\n4.Max wicket");
   printf("\n5.Min run");
   printf("\n6.Min wicket");
   printf("\n7.Secondhighest run");
   printf("\n8.Secondhighest Wicket");
   printf("\n9.Search by jersey Number");
   printf("\n10.Record Of player");
   
   printf("\nEnter Your Option :");
   scanf("%d",&op);
   
   	if(op==1)
	storeplayers(arr,n);
	if(op==2)
	displayplayers(arr,n);
	if(op==3)
	maxruns(arr,n);
	if(op==4)
	maxwickets(arr,n);
	if(op==5)
	minruns(arr,n);	
	if(op==6)
	minwickets(arr,n);
	if(op==7)
	secondhighestruns(arr,n);	
	if(op==8)
	secondhighestwickets(arr,n);
	if(op==9)
	searchjearseynum(arr,n);
	if(op==10)
	{
	 searchplayerrecord(arr,n);	
	}
	
	
	fflush(stdin);
	printf("\nDo you want More Information y/n:");
	scanf("%c",&ch);
	
}while(ch=='y');
if(ch=='n')
printf("\n****************************Thank You***********************************");
}
void storeplayers(players*ptr,int t)
{
	int i;
	for(i=0;i<t;i++)
	{
		printf("Enter player Name :");
		scanf("%s",&ptr[i].name);
		printf("Enter matches :");
		scanf("%d",&ptr[i].matches);
		printf("Enter runs :");
		scanf("%d",&ptr[i].runs);
		printf("Enter wickets :");
		scanf("%d",&ptr[i].wickets);
		printf("Enter Century :");
		scanf("%d",&ptr[i].century);
		printf("Enter Fifty  :");
		scanf("%d",&ptr[i].fifty);
		printf("Enter Highest Score  :");
		scanf("%d",&ptr[i].highestscore);
		printf("Enter Rank  :");
		scanf("%d",&ptr[i].rank);
		printf("Enter jearsy no :");
		scanf("%d",&ptr[i].jearsy_no);
		printf("Enter Age :");
		scanf("%d",&ptr[i].age);
		printf("\n");		
	}
}
void displayplayers(players*ptr,int t)
{
	int i;
	for(i=0;i<t;i++)
	{ 
		printf("\nPlayer Name : %s",ptr[i].name);
		printf("\nPlayed matches :%d",ptr[i].matches);
		printf("\nMaded Runs :%d",ptr[i].runs);
		printf("\nWickets Taken :%d",ptr[i].wickets);
		printf("\nCenturys :%d",ptr[i].century);
		printf("\nFiftys :%d",ptr[i].fifty);
		printf("\nRank No. :%d",ptr[i].rank);
		printf("\nJearsy No.:%d",ptr[i].jearsy_no);
		printf("\nAge :%d",ptr[i].age);
		printf("\nHighest Score :%d",ptr[i].highestscore);
		printf("\n******************************\n");	
	}	
}


void maxruns(players*ptr,int t)
{
	int i;
	char pname[20];
	strcpy(pname,ptr[0].name);         // Destination,Source
	int max=ptr[0].runs;
   
	for(i=0;i<t;i++)
	{
		if(ptr[i].runs>max)
		{
			max=ptr[i].runs;
		 strcpy(pname,ptr[i].name);

		}
	}
	printf("\n\n***************************************************************************");
	printf("\n\tMaximum runs:%d\n\tPlayer Name : %s",max,pname);
	printf("\n******************************\n");
}	
	
void maxwickets(players*ptr,int t)
{
	int i;
	char pname[20];
	strcpy(pname,ptr[0].name);
	int max=ptr[0].wickets;
	
	for(i=0;i<t;i++)
	{
		if(ptr[i].wickets>max)
		{
			max=ptr[i].wickets;
	        strcpy(pname,ptr[i].name);
	    
		}
	}
	printf("\n\n***************************************************************************");
	printf("\n\tMaximum wickets:%d\n\tplayer Name : %s",max,pname);
	printf("\n******************************\n");
}
void minruns(players*ptr,int t)
{
	int i;
	 char pname[20];
	strcpy(pname,ptr[0].name);
	int min=ptr[0].runs;
   
	for(i=0;i<t;i++)
	{
		if(ptr[i].runs<min)
		{
			min=ptr[i].runs;
		 strcpy(pname,ptr[i].name);

		}
	}
	printf("\n\n***************************************************************************");
	printf("\n\tMinimum runs:%d\n\tPlayer Name : %s",min,pname);
	printf("\n******************************\n");
}
void minwickets(players*ptr,int t)
{
	int i;
	char pname[20];
	strcpy(pname,ptr[0].name);
	int min=ptr[0].wickets;
	
	for(i=0;i<t;i++)
	{
		if(ptr[i].wickets<min)

		{
			min=ptr[i].wickets;
	        strcpy(pname,ptr[i].name);
	    
		}
	}
	printf("\n\n***************************************************************************");
	printf("\n\tMinimum wickets:%d\n\tplayer Name : %s",min,pname);
	printf("\n******************************\n");
}
void secondhighestruns(players*ptr,int t)
{
  	int i;
  	char pname[20];
	strcpy(pname,ptr[0].name);
	 int min=ptr[0].runs;
	 int max=ptr[0].runs;
	 for(i=0;i<t;i++)
	 {
	  if(ptr[i].runs<min)
	  {
	    min=ptr[i].runs;
	  }	
	   if(ptr[i].runs>max)
	  {
	    max=ptr[i].runs;
	  }	
	} 
	
	int second_high=min;
	for(i=0;i<t;i++)
	{
	 if(ptr[i].runs!=max&&ptr[i].runs>second_high)
	 	{
	 		second_high=ptr[i].runs;
	 		strcpy(pname,ptr[i].name);
		 }
	
	}

	printf("\n\tSecond Highest runs:%d\n\tplayer Name : %s",second_high,pname);
}
		
void secondhighestwickets(players*ptr,int t)
{
  	int i;
  	char pname[20];
	strcpy(pname,ptr[0].name);

	 int min=ptr[0].wickets;
	 int max=ptr[0].wickets;
	 for(i=0;i<t;i++)
	 {
	  if(ptr[i].wickets<min)
	  {
	    min=ptr[i].wickets;
	  }	 
	  if(ptr[i].wickets>max)
	  {
	    max=ptr[i].wickets;
	  }	 		
	}  
	
	int second_high=min;

	for(i=0;i<t;i++)
	{
	 if(ptr[i].wickets!=max&&ptr[i].wickets>second_high)
	 	{
	 		second_high=ptr[i].wickets;  
	 		strcpy(pname,ptr[i].name);
	    }	
	}
		printf("\n\tSecond Highest wickets:%d\n\tplayer Name : %s",second_high,pname);
}

void searchjearseynum(players*ptr,int t)
{
	int jersey;
	printf("\nEnter jersey Number :");
	scanf("%d",&jersey);
	int i;
	for(i=0;i<t;i++)
	{
		if(jersey==ptr[i].jearsy_no)
		{
			printf("\n\tPlayer Name : %s",ptr[i].name);
        	  	printf("\n\tAge :%dyr",ptr[i].age);
        	  	printf("\n\tICC Rank No. :%d",ptr[i].rank);
		        printf("\n\tPlayed matches :%d",ptr[i].matches);
	         	printf("\n\tMaded Runs :%d",ptr[i].runs);
	        	printf("\n\tWickets Taken :%d",ptr[i].wickets);
	         	printf("\n\tCenturys :%d",ptr[i].century);
		        printf("\n\tFiftys No.:%d",ptr[i].fifty);
	         	printf("\n\tHighest Score :%dvsPakistan",ptr[i].highestscore);
		        printf("\n******************************\n");	
	           break;
		}	
	}	
}

void searchplayerrecord(players*ptr,int t)
	{
	     fflush(stdin);
		char pname[20];
		printf("\nEnter player name :");
		scanf("%s",pname);
		
	   int i;
	   for(i=0;i<t;i++)
        {
        	int m=strcmp(ptr[i].name,pname);
        	if(m==0)
        	{
        	  	printf("\n\tPlayer Name : %s",ptr[i].name);
        	  	printf("\n\tAge :%dyr",ptr[i].age);
        	  	printf("\n\tJearsy No.:%d",ptr[i].jearsy_no);
        	  	printf("\n\tICC Rank No. :%d",ptr[i].rank);
		        printf("\n\tPlayed matches :%d",ptr[i].matches);
	         	printf("\n\tMaded Runs :%d",ptr[i].runs);
	        	printf("\n\tWickets Taken :%d",ptr[i].wickets);
	         	printf("\n\tCenturys :%d",ptr[i].century);
		        printf("\n\tFiftys No.:%d",ptr[i].fifty);
	         	printf("\n\tHighest Score :%dvsPakistan",ptr[i].highestscore);
		        printf("\n******************************\n");	
	           break;
			}
	     }
}
	
	
	
	
	

