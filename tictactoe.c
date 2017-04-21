#include<stdio.h>
#include<stdlib.h>
int midflag=0,inx,iny;
void compin(int tic[3][3]);
void check(int tic[3][3]);
int intel(int tic[3][3]);
void main()
{
 int tic[3][3],i,j,count=0;
 for(i=0;i<3;i++)
 for(j=0;j<3;j++)
 {
  tic[i][j]='x';
 }
 printf("Initial board state,the blank spaces are marked my spaces, user's input will be marked by 1 and the CPU's by zero. Best of luck! :)\n");
 for(i=0;i<3;i++)
 {
  for(j=0;j<3;j++)
  {
   printf("%c ",tic[i][j]);
  }
  printf("\n");
 }
 for(count=0;count<5;count++)
 {
  printf("Enter the position::(x-coord) & (y-coord):");
  scanf("%d%d",&inx,&iny);
  if(tic[inx][iny]=='x')
  {
   tic[inx][iny]=1;
  }
  else
  {
   printf("\nERROR!!!");
   exit(0);
  }
  compin(tic);
  for(i=0;i<3;i++)
  {
   for(j=0;j<3;j++)
   {
    if(tic[i][j]=='x')
    printf("%c ",tic[i][j]); 
    else
    printf("%d ",tic[i][j]);
   }
   printf("\n");
  }
  if(count>=2)
  {
   check(tic);
  }
 }
 printf("\n DRAW!!!");
} 
void compin(int tic[3][3])
{
 int a[]={2,0,1},i,j,b[]={0,2,1},intelflag=0;   
 for(i=0;i<3;i++)
 {
  for(j=0;j<3;j++)
  {
   intelflag=intel(tic);
   if(intelflag==1)
   {
    
    return;
   }
   else 
   {
    if(tic[a[i]][b[j]]=='x')
    {
     tic[a[i]][b[j]]=0;
     return;
    }
   }
  }
 }
}
void check(int tic[3][3])
{
 if((tic[0][0]==1)&&(tic[0][0]==tic[0][1])&&(tic[0][1]==tic[0][2]))
 {
  printf("YOU WIN!!!\n");
  exit(0);
 }
  if((tic[1][0]==1)&&(tic[1][0]==tic[1][1])&&(tic[1][1]==tic[1][2]))
 {
  printf("YOU WIN!!!\n");
  exit(0);
 }
 if((tic[2][0]==1)&&(tic[2][0]==tic[2][1])&&(tic[2][1]==tic[2][2]))
 {
  printf("YOU WIN!!!\n");
  exit(0);
 }
 if((tic[0][0]==1)&&(tic[0][0]==tic[1][0])&&(tic[1][0]==tic[2][0]))
 {
  printf("YOU WIN!!!\n");
  exit(0);
 }
 if((tic[0][1]==1)&&(tic[0][1]==tic[1][1])&&(tic[1][1]==tic[2][1]))
 {
  printf("YOU WIN!!!\n");
  exit(0);
 }
 if((tic[0][2]==1)&&(tic[0][2]==tic[1][2])&&(tic[1][2]==tic[2][2]))
 {
  printf("YOU WIN!!!\n");
  exit(0);
 }
 if((tic[0][0]==1)&&(tic[0][0]==tic[1][1])&&(tic[1][1]==tic[2][2]))
 {
  printf("YOU WIN!!!\n");
  exit(0);
 }
 if((tic[0][2]==1)&&(tic[0][2]==tic[1][1])&&(tic[1][1]==tic[2][0]))
 {
  printf("YOU WIN!!!\n");
  exit(0);
 }
 if((tic[0][0]==0)&&(tic[0][0]==tic[0][1])&&(tic[0][1]==tic[0][2]))
 {
  printf("YOU LOSE!!!\n");
  exit(0);
 }
  if((tic[1][0]==0)&&(tic[1][0]==tic[1][1])&&(tic[1][1]==tic[1][2]))
 {
  printf("YOU LOSE!!!\n");
  exit(0);
 }
 if((tic[2][0]==0)&&(tic[2][0]==tic[2][1])&&(tic[2][1]==tic[2][2]))
 {
  printf("YOU LOSE!!!\n");
  exit(0);
 }
 if((tic[0][0]==0)&&(tic[0][0]==tic[1][0])&&(tic[1][0]==tic[2][0]))
 {
  printf("YOU LOSE!!!\n");
  exit(0);
 }
 if((tic[0][1]==0)&&(tic[0][1]==tic[1][1])&&(tic[1][1]==tic[2][1]))
 {
  printf("YOU LOSE!!!\n");
  exit(0);
 }
 if((tic[0][2]==0)&&(tic[0][2]==tic[1][2])&&(tic[1][2]==tic[2][2]))
 {
  printf("YOU LOSE!!!\n");
  exit(0);
 }
 if((tic[0][0]==0)&&(tic[0][0]==tic[1][1])&&(tic[1][1]==tic[2][2]))
 {
  printf("YOU LOSE!!!\n");
  exit(0);
 }
 if((tic[0][2]==0)&&(tic[0][2]==tic[1][1])&&(tic[1][1]==tic[2][0]))
 {
  printf("YOU LOSE!!!\n");
  exit(0);
 }
}
int intel(int tic[3][3])
{
 int i,j;
 


  for(i=0;i<3;i++)
 {
  if((tic[i][0]==0)&&(tic[i][0]==tic[i][1]))
  {
   if(tic[i][2]=='x')
   {
    tic[i][2]=0;
    return 1;
   }   
  }
 if((tic[i][1]==0)&&(tic[i][2]==tic[i][1]))
  {
   if(tic[i][0]=='x')
   {
    tic[i][0]=0;
    return 1;
   }   
  }
 if((tic[i][0]==0)&&(tic[i][0]==tic[i][2]))
  {
   if(tic[i][1]=='x')
   {
    tic[i][1]=0;
    return 1;
   }   
  }
 } 
 for(j=0;j<3;j++)
 {
  if((tic[0][j]==0)&&(tic[0][j]==tic[1][j]))
  {
   if(tic[2][j]=='x')
   {
    tic[2][j]=0;
    return 1; 
   }   
  }
  if((tic[0][j]==0)&&(tic[0][j]==tic[2][j]))
  {
   if(tic[1][j]=='x')
   {
    tic[1][j]=0; 
    return 1;
   }
  }
  if((tic[1][j]==0)&&(tic[2][j]==tic[1][j]))
  {
   if(tic[0][j]=='x')
   {
    tic[0][j]=0;
    return 1; 
   }
  }
 }

 if((tic[0][0]==0)&&(tic[1][1]==tic[0][0]))
 {
  if(tic[2][2]=='x')
  {
   tic[2][2]=0;
   return 1;
  }
 }   
 if((tic[0][0]==0)&&(tic[2][2]==tic[0][0]))
 {
  if(tic[1][1]=='x')
  {
   tic[1][1]=0;
   return 1;
  }
 }   
 if((tic[1][1]==0)&&(tic[2][2]==tic[1][1]))
 {
  if(tic[0][0]=='x')
  {
   tic[0][0]=0;
   return 1;
  }
 }
 
 if((tic[2][0]==0)&&(tic[1][1]==tic[2][0]))
 {
  if(tic[0][2]=='x')
  {
   tic[0][2]=0;
   return 1;
  }
 }   
 if((tic[0][2]==0)&&(tic[1][1]==tic[0][2]))
 {
  if(tic[2][0]=='x')
  {
   tic[2][0]=0;
   return 1;
  }
 }
 if((tic[2][0]==0)&&(tic[0][2]==tic[2][0]))
 {
  if(tic[1][1]=='x')
  {
   tic[1][1]=0;
   return 1;
  }
 } 

 for(i=0;i<3;i++)
 {
  if((tic[i][0]==1)&&(tic[i][0]==tic[i][1]))
  {
   if(tic[i][2]=='x')
   {
    tic[i][2]=0;
    return 1;
   }   
  }
 if((tic[i][1]==1)&&(tic[i][2]==tic[i][1]))
  {
   if(tic[i][0]=='x')
   {
    tic[i][0]=0;
    return 1;
   }   
  }
 if((tic[i][0]==1)&&(tic[i][0]==tic[i][2]))
  {
   if(tic[i][1]=='x')
   {
    tic[i][1]=0;
    return 1;
   }   
  }
 } 
 for(j=0;j<3;j++)
 {
  if((tic[0][j]==1)&&(tic[0][j]==tic[1][j]))
  {
   if(tic[2][j]=='x')
   {
    tic[2][j]=0;
    return 1; 
   }   
  }
  if((tic[0][j]==1)&&(tic[0][j]==tic[2][j]))
  {
   if(tic[1][j]=='x')
   {
    tic[1][j]=0; 
    return 1;
   }
  }
  if((tic[1][j]==1)&&(tic[2][j]==tic[1][j]))
  {
   if(tic[0][j]=='x')
   {
    tic[0][j]=0;
    return 1; 
   }
  }
 }

 if((tic[0][0]==1)&&(tic[1][1]==tic[0][0]))
 {
  if(tic[2][2]=='x')
  {
   tic[2][2]=0;
   return 1;
  }
 }   
 if((tic[0][0]==1)&&(tic[2][2]==tic[0][0]))
 {
  if(tic[1][1]=='x')
  {
   tic[1][1]=0;
   return 1;
  }
 }   
 if((tic[1][1]==1)&&(tic[2][2]==tic[1][1]))
 {
  if(tic[0][0]=='x')
  {
   tic[0][0]=0;
   return 1;
  }
 }
 
 if((tic[2][0]==1)&&(tic[1][1]==tic[2][0]))
 {
  if(tic[0][2]=='x')
  {
   tic[0][2]=0;
   return 1;
  }
 }   
 if((tic[0][2]==1)&&(tic[1][1]==tic[0][2]))
 {
  if(tic[2][0]=='x')
  {
   tic[2][0]=0;
   return 1;
  }
 }
 if((tic[2][0]==1)&&(tic[0][2]==tic[2][0]))
 {
  if(tic[1][1]=='x')
  {
   tic[1][1]=0;
   return 1;
  }
 }
 if(tic[0][0]==1)
 {
  if(tic[2][2]=='x')
  {
   tic[2][2]=0;
   return 1;
  }
 }
  if(tic[2][2]==1)
 {
  if(tic[0][0]=='x')
  {
   tic[0][0]=0;
   return 1;
  }
 }
 if(tic[0][2]==1)
 {
  if(tic[2][0]=='x')
  {
   tic[2][0]=0;
   return 1;
  }
 }
  if(tic[2][0]==1)
 {
  if(tic[0][2]=='x')
  {
   tic[0][2]=0;
   return 1;
  }
 }
 if(tic[1][1]=='x')
 {
  tic[1][1]=0;
  return 1;
 }
 if(tic[1][1]==1)
 { 
  if(midflag==0)
  {
   tic[0][0]=0;
   midflag++;
   return 1;   
  }
  if((midflag==1)&&(inx=2)&&(iny==2))
  {
   tic[2][0]=0;
   midflag++;
   return 1;
  }
 }
} 













