//CAT: How to program an array



/*
Author:Denzel Gitonga Mugendi
Reg No:CT101/G/24518/24
Date:7/11/2024
*/


#include <stdio.h>



int main(){
	int i,j,k;
	
	int score [2][2][2]=
	{
	{{65,92},{84,72}},
	{{35,70},{59,67}}
	};
	
    for(i=0;i<2;i++){
    for(j=0;j<2;j++){
    for(k=0;k<2;k++){
    	
    printf("score[%d][%d][%d]=%d\n",i,j,k,score[i][j][k]);
		
		
			}
		}
	}

	return 0;
}