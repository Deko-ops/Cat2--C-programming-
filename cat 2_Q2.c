//c array- 2D arrays
/*
Author:Derrick Maina 
Date:7/11/2024
reg no : CT101/G/22604/24
*/
#include<stdio.h>
int main (){

int i,j;
int scores[2][2]={{35,70},{59,67}};
for(i=0;i<2;i++){
for(j=0;j<2;j++)
printf("scores[%d][%d]=%d\n",i,j,scores[i][j]);
}

return 0;
}