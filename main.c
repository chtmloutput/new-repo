/*******************************************************
Copyright Terence Crocker 2021 All Rights Reserved.
*******************************************************/

#include <stdio.h>
#include <stdlib.h>

void exit();

void head(),heading(),trailer(),htmlcode(),setchar();
void paragraph(),span1(),span2(),span3(),tail(),whiz();

/****************************************************

				#FF0000; red
				#3cb371; medium sea green
				#000080; navy
				#000000; black

*/
char DQUOTE = '"';

FILE *fopen(const char *file, const char *attr);
FILE *fp,*fp_in0,*fp_in1,*fp_in2,*fp_in3,*fp_in4,*fp_in5;
FILE *fp_out0, *fp_out1,*fp_out2,*fp_out3,*fp_out4,*fp_out5;

    int i,i1,i2,i3,i4,i5,i6,i7,i8,i9,iA,iB,iC;
    int total,target,count;

char changed1[8],changed2[8],changed3[8],changed4[8];
char changed5[8],changed6[8],changed7[8],changed8[8];
char changed9[8],changedA[8],changedB[8],changedC[8];

char n1,n2,n3,filename[20],linkname[20],next[100];
int counter,last,begin;


int main() { 

    fp_out0 = fopen("index.html","a"); 
    printf(" fp_out0=%d\n",fp_out0);

    fp_out1 = fopen("test","a"); 
    printf(" fp_out1=%d\n",fp_out1);
    fp_out2 = fopen("notremoved","a"); 
    printf(" fp_out2=%d\n",fp_out2);
    if ( remove("test") == 0 ) printf(" success!\n");
    else                       printf(" fail!\n");
/*
    if ( remove("notremoved") == 0 ) printf(" success!\n");
    else                       printf(" fail!\n");  */

    setchar();  

	begin = 1; /*do the initial case of 132 */
	begin = 0;

if (begin == 1) {    
	target = 132; count = 0; last = 0; whiz(target); 
	/* last is set */ printf(" last=%d\n",last); /* exit(0); */
	count = 0; 
    target = 132; counter = 0; n1='1'; n2='3'; n3='2'; 
} else {
	
    target = 164; count = 0; last = 0; whiz(target);
	printf(" last=%d\n",last);
	count = 0; 
    target = 164; counter = 0; n1='1'; n2='6'; n3='4'; 
	

    target = 182; count = 0; last = 0; whiz(target);
	printf(" last=%d\n",last);
	count = 0; 
    target = 182; counter = 0; n1='1'; n2='8'; n3='2'; 


    target = 214; count = 0; last = 0; whiz(target);
	printf(" last=%d\n",last);
	count = 0; 
    target = 214; counter = 0; n1='2'; n2='1'; n3='4';


    target = 312; count = 0; last = 0; whiz(target);
	printf(" last=%d\n",last);
	count = 0; 
    target = 312; counter = 0; n1='3'; n2='1'; n3='2';

 
    target = 380; count = 0; last = 0; whiz(target);
	printf(" last=%d\n",last);
	count = 0; 
    target = 380; counter = 0; n1='3'; n2='8'; n3='0';



    target = 328; count = 0; last = 0; whiz(target);
	printf(" last=%d\n",last);
	count = 0; 
    target = 328; counter = 0; n1='3'; n2='2'; n3='8';


    target = 364; count = 0; last = 0; whiz(target);
	printf(" last=%d\n",last);
	count = 0; 
    target = 364; counter = 0; n1='3'; n2='6'; n3='4';


    target = 264; count = 0; last = 0; whiz(target);
	printf(" last=%d\n",last);
	count = 0; 
    target = 264; counter = 0; n1='2'; n2='6'; n3='4';


    target = 428; count = 0; last = 0; whiz(target);
	printf(" last=%d\n",last);
	count = 0; 
    target = 428; counter = 0; n1='4'; n2='2'; n3='8';


    target = 440; count = 0; last = 0; whiz(target);
	printf(" last=%d\n",last);
	count = 0; 
    target = 440; counter = 0; n1='4'; n2='4'; n3='0';


    target = 220; count = 0; last = 0; whiz(target);
	printf(" last=%d\n",last);
	count = 0; 
    target = 220; counter = 0; n1='2'; n2='2'; n3='0';


    target = 510; count = 0; last = 0; whiz(target);
	printf(" last=%d\n",last);
	count = 0; 
    target = 510; counter = 0; n1='5'; n2='1'; n3='0';


    target = 528; count = 0; last = 0; whiz(target);
	printf(" last=%d\n",last);
	count = 0; 
    target = 528; counter = 0; n1='5'; n2='2'; n3='8';


    target = 560; count = 0; last = 0; whiz(target);
	printf(" last=%d\n",last);
	count = 0; 
    target = 560; counter = 0; n1='5'; n2='6'; n3='0';


    target = 118; count = 0; last = 0; whiz(target);
	printf(" last=%d\n",last);
	count = 0; 
    target = 118; counter = 0; n1='1'; n2='1'; n3='8';


    target = 123; count = 0; last = 0; whiz(target);
	printf(" target=%d last=%d\n",target,last);  
	count = 0; 
    target = 123; counter = 0; n1='1'; n2='2'; n3='3';


    target = 236; count = 0; last = 0; whiz(target);
	printf(" target=%d last=%d\n",target,last);  
	count = 0; 
    target = 236; counter = 0; n1='2'; n2='3'; n3='6';



    target = 346; count = 0; last = 0; whiz(target);
	printf(" last=%d\n",last); 
	count = 0; 
    target = 346; counter = 0; n1='3'; n2='4'; n3='6';

    target = 110; count = 0; last = 0; whiz(target);
	printf(" target=%d last=%d\n",target,last);  
	count = 0; 
    target = 110; counter = 0; n1='1'; n2='1'; n3='0';


    target = 107; count = 0; last = 0; whiz(target);
	printf(" target=%d last=%d\n",target,last);  
	count = 0; 
    target = 107; counter = 0; n1='1'; n2='0'; n3='7';


    target = 173; count = 0; last = 0; whiz(target);
	printf(" last=%d\n",last); 
	count = 0; 
    target = 173; counter = 0; n1='1'; n2='7'; n3='3';

 
    target = 280; count = 0; last = 0; whiz(target);
	printf(" target=%d last=%d\n",target,last);  
	count = 0; 
    target = 280; counter = 0; n1='2'; n2='8'; n3='0';


 
    target = 453; count = 0; last = 0; whiz(target);
	printf(" last=%d\n",last); 
	count = 0; 
    target = 453; counter = 0; n1='4'; n2='5'; n3='3';

  
    target = 223; count = 0; last = 0; whiz(target);
	printf(" last=%d\n",last); 
	count = 0; 
    target = 223; counter = 0; n1='2'; n2='2'; n3='3';


    target = 194; count = 0; last = 0; whiz(target);
	printf(" last=%d\n",last); 
	count = 0; 
    target = 194; counter = 0; n1='1'; n2='9'; n3='4';

    target = 417; count = 0; last = 0; whiz(target);
	printf(" last=%d\n",last); 
	count = 0; 
    target = 417; counter = 0; n1='4'; n2='1'; n3='7';



    target = 240; count = 0; last = 0; whiz(target);
	printf(" target=%d last=%d\n",target,last);  
	count = 0; 
    target = 240; counter = 0; n1='2'; n2='4'; n3='0';


    target = 177; count = 0; last = 0; whiz(target);
	printf(" target=%d last=%d\n",target,last);  
	count = 0; 
    target = 177; counter = 0; n1='1'; n2='7'; n3='7';

    target = 221; count = 0; last = 0; whiz(target);
	printf(" target=%d last=%d\n",target,last);  
	count = 0; 
    target = 221; counter = 0; n1='2'; n2='2'; n3='1';


    target = 196; count = 0; last = 0; whiz(target);
	printf(" target=%d last=%d\n",target,last);  
	count = 0; 
    target = 196; counter = 0; n1='1'; n2='9'; n3='6';


    target = 168; count = 0; last = 0; whiz(target);
	printf(" target=%d last=%d\n",target,last);  
	count = 0; 
    target = 168; counter = 0; n1='1'; n2='6'; n3='8';


 
    target = 249; count = 0; last = 0; whiz(target);
	printf(" target=%d last=%d\n",target,last);  
	count = 0; 
    target = 249; counter = 0; n1='2'; n2='4'; n3='9';


    target = 278; count = 0; last = 0; whiz(target);
	printf(" target=%d last=%d\n",target,last);  
	count = 0; 
    target = 278; counter = 0; n1='2'; n2='7'; n3='8';


    target = 139; count = 0; last = 0; whiz(target);
	printf(" target=%d last=%d\n",target,last);  
	count = 0; 
    target = 139; counter = 0; n1='1'; n2='3'; n3='9';


  
    target = 296; count = 0; last = 0; whiz(target);
	printf(" target=%d last=%d\n",target,last);  
	count = 0; 
    target = 296; counter = 0; n1='2'; n2='9'; n3='6';

 
    target = 396; count = 0; last = 0; whiz(target);
	printf(" target=%d last=%d\n",target,last);  
	count = 0; 
    target = 396; counter = 0; n1='3'; n2='9'; n3='6';


    target = 148; count = 0; last = 0; whiz(target);
	printf(" target=%d last=%d\n",target,last);  
	count = 0; 
    target = 148; counter = 0; n1='1'; n2='4'; n3='8';

    target = 198; count = 0; last = 0; whiz(target);
	printf(" target=%d last=%d\n",target,last);  
	count = 0; 
    target = 198; counter = 0; n1='1'; n2='9'; n3='8';


    target = 494; count = 0; last = 0; whiz(target);
	printf(" target=%d last=%d\n",target,last);  
	count = 0; 
    target = 494; counter = 0; n1='4'; n2='9'; n3='4';


    target = 544; count = 0; last = 0; whiz(target);
	printf(" target=%d last=%d\n",target,last);  
	count = 0; 
    target = 544; counter = 0; n1='5'; n2='4'; n3='4';
 
/*
    target = 692; count = 0; last = 0; whiz(target);
	printf(" target=%d last=%d\n",target,last);  
	count = 0; 
    target = 692; counter = 0; n1='6'; n2='9'; n3='2';
*/
}
 
    for ( i1=0; i1<2 ; i1++)
    for ( i2=0; i2<2 ; i2++)
    for ( i3=0; i3<2 ; i3++)
    for ( i4=0; i4<2 ; i4++)
    for ( i5=0; i5<2 ; i5++)
    for ( i6=0; i6<2 ; i6++)
    for ( i7=0; i7<2 ; i7++)
    for ( i8=0; i8<2 ; i8++)
    for ( i9=0; i9<2 ; i9++)
    for ( iA=0; iA<2 ; iA++)
    for ( iB=0; iB<2 ; iB++)
    for ( iC=0; iC<2 ; iC++) {

        total = i1 * 118 +
                i2 *  27 +
                i3 *  87 + 
                i4 *  43 +
                i5 *  84 +
                i6 *  21 +
                i7 *  59 +
                i8 *  30 +
                i9 *  74 +
                iA *  70 +
                iB *  27 +
                iC *  52 ;

        if (total == target) {
            htmlcode(target);

            printf("\n    total = %d    %s\n\n",total,filename);
            
            if (i1 == 1) printf("\t\t 118 \n");
			if (i2 == 1) printf("\t\t  27 \n");
			if (i3 == 1) printf("\t\t  87 \n");
			if (i4 == 1) printf("\t\t  43 \n");

            if (i5 == 1) printf("\t\t  84 \n");                    
            if (i6 == 1) printf("\t\t  21 \n");                    
            if (i7 == 1) printf("\t\t  59 \n");
			if (i8 == 1) printf("\t\t  30 \n");

			if (i9 == 1) printf("\t\t  74 \n");
			if (iA == 1) printf("\t\t  70 \n");
            if (iB == 1) printf("\t\t  27 \n");            
            if (iC == 1) printf("\t\t  52 \n");


            if (i1 == 1) fprintf(fp,"\t\t 118 \n");
			if (i2 == 1) fprintf(fp,"\t\t  27 \n");
			if (i3 == 1) fprintf(fp,"\t\t  87 \n");
			if (i4 == 1) fprintf(fp,"\t\t  43 \n");

            if (i5 == 1) fprintf(fp,"\t\t  84 \n");                
            if (i6 == 1) fprintf(fp,"\t\t  21 \n");                
            if (i7 == 1) fprintf(fp,"\t\t  59 \n");
			if (i8 == 1) fprintf(fp,"\t\t  30 \n");

			if (i9 == 1) fprintf(fp,"\t\t  74 \n");
			if (iA == 1) fprintf(fp,"\t\t  70 \n");
            if (iB == 1) fprintf(fp,"\t\t  27 \n");            
            if (iC == 1) fprintf(fp,"\t\t  52 \n");

            count++;
        }
    }

}
void whiz(int appr){
 
    for ( i1=0; i1<2 ; i1++)
    for ( i2=0; i2<2 ; i2++)
    for ( i3=0; i3<2 ; i3++)
    for ( i4=0; i4<2 ; i4++)
    for ( i5=0; i5<2 ; i5++)
    for ( i6=0; i6<2 ; i6++)
    for ( i7=0; i7<2 ; i7++)
    for ( i8=0; i8<2 ; i8++)
    for ( i9=0; i9<2 ; i9++)
    for ( iA=0; iA<2 ; iA++)
    for ( iB=0; iB<2 ; iB++)
    for ( iC=0; iC<2 ; iC++) {

        total = i1 * 118 +
                i2 *  27 +
                i3 *  87 + 
                i4 *  43 +
                i5 *  84 +
                i6 *  21 +
                i7 *  59 +
                i8 *  30 +
                i9 *  74 +
                iA *  70 +
                iB *  27 +
                iC *  52 ;

        if (total == target) count++;
	}
	last = count - 1;
}
void htmlcode(int appr){

    printf("\n entering htmlcode=%d \n",appr);
 
	filename[6] = n1; filename[7] = n2; filename[8] = n3;
	filename[9] = next[counter];
	counter++;

	for (i=0; i<10; i++) linkname[i] = filename[i];
	linkname[9] = next[counter];
	if (last == 0) filename[9] = 'a';
	if (last == count) linkname[9] = 'a';
	filename[10] = '.';
	filename[11] = 'h';
	filename[12] = 't';
	filename[13] = 'm';
	filename[14] = 'l';
	filename[15] = '\0';


    fp = fopen(filename,"w"); 
    printf(" fp=%d\n",fp); 

	printf("\n>");
	for (i=0; i<15; i++) printf("%c",filename[i]);  
	printf("<\n");

	
    head(); heading();

/*
    fprintf(fp,"\n\n ************ %d=%d ************\n",
                    target,count);

            if (i1 == 1) fprintf(fp,"\t\t 118 \n");
			if (i2 == 1) fprintf(fp,"\t\t  27 \n");
			if (i3 == 1) fprintf(fp,"\t\t  87 \n");
			if (i4 == 1) fprintf(fp,"\t\t  43 \n");

            if (i5 == 1) fprintf(fp,"\t\t  84 \n");                
            if (i6 == 1) fprintf(fp,"\t\t  21 \n");                
            if (i7 == 1) fprintf(fp,"\t\t  59 \n");
			if (i8 == 1) fprintf(fp,"\t\t  30 \n");

			if (i9 == 1) fprintf(fp,"\t\t  74 \n");
			if (iA == 1) fprintf(fp,"\t\t  70 \n");
            if (iB == 1) fprintf(fp,"\t\t  27 \n");            
            if (iC == 1) fprintf(fp,"\t\t  52 \n");
*/

	changed1[0] = '#'; 
	changed2[0] = '#'; 
	changed3[0] = '#'; 
	changed4[0] = '#'; 
	changed5[0] = '#'; 
	changed6[0] = '#'; 
	changed7[0] = '#'; 
	changed8[0] = '#'; 
	changed9[0] = '#'; 
	changedA[0] = '#'; 
	changedB[0] = '#'; 
	changedC[0] = '#'; 
	for (i=1; i<7; i++) {
		changed1[i] = '0'; 
		changed2[i] = '0'; 
		changed3[i] = '0'; 
		changed4[i] = '0'; 
		changed5[i] = '0'; 
		changed6[i] = '0'; 
		changed7[i] = '0'; 
		changed8[i] = '0'; 
		changed9[i] = '0'; 
		changedA[i] = '0'; 
		changedB[i] = '0'; 
		changedC[i] = '0'; 
	}

	if (i1 == 1) { 
		changed1[0] ='#'; changed1[1] ='F'; changed1[2] ='F';
		changed1[3] ='0'; changed1[4] ='0'; changed1[5] ='0';
		changed1[6] ='0'; changed1[7] = '\0';
	}
	if (i2 == 1) { 
		changed2[0] ='#'; changed2[1] ='F'; changed2[2] ='F';
		changed2[3] ='0'; changed2[4] ='0'; changed2[5] ='0';
		changed2[6] ='0'; changed2[7] = '\0';
	}
	if (i3 == 1) { 
		changed3[0] ='#'; changed3[1] ='F'; changed3[2] ='F';
		changed3[3] ='0'; changed3[4] ='0'; changed3[5] ='0';
		changed3[6] ='0'; changed3[7] = '\0';
	}
	if (i4 == 1) { 
		changed4[0] ='#'; changed4[1] ='F'; changed4[2] ='F';
		changed4[3] ='0'; changed4[4] ='0'; changed4[5] ='0';
		changed4[6] ='0'; changed4[7] = '\0';
	}
	if (i5 == 1) { 
		changed5[0] ='#'; changed5[1] ='F'; changed5[2] ='F';
		changed5[3] ='0'; changed5[4] ='0'; changed5[5] ='0';
		changed5[6] ='0'; changed5[7] = '\0';
	}
	if (i6 == 1) { 
		changed6[0] ='#'; changed6[1] ='F'; changed6[2] ='F';
		changed6[3] ='0'; changed6[4] ='0'; changed6[5] ='0';
		changed6[6] ='0'; changed6[7] = '\0';
	}
	if (i7 == 1) { 
		changed7[0] ='#'; changed7[1] ='F'; changed7[2] ='F';
		changed7[3] ='0'; changed7[4] ='0'; changed7[5] ='0';
		changed7[6] ='0'; changed7[7] = '\0';
	}
	if (i8 == 1) { 
		changed8[0] ='#'; changed8[1] ='F'; changed8[2] ='F';
		changed8[3] ='0'; changed8[4] ='0'; changed8[5] ='0';
		changed8[6] ='0'; changed8[7] = '\0';
	}
	if (i9 == 1) { 
		changed9[0] ='#'; changed9[1] ='F'; changed9[2] ='F';
		changed9[3] ='0'; changed9[4] ='0'; changed9[5] ='0';
		changed9[6] ='0'; changed9[7] = '\0';
	}
	if (iA == 1) { 
		changedA[0] ='#'; changedA[1] ='F'; changedA[2] ='F';
		changedA[3] ='0'; changedA[4] ='0'; changedA[5] ='0';
		changedA[6] ='0'; changedA[7] = '\0';
	}
	if (iB == 1) { 
		changedB[0] ='#'; changedB[1] ='F'; changedB[2] ='F';
		changedB[3] ='0'; changedB[4] ='0'; changedB[5] ='0';
		changedB[6] ='0'; changedB[7] = '\0';
	}
	if (iC == 1) { 
		changedC[0] ='#'; changedC[1] ='F'; changedC[2] ='F';
		changedC[3] ='0'; changedC[4] ='0'; changedC[5] ='0';
		changedC[6] ='0'; changedC[7] = '\0';
	}

/*
	printf("color: >%d<>",changed1[3]);
	for (i=0; i<7; i++)
		printf("%c",changed1[i]);
	printf("<end>"); exit(0);
*/
	
	paragraph(),span1(),span2(),span3();tail();

    trailer();

    fclose(fp);
}
void head(){

	fprintf(fp,"<!DOCTYPE html>\n");
	fprintf(fp,"<html>\n");
	fprintf(fp,"<head>\n");
	fprintf(fp,"<meta name="); fprintf(fp,"%c",DQUOTE);
	fprintf(fp,"viewport"); fprintf(fp,"%c ",DQUOTE);
	fprintf(fp,"content="); fprintf(fp,"%c",DQUOTE);
	fprintf(fp,"width=device-width, ");
	fprintf(fp,"initial-scale=1"); fprintf(fp,"%c ",DQUOTE);
	fprintf(fp,"charset="); fprintf(fp,"%c",DQUOTE);
	fprintf(fp,"utf-8"); fprintf(fp,"%c>\n",DQUOTE);
	fprintf(fp,"<body>\n\n");

/*
<!DOCTYPE html>
<html>

<head>

<meta name="viewport" content="width=device-width, initial-scale=1" charset="utf-8">

</head>
<body>
*/

}
void heading(){

	fprintf(fp,"<h1 style="); fprintf(fp,"%c",DQUOTE);
	fprintf(fp,"font-size: 3vw;");
	fprintf(fp,"font-weight: bold;");
	fprintf(fp,"font-family: courier, monospace;");
	fprintf(fp,"text-align: center;"); fprintf(fp,"%c>",DQUOTE);
	fprintf(fp,"<span style="); fprintf(fp,"%c",DQUOTE);
	fprintf(fp,"color: #FF0000;"); fprintf(fp,"%c>",DQUOTE);

	/* fprintf(fp,"###"); */ fprintf(fp,"%c%c%c",n1,n2,n3);

	fprintf(fp,"</span>&nbsp;");
	fprintf(fp,"<span style="); fprintf(fp,"%c",DQUOTE);
	fprintf(fp,"color: #000080;"); fprintf(fp,"%c>",DQUOTE);
	fprintf(fp,"three-x-four");
	fprintf(fp,"</span>&nbsp;");
	fprintf(fp,"<a href="); fprintf(fp,"%c",DQUOTE);
/*	
	printf("\n");
    for (i=0; i<15; i++)  
        printf(">%c< last=%d count=%d",linkname[i],last,count);
    printf("\n");    

	fprintf(fp,"link.html"); 
*/
	for (i=0; i<10; i++) fprintf(fp,"%c",linkname[i]);
	fprintf(fp,".html");
	
	fprintf(fp,"%c ",DQUOTE);
	fprintf(fp,"style="); fprintf(fp,"%c",DQUOTE);
	fprintf(fp,"text-decoration: none;");
	fprintf(fp,"color: #000000;"); fprintf(fp,"%c>",DQUOTE);
	fprintf(fp,"&raquo;");
	fprintf(fp,"</a><br><br>\n\n");


/*
<h1 style="font-size: 3vw;font-weight: bold;font-family: courier, monospace;text-align: center;"><span style="color: #FF0000;">###</span>&nbsp;<span style="color: #000080;">three-x-four</span>&nbsp;<a href="link.html" style="text-decoration: none;color: #000000;">&raquo;</a><br><br>
*/

}
void paragraph(){

	fprintf(fp,"<p style="); fprintf(fp,"%c",DQUOTE);
	fprintf(fp,"line-height: 120%;");
	fprintf(fp,"font-weight: bold;");
	fprintf(fp,"font-size: 3vw;");
	fprintf(fp,"font-family: courier, monospace;");
	fprintf(fp,"text-align: center;"); fprintf(fp,"%c>",DQUOTE);
	fprintf(fp,"\n\n");
/*

	fprintf(fp,"");
	fprintf(fp,"");

<p style="line-height: 120%;font-weight: bold;font-size: 3vw;font-family: courier, monospace;text-align: center;">
*/

}
void span1(){ 

	fprintf(fp,"<span style="); fprintf(fp,"%c",DQUOTE);
	fprintf(fp,"color: "); 
	for (i=0; i<7; i++)
		fprintf(fp,"%c",changed1[i]);
	fprintf(fp,";");
	fprintf(fp,"%c>",DQUOTE);
	fprintf(fp,"118");
	fprintf(fp,"</span>&nbsp;&nbsp;");
	fprintf(fp,"<span style="); fprintf(fp,"%c",DQUOTE);
	fprintf(fp,"color: "); 
	for (i=0; i<7; i++)
		fprintf(fp,"%c",changed2[i]);
	fprintf(fp,";"); 
	fprintf(fp,"%c>",DQUOTE);
	fprintf(fp,"&nbsp;27");
	fprintf(fp,"</span>&nbsp;&nbsp;");
	fprintf(fp,"<span style="); fprintf(fp,"%c",DQUOTE);
	fprintf(fp,"color: "); 
	for (i=0; i<7; i++)
		fprintf(fp,"%c",changed3[i]);
	fprintf(fp,";");	
	fprintf(fp,"%c>",DQUOTE);
	fprintf(fp,"&nbsp;87");
	fprintf(fp,"</span>&nbsp;&nbsp;");
	fprintf(fp,"<span style="); fprintf(fp,"%c",DQUOTE);
	fprintf(fp,"color: "); 
	for (i=0; i<7; i++)
		fprintf(fp,"%c",changed4[i]);
	fprintf(fp,";");	
 	fprintf(fp,"%c>",DQUOTE);
	fprintf(fp,"&nbsp;43");
	fprintf(fp,"</span>");
	fprintf(fp,"<br><br>\n\n");


/*
	fprintf(fp,"");
	fprintf(fp,"");
	fprintf(fp,"");
	fprintf(fp,"");

	<span style="color: #000000;">118</span>&nbsp;&nbsp;<span style="color: #000000;">&nbsp;27</span>&nbsp;&nbsp;<span style="color: #000000;">&nbsp;87</span>&nbsp;&nbsp;<span style="color: #000000;">&nbsp;43</span><br><br>
*/

}
void span2(){

	fprintf(fp,"<span style="); fprintf(fp,"%c",DQUOTE);
	fprintf(fp,"color: "); 
	for (i=0; i<7; i++)
		fprintf(fp,"%c",changed5[i]);
	fprintf(fp,";");
 	fprintf(fp,"%c>",DQUOTE);
	fprintf(fp,"&nbsp;84");
	fprintf(fp,"</span>&nbsp;&nbsp;");
	fprintf(fp,"<span style="); fprintf(fp,"%c",DQUOTE);
	fprintf(fp,"color: "); 
	for (i=0; i<7; i++)
		fprintf(fp,"%c",changed6[i]);
	fprintf(fp,";");
 	fprintf(fp,"%c>",DQUOTE);
	fprintf(fp,"&nbsp;21");
	fprintf(fp,"</span>&nbsp;&nbsp;");
	fprintf(fp,"<span style="); fprintf(fp,"%c",DQUOTE);
	fprintf(fp,"color: "); 
	for (i=0; i<7; i++)
		fprintf(fp,"%c",changed7[i]);
	fprintf(fp,";");
	fprintf(fp,"%c>",DQUOTE);
	fprintf(fp,"&nbsp;59");
	fprintf(fp,"</span>&nbsp;&nbsp;");
	fprintf(fp,"<span style="); fprintf(fp,"%c",DQUOTE);
	fprintf(fp,"color: "); 
	for (i=0; i<7; i++)
		fprintf(fp,"%c",changed8[i]);
	fprintf(fp,";");
	fprintf(fp,"%c>",DQUOTE);
	fprintf(fp,"&nbsp;30");
	fprintf(fp,"</span>");
	fprintf(fp,"<br><br>\n\n");

/*
<span style="color: #000000;">&nbsp;84</span>&nbsp;&nbsp;<span style="color: #000000;">&nbsp;21</span>&nbsp;&nbsp;<span style="color: #000000;">&nbsp;59</span>&nbsp;&nbsp;<span style="color: #000000;">&nbsp;30</span><br><br>
*/

}
void span3(){

	fprintf(fp,"<span style="); fprintf(fp,"%c",DQUOTE);
	fprintf(fp,"color: "); 
	for (i=0; i<7; i++)
		fprintf(fp,"%c",changed9[i]);
	fprintf(fp,";");
	fprintf(fp,"%c>",DQUOTE);
	fprintf(fp,"&nbsp;74");
	fprintf(fp,"</span>&nbsp;&nbsp;");
	fprintf(fp,"<span style="); fprintf(fp,"%c",DQUOTE);
	fprintf(fp,"color: "); 
	for (i=0; i<7; i++)
		fprintf(fp,"%c",changedA[i]);
	fprintf(fp,";");
	fprintf(fp,"%c>",DQUOTE);
	fprintf(fp,"&nbsp;70");
	fprintf(fp,"</span>&nbsp;&nbsp;");
	fprintf(fp,"<span style="); fprintf(fp,"%c",DQUOTE);
	fprintf(fp,"color: "); 
	for (i=0; i<7; i++)
		fprintf(fp,"%c",changedB[i]);
	fprintf(fp,";");
	fprintf(fp,"%c>",DQUOTE);
	fprintf(fp,"&nbsp;27");
	fprintf(fp,"</span>&nbsp;&nbsp;");
	fprintf(fp,"<span style="); fprintf(fp,"%c",DQUOTE);
	fprintf(fp,"color: "); 
	for (i=0; i<7; i++)
		fprintf(fp,"%c",changedC[i]);
	fprintf(fp,";");
	fprintf(fp,"%c>",DQUOTE);
	fprintf(fp,"&nbsp;52");
	fprintf(fp,"</span>");
	fprintf(fp,"<br><br><br>\n\n");

/*

<span style="color: #000000;">&nbsp;74</span>&nbsp;&nbsp;<span style="color: #000000;">&nbsp;70</span>&nbsp;&nbsp;<span style="color: #000000;">&nbsp;27</span>&nbsp;&nbsp;<span style="color: #000000;">&nbsp;52</span>

*/

}
void tail(){

/* <span style="font-size: 2.25vw;"> */

fprintf(fp,"<span style="); fprintf(fp,"%c",DQUOTE);
fprintf(fp,"font-size: 2.25vw;"); fprintf(fp,"%c>",DQUOTE);


/**********************************************/
/*
<a href="output132a.html" style="text-decoration: none;color: #000080;">132</a>&nbsp;
*/
fprintf(fp,"<a href="); fprintf(fp,"%c",DQUOTE);
fprintf(fp,"output132a.html"); fprintf(fp,"%c ",DQUOTE);
fprintf(fp,"style="); fprintf(fp,"%c",DQUOTE);
fprintf(fp,"text-decoration: none;");

if (target == 132) 	fprintf(fp,"color: #FF0000;"); 
else  				fprintf(fp,"color: #000080;");

fprintf(fp,"%c>",DQUOTE);
fprintf(fp,"132</a>&nbsp;");


/*
<a href="output164a.html" style="text-decoration: none;color: #000080;">164</a>&nbsp;
*/
fprintf(fp,"<a href="); fprintf(fp,"%c",DQUOTE);
fprintf(fp,"output164a.html"); fprintf(fp,"%c ",DQUOTE);
fprintf(fp,"style="); fprintf(fp,"%c",DQUOTE);
fprintf(fp,"text-decoration: none;");

if (target == 164) 	fprintf(fp,"color: #FF0000;"); 
else  				fprintf(fp,"color: #000080;");

fprintf(fp,"%c>",DQUOTE);
fprintf(fp,"164</a>&nbsp;");
/*
<a href="output182a.html" style="text-decoration: none;color: #000080;">182</a>&nbsp;
*/
fprintf(fp,"<a href="); fprintf(fp,"%c",DQUOTE);
fprintf(fp,"output182a.html"); fprintf(fp,"%c ",DQUOTE);
fprintf(fp,"style="); fprintf(fp,"%c",DQUOTE);
fprintf(fp,"text-decoration: none;");

if (target == 182) 	fprintf(fp,"color: #FF0000;"); 
else  				fprintf(fp,"color: #000080;");

fprintf(fp,"%c>",DQUOTE);
fprintf(fp,"182</a>&nbsp;");
/*
<a href="output214a.html" style="text-decoration: none;color: #000080;">214</a>&nbsp;
*/
fprintf(fp,"<a href="); fprintf(fp,"%c",DQUOTE);
fprintf(fp,"output214a.html"); fprintf(fp,"%c ",DQUOTE);
fprintf(fp,"style="); fprintf(fp,"%c",DQUOTE);
fprintf(fp,"text-decoration: none;");

if (target == 214) 	fprintf(fp,"color: #FF0000;"); 
else  				fprintf(fp,"color: #000080;");

fprintf(fp,"%c>",DQUOTE);
fprintf(fp,"214</a>&nbsp;");
/*
<a href="output312a.html" style="text-decoration: none;color: #000080;">312</a>&nbsp;
*/
fprintf(fp,"<a href="); fprintf(fp,"%c",DQUOTE);
fprintf(fp,"output312a.html"); fprintf(fp,"%c ",DQUOTE);
fprintf(fp,"style="); fprintf(fp,"%c",DQUOTE);
fprintf(fp,"text-decoration: none;");

if (target == 312) 	fprintf(fp,"color: #FF0000;"); 
else  				fprintf(fp,"color: #000080;");

fprintf(fp,"%c>",DQUOTE);
fprintf(fp,"312</a>&nbsp;");
/*
<a href="output380a.html" style="text-decoration: none;color: #000080;">380</a>&nbsp;
*/
fprintf(fp,"<a href="); fprintf(fp,"%c",DQUOTE);
fprintf(fp,"output380a.html"); fprintf(fp,"%c ",DQUOTE);
fprintf(fp,"style="); fprintf(fp,"%c",DQUOTE);
fprintf(fp,"text-decoration: none;");

if (target == 380) 	fprintf(fp,"color: #FF0000;"); 
else  				fprintf(fp,"color: #000080;");

fprintf(fp,"%c>",DQUOTE);
fprintf(fp,"380</a>&nbsp;");
/*
<a href="output328a.html" style="text-decoration: none;color: #000080;">328</a>&nbsp;
*/
fprintf(fp,"<a href="); fprintf(fp,"%c",DQUOTE);
fprintf(fp,"output328a.html"); fprintf(fp,"%c ",DQUOTE);
fprintf(fp,"style="); fprintf(fp,"%c",DQUOTE);
fprintf(fp,"text-decoration: none;");

if (target == 328) 	fprintf(fp,"color: #FF0000;"); 
else  				fprintf(fp,"color: #000080;");

fprintf(fp,"%c>",DQUOTE);
fprintf(fp,"328</a>&nbsp;");
/*
<a href="output364a.html" style="text-decoration: none;color: #000080;">364</a>&nbsp;
*/
fprintf(fp,"<a href="); fprintf(fp,"%c",DQUOTE);
fprintf(fp,"output364a.html"); fprintf(fp,"%c ",DQUOTE);
fprintf(fp,"style="); fprintf(fp,"%c",DQUOTE);
fprintf(fp,"text-decoration: none;");

if (target == 364) 	fprintf(fp,"color: #FF0000;"); 
else  				fprintf(fp,"color: #000080;");

fprintf(fp,"%c>",DQUOTE);
fprintf(fp,"364</a>&nbsp;");
/*
<a href="output264a.html" style="text-decoration: none;color: #000080;">264</a>&nbsp;
*/
fprintf(fp,"<a href="); fprintf(fp,"%c",DQUOTE);
fprintf(fp,"output264a.html"); fprintf(fp,"%c ",DQUOTE);
fprintf(fp,"style="); fprintf(fp,"%c",DQUOTE);
fprintf(fp,"text-decoration: none;");

if (target == 264) 	fprintf(fp,"color: #FF0000;"); 
else  				fprintf(fp,"color: #000080;");

fprintf(fp,"%c>",DQUOTE);
fprintf(fp,"264</a>&nbsp;");
/*
<a href="output428a.html" style="text-decoration: none;color: #000080;">428</a>&nbsp;
*/
fprintf(fp,"<a href="); fprintf(fp,"%c",DQUOTE);
fprintf(fp,"output428a.html"); fprintf(fp,"%c ",DQUOTE);
fprintf(fp,"style="); fprintf(fp,"%c",DQUOTE);
fprintf(fp,"text-decoration: none;");

if (target == 428) 	fprintf(fp,"color: #FF0000;"); 
else  				fprintf(fp,"color: #000080;");

fprintf(fp,"%c>",DQUOTE);
fprintf(fp,"428</a>&nbsp;");
/*
<a href="output440a.html" style="text-decoration: none;color: #000080;">440</a>&nbsp;
*/
fprintf(fp,"<a href="); fprintf(fp,"%c",DQUOTE);
fprintf(fp,"output440a.html"); fprintf(fp,"%c ",DQUOTE);
fprintf(fp,"style="); fprintf(fp,"%c",DQUOTE);
fprintf(fp,"text-decoration: none;");

if (target == 440) 	fprintf(fp,"color: #FF0000;"); 
else  				fprintf(fp,"color: #000080;");

fprintf(fp,"%c>",DQUOTE);
fprintf(fp,"440</a>&nbsp;");
/*
<a href="output220a.html" style="text-decoration: none;color: #000080;">220</a>&nbsp;
*/
fprintf(fp,"<a href="); fprintf(fp,"%c",DQUOTE);
fprintf(fp,"output220a.html"); fprintf(fp,"%c ",DQUOTE);
fprintf(fp,"style="); fprintf(fp,"%c",DQUOTE);
fprintf(fp,"text-decoration: none;");

if (target == 220) 	fprintf(fp,"color: #FF0000;"); 
else  				fprintf(fp,"color: #000080;");

fprintf(fp,"%c>",DQUOTE);
fprintf(fp,"220</a>&nbsp;");
/*
<a href="output510a.html" style="text-decoration: none;color: #000080;">510</a>&nbsp;
*/
fprintf(fp,"<a href="); fprintf(fp,"%c",DQUOTE);
fprintf(fp,"output510a.html"); fprintf(fp,"%c ",DQUOTE);
fprintf(fp,"style="); fprintf(fp,"%c",DQUOTE);
fprintf(fp,"text-decoration: none;");

if (target == 510) 	fprintf(fp,"color: #FF0000;"); 
else  				fprintf(fp,"color: #000080;");

fprintf(fp,"%c>",DQUOTE);
fprintf(fp,"510</a>&nbsp;");
/*
<a href="output528a.html" style="text-decoration: none;color: #000080;">528</a>&nbsp;
*/
fprintf(fp,"<a href="); fprintf(fp,"%c",DQUOTE);
fprintf(fp,"output528a.html"); fprintf(fp,"%c ",DQUOTE);
fprintf(fp,"style="); fprintf(fp,"%c",DQUOTE);
fprintf(fp,"text-decoration: none;");

if (target == 528) 	fprintf(fp,"color: #FF0000;"); 
else  				fprintf(fp,"color: #000080;");

fprintf(fp,"%c>",DQUOTE);
fprintf(fp,"528</a><br>");

/**********************************************/

/**********************************************/
/*
<a href="output560a.html" style="text-decoration: none;color: #000080;">560</a>&nbsp;
*/
fprintf(fp,"<a href="); fprintf(fp,"%c",DQUOTE);
fprintf(fp,"output560a.html"); fprintf(fp,"%c ",DQUOTE);
fprintf(fp,"style="); fprintf(fp,"%c",DQUOTE);
fprintf(fp,"text-decoration: none;");

if (target == 560) 	fprintf(fp,"color: #FF0000;"); 
else  				fprintf(fp,"color: #000080;");

fprintf(fp,"%c>",DQUOTE);
fprintf(fp,"560</a>&nbsp;");
/*
<a href="output118a.html" style="text-decoration: none;color: #000080;">118</a>&nbsp;
*/
fprintf(fp,"<a href="); fprintf(fp,"%c",DQUOTE);
fprintf(fp,"output118a.html"); fprintf(fp,"%c ",DQUOTE);
fprintf(fp,"style="); fprintf(fp,"%c",DQUOTE);
fprintf(fp,"text-decoration: none;");

if (target == 118) 	fprintf(fp,"color: #FF0000;"); 
else  				fprintf(fp,"color: #000080;");

fprintf(fp,"%c>",DQUOTE);
fprintf(fp,"118</a>&nbsp;");
/*
<a href="output123a.html" style="text-decoration: none;color: #000080;">123</a>&nbsp;
*/
fprintf(fp,"<a href="); fprintf(fp,"%c",DQUOTE);
fprintf(fp,"output123a.html"); fprintf(fp,"%c ",DQUOTE);
fprintf(fp,"style="); fprintf(fp,"%c",DQUOTE);
fprintf(fp,"text-decoration: none;");

if (target == 123) 	fprintf(fp,"color: #FF0000;"); 
else  				fprintf(fp,"color: #000080;");

fprintf(fp,"%c>",DQUOTE);
fprintf(fp,"123</a>&nbsp;");
/*
<a href="output236a.html" style="text-decoration: none;color: #000080;">236</a>&nbsp;
*/
fprintf(fp,"<a href="); fprintf(fp,"%c",DQUOTE);
fprintf(fp,"output236a.html"); fprintf(fp,"%c ",DQUOTE);
fprintf(fp,"style="); fprintf(fp,"%c",DQUOTE);
fprintf(fp,"text-decoration: none;");

if (target == 236) 	fprintf(fp,"color: #FF0000;"); 
else  				fprintf(fp,"color: #000080;");

fprintf(fp,"%c>",DQUOTE);
fprintf(fp,"236</a>&nbsp;");
/*
<a href="output346a.html" style="text-decoration: none;color: #000080;">346</a>&nbsp;
*/
fprintf(fp,"<a href="); fprintf(fp,"%c",DQUOTE);
fprintf(fp,"output346a.html"); fprintf(fp,"%c ",DQUOTE);
fprintf(fp,"style="); fprintf(fp,"%c",DQUOTE);
fprintf(fp,"text-decoration: none;");

if (target == 346) 	fprintf(fp,"color: #FF0000;"); 
else  				fprintf(fp,"color: #000080;");

fprintf(fp,"%c>",DQUOTE);
fprintf(fp,"346</a>&nbsp;");
/*
<a href="output110a.html" style="text-decoration: none;color: #000080;">110</a>&nbsp;
*/
fprintf(fp,"<a href="); fprintf(fp,"%c",DQUOTE);
fprintf(fp,"output110a.html"); fprintf(fp,"%c ",DQUOTE);
fprintf(fp,"style="); fprintf(fp,"%c",DQUOTE);
fprintf(fp,"text-decoration: none;");

if (target == 110) 	fprintf(fp,"color: #FF0000;"); 
else  				fprintf(fp,"color: #000080;");

fprintf(fp,"%c>",DQUOTE);
fprintf(fp,"110</a>&nbsp;");
/*
<a href="output107a.html" style="text-decoration: none;color: #000080;">107</a>&nbsp;
*/
fprintf(fp,"<a href="); fprintf(fp,"%c",DQUOTE);
fprintf(fp,"output107a.html"); fprintf(fp,"%c ",DQUOTE);
fprintf(fp,"style="); fprintf(fp,"%c",DQUOTE);
fprintf(fp,"text-decoration: none;");

if (target == 107) 	fprintf(fp,"color: #FF0000;"); 
else  				fprintf(fp,"color: #000080;");

fprintf(fp,"%c>",DQUOTE);
fprintf(fp,"107</a>&nbsp;");
/*
<a href="output173a.html" style="text-decoration: none;color: #000080;">173</a>&nbsp;
*/
fprintf(fp,"<a href="); fprintf(fp,"%c",DQUOTE);
fprintf(fp,"output173a.html"); fprintf(fp,"%c ",DQUOTE);
fprintf(fp,"style="); fprintf(fp,"%c",DQUOTE);
fprintf(fp,"text-decoration: none;");

if (target == 173) 	fprintf(fp,"color: #FF0000;"); 
else  				fprintf(fp,"color: #000080;");

fprintf(fp,"%c>",DQUOTE);
fprintf(fp,"173</a>&nbsp;");
/*
<a href="output280a.html" style="text-decoration: none;color: #000080;">280</a>&nbsp;
*/
fprintf(fp,"<a href="); fprintf(fp,"%c",DQUOTE);
fprintf(fp,"output280a.html"); fprintf(fp,"%c ",DQUOTE);
fprintf(fp,"style="); fprintf(fp,"%c",DQUOTE);
fprintf(fp,"text-decoration: none;");

if (target == 280) 	fprintf(fp,"color: #FF0000;"); 
else  				fprintf(fp,"color: #000080;");

fprintf(fp,"%c>",DQUOTE);
fprintf(fp,"280</a>&nbsp;");
/*
<a href="output453a.html" style="text-decoration: none;color: #000080;">453</a>&nbsp;
*/
fprintf(fp,"<a href="); fprintf(fp,"%c",DQUOTE);
fprintf(fp,"output453a.html"); fprintf(fp,"%c ",DQUOTE);
fprintf(fp,"style="); fprintf(fp,"%c",DQUOTE);
fprintf(fp,"text-decoration: none;");

if (target == 453) 	fprintf(fp,"color: #FF0000;"); 
else  				fprintf(fp,"color: #000080;");

fprintf(fp,"%c>",DQUOTE);
fprintf(fp,"453</a>&nbsp;");
/*
<a href="output223a.html" style="text-decoration: none;color: #000080;">223</a>&nbsp;
*/
fprintf(fp,"<a href="); fprintf(fp,"%c",DQUOTE);
fprintf(fp,"output223a.html"); fprintf(fp,"%c ",DQUOTE);
fprintf(fp,"style="); fprintf(fp,"%c",DQUOTE);
fprintf(fp,"text-decoration: none;");

if (target == 223) 	fprintf(fp,"color: #FF0000;"); 
else  				fprintf(fp,"color: #000080;");

fprintf(fp,"%c>",DQUOTE);
fprintf(fp,"223</a>&nbsp;");
/*
<a href="output194a.html" style="text-decoration: none;color: #000080;">194</a>&nbsp;
*/
fprintf(fp,"<a href="); fprintf(fp,"%c",DQUOTE);
fprintf(fp,"output194a.html"); fprintf(fp,"%c ",DQUOTE);
fprintf(fp,"style="); fprintf(fp,"%c",DQUOTE);
fprintf(fp,"text-decoration: none;");

if (target == 194) 	fprintf(fp,"color: #FF0000;"); 
else  				fprintf(fp,"color: #000080;");

fprintf(fp,"%c>",DQUOTE);
fprintf(fp,"194</a>&nbsp;");
/*
<a href="output417a.html" style="text-decoration: none;color: #000080;">417</a>&nbsp;
*/
fprintf(fp,"<a href="); fprintf(fp,"%c",DQUOTE);
fprintf(fp,"output417a.html"); fprintf(fp,"%c ",DQUOTE);
fprintf(fp,"style="); fprintf(fp,"%c",DQUOTE);
fprintf(fp,"text-decoration: none;");

if (target == 417) 	fprintf(fp,"color: #FF0000;"); 
else  				fprintf(fp,"color: #000080;");

fprintf(fp,"%c>",DQUOTE);
fprintf(fp,"417</a>&nbsp;");
/*
<a href="output240a.html" style="text-decoration: none;color: #000080;">240</a>&nbsp;
*/
fprintf(fp,"<a href="); fprintf(fp,"%c",DQUOTE);
fprintf(fp,"output240a.html"); fprintf(fp,"%c ",DQUOTE);
fprintf(fp,"style="); fprintf(fp,"%c",DQUOTE);
fprintf(fp,"text-decoration: none;");

if (target == 240) 	fprintf(fp,"color: #FF0000;"); 
else  				fprintf(fp,"color: #000080;");

fprintf(fp,"%c>",DQUOTE);
fprintf(fp,"240</a><br>");

/**********************************************/
/**********************************************/
/*
<a href="output177a.html" style="text-decoration: none;color: #000080;">177</a>&nbsp;
*/
fprintf(fp,"<a href="); fprintf(fp,"%c",DQUOTE);
fprintf(fp,"output177a.html"); fprintf(fp,"%c ",DQUOTE);
fprintf(fp,"style="); fprintf(fp,"%c",DQUOTE);
fprintf(fp,"text-decoration: none;");

if (target == 177) 	fprintf(fp,"color: #FF0000;"); 
else  				fprintf(fp,"color: #000080;");

fprintf(fp,"%c>",DQUOTE);
fprintf(fp,"177</a>&nbsp;");
/*
<a href="output221a.html" style="text-decoration: none;color: #000080;">221</a>&nbsp;
*/
fprintf(fp,"<a href="); fprintf(fp,"%c",DQUOTE);
fprintf(fp,"output221a.html"); fprintf(fp,"%c ",DQUOTE);
fprintf(fp,"style="); fprintf(fp,"%c",DQUOTE);
fprintf(fp,"text-decoration: none;");

if (target == 221) 	fprintf(fp,"color: #FF0000;"); 
else  				fprintf(fp,"color: #000080;");

fprintf(fp,"%c>",DQUOTE);
fprintf(fp,"221</a>&nbsp;");
/*
<a href="output196a.html" style="text-decoration: none;color: #000080;">196</a>&nbsp;
*/
fprintf(fp,"<a href="); fprintf(fp,"%c",DQUOTE);
fprintf(fp,"output196a.html"); fprintf(fp,"%c ",DQUOTE);
fprintf(fp,"style="); fprintf(fp,"%c",DQUOTE);
fprintf(fp,"text-decoration: none;");

if (target == 196) 	fprintf(fp,"color: #FF0000;"); 
else  				fprintf(fp,"color: #000080;");

fprintf(fp,"%c>",DQUOTE);
fprintf(fp,"196</a>&nbsp;");
/*
<a href="output168a.html" style="text-decoration: none;color: #000080;">168</a>&nbsp;
*/
fprintf(fp,"<a href="); fprintf(fp,"%c",DQUOTE);
fprintf(fp,"output168a.html"); fprintf(fp,"%c ",DQUOTE);
fprintf(fp,"style="); fprintf(fp,"%c",DQUOTE);
fprintf(fp,"text-decoration: none;");

if (target == 168) 	fprintf(fp,"color: #FF0000;"); 
else  				fprintf(fp,"color: #000080;");

fprintf(fp,"%c>",DQUOTE);
fprintf(fp,"168</a>&nbsp;");
/*
<a href="output249a.html" style="text-decoration: none;color: #000080;">249</a>&nbsp;
*/
fprintf(fp,"<a href="); fprintf(fp,"%c",DQUOTE);
fprintf(fp,"output249a.html"); fprintf(fp,"%c ",DQUOTE);
fprintf(fp,"style="); fprintf(fp,"%c",DQUOTE);
fprintf(fp,"text-decoration: none;");

if (target == 249) 	fprintf(fp,"color: #FF0000;"); 
else  				fprintf(fp,"color: #000080;");

fprintf(fp,"%c>",DQUOTE);
fprintf(fp,"249</a>&nbsp;");
/*
<a href="output278a.html" style="text-decoration: none;color: #000080;">278</a>&nbsp;
*/
fprintf(fp,"<a href="); fprintf(fp,"%c",DQUOTE);
fprintf(fp,"output278a.html"); fprintf(fp,"%c ",DQUOTE);
fprintf(fp,"style="); fprintf(fp,"%c",DQUOTE);
fprintf(fp,"text-decoration: none;");

if (target == 278) 	fprintf(fp,"color: #FF0000;"); 
else  				fprintf(fp,"color: #000080;");

fprintf(fp,"%c>",DQUOTE);
fprintf(fp,"278</a>&nbsp;");
/*
<a href="output139a.html" style="text-decoration: none;color: #000080;">139</a>&nbsp;
*/
fprintf(fp,"<a href="); fprintf(fp,"%c",DQUOTE);
fprintf(fp,"output139a.html"); fprintf(fp,"%c ",DQUOTE);
fprintf(fp,"style="); fprintf(fp,"%c",DQUOTE);
fprintf(fp,"text-decoration: none;");

if (target == 139) 	fprintf(fp,"color: #FF0000;"); 
else  				fprintf(fp,"color: #000080;");

fprintf(fp,"%c>",DQUOTE);
fprintf(fp,"139</a>&nbsp;");
/*
<a href="output296a.html" style="text-decoration: none;color: #000080;">296</a>&nbsp;
*/
fprintf(fp,"<a href="); fprintf(fp,"%c",DQUOTE);
fprintf(fp,"output296a.html"); fprintf(fp,"%c ",DQUOTE);
fprintf(fp,"style="); fprintf(fp,"%c",DQUOTE);
fprintf(fp,"text-decoration: none;");

if (target == 296) 	fprintf(fp,"color: #FF0000;"); 
else  				fprintf(fp,"color: #000080;");

fprintf(fp,"%c>",DQUOTE);
fprintf(fp,"296</a>&nbsp;");
/*
<a href="output396a.html" style="text-decoration: none;color: #000080;">396</a>&nbsp;
*/
fprintf(fp,"<a href="); fprintf(fp,"%c",DQUOTE);
fprintf(fp,"output396a.html"); fprintf(fp,"%c ",DQUOTE);
fprintf(fp,"style="); fprintf(fp,"%c",DQUOTE);
fprintf(fp,"text-decoration: none;");

if (target == 396) 	fprintf(fp,"color: #FF0000;"); 
else  				fprintf(fp,"color: #000080;");

fprintf(fp,"%c>",DQUOTE);
fprintf(fp,"396</a>&nbsp;");
/*
<a href="output148a.html" style="text-decoration: none;color: #000080;">148</a>&nbsp;
*/
fprintf(fp,"<a href="); fprintf(fp,"%c",DQUOTE);
fprintf(fp,"output148a.html"); fprintf(fp,"%c ",DQUOTE);
fprintf(fp,"style="); fprintf(fp,"%c",DQUOTE);
fprintf(fp,"text-decoration: none;");

if (target == 148) 	fprintf(fp,"color: #FF0000;"); 
else  				fprintf(fp,"color: #000080;");

fprintf(fp,"%c>",DQUOTE);
fprintf(fp,"148</a>&nbsp;");
/*
<a href="output198a.html" style="text-decoration: none;color: #000080;">198</a>&nbsp;
*/
fprintf(fp,"<a href="); fprintf(fp,"%c",DQUOTE);
fprintf(fp,"output198a.html"); fprintf(fp,"%c ",DQUOTE);
fprintf(fp,"style="); fprintf(fp,"%c",DQUOTE);
fprintf(fp,"text-decoration: none;");

if (target == 198) 	fprintf(fp,"color: #FF0000;"); 
else  				fprintf(fp,"color: #000080;");

fprintf(fp,"%c>",DQUOTE);
fprintf(fp,"198</a>&nbsp;");
/*
<a href="output494a.html" style="text-decoration: none;color: #000080;">494</a>&nbsp;
*/
fprintf(fp,"<a href="); fprintf(fp,"%c",DQUOTE);
fprintf(fp,"output494a.html"); fprintf(fp,"%c ",DQUOTE);
fprintf(fp,"style="); fprintf(fp,"%c",DQUOTE);
fprintf(fp,"text-decoration: none;");

if (target == 494) 	fprintf(fp,"color: #FF0000;"); 
else  				fprintf(fp,"color: #000080;");

fprintf(fp,"%c>",DQUOTE);
fprintf(fp,"494</a>&nbsp;");
/*
<a href="output544a.html" style="text-decoration: none;color: #000080;">544</a>&nbsp;
*/
fprintf(fp,"<a href="); fprintf(fp,"%c",DQUOTE);
fprintf(fp,"output544a.html"); fprintf(fp,"%c ",DQUOTE);
fprintf(fp,"style="); fprintf(fp,"%c",DQUOTE);
fprintf(fp,"text-decoration: none;");

if (target == 544) 	fprintf(fp,"color: #FF0000;"); 
else  				fprintf(fp,"color: #000080;");

fprintf(fp,"%c>",DQUOTE);
fprintf(fp,"544</a>&nbsp;");
/*
<a href="output692a.html" style="text-decoration: none;color: #000080;">692</a>&nbsp;
*/
fprintf(fp,"<a href="); fprintf(fp,"%c",DQUOTE);
fprintf(fp,"output692a.html"); fprintf(fp,"%c ",DQUOTE);
fprintf(fp,"style="); fprintf(fp,"%c",DQUOTE);
fprintf(fp,"text-decoration: none;");

if (target == 692) 	fprintf(fp,"color: #FF0000;"); 
else  				fprintf(fp,"color: #000080;");

fprintf(fp,"%c>",DQUOTE);
fprintf(fp,"692</a>");

/**********************************************/


/* </span> */
fprintf(fp,"</span>\n\n");

}
void trailer(){

	fprintf(fp,"<br><br><br>\n");
	fprintf(fp,"</p>\n");
	fprintf(fp,"</body>\n");
	fprintf(fp,"<html>\n");
/*
<br><br><br>

</p>
</body>
</html>
*/

}
void setchar(){

    next[ 0] = 'a'; next[ 1] = 'b'; next[ 2] = 'c'; next[ 3] = 'd';
    next[ 4] = 'e'; next[ 5] = 'f'; next[ 6] = 'g'; next[ 7] = 'h';
    next[ 8] = 'i'; next[ 9] = 'j'; next[10] = 'k'; next[11] = 'l';
    next[12] = 'm'; next[13] = 'n'; next[14] = 'o'; next[15] = 'p';
    next[16] = 'q'; next[17] = 'r'; next[18] = 's'; next[19] = 't';
    next[20] = 'u'; next[21] = 'v'; next[22] = 'w'; next[23] = 'x';
	next[24] = 'y'; next[25] = 'z'; next[26] = 'A'; next[27] = 'B';
	next[28] = 'C'; next[29] = 'D'; next[30] = 'E'; next[31] = 'F';
	next[32] = 'G'; next[33] = 'H'; next[34] = 'I'; next[35] = 'J';
	next[36] = 'K'; next[37] = 'L'; next[38] = 'M'; next[39] = 'N';
	next[40] = 'O'; next[41] = 'P'; next[42] = 'Q'; next[43] = 'R';
	next[44] = 'S'; next[45] = 'T'; next[46] = 'U'; next[47] = 'V';
	next[48] = 'W'; next[49] = 'X'; next[50] = 'Y'; next[51] = 'Z';
	
    printf("\n       in setchar \n");
    printf("\n");
    for (i=0; i<24; i++)
        printf("%c",next[i]);
    printf("\n");    

    filename[0] = 'o';
    filename[1] = 'u';
    filename[2] = 't';
    filename[3] = 'p';
    filename[4] = 'u';
    filename[5] = 't';
    filename[6] = '#';
    filename[7] = '#';
    filename[8] = '#';
    filename[9] = '@';
    filename[10] = '\0';

    printf("\n");
    for (i=0; i<10; i++)
        printf("%c",filename[i]);
    printf("\n");    

    printf("\n");
    printf("%s  all good \n",filename);
    printf("\n");    

}
/*

<!DOCTYPE html>
<html>

<head>

<meta name="viewport" content="width=device-width, initial-scale=1" charset="utf-8">

</head>

<body>

<h1 style="font-size: 3vw;font-weight: bold;font-family: courier, monospace;text-align: center;"><span style="color: #FF0000;">###</span>&nbsp;<span style="color: #000080;">three-x-four</span>&nbsp;<a href="link.html" style="text-decoration: none;color: #000000;">&raquo;</a><br><br>


<p style="line-height: 120%;font-weight: bold;font-size: 3vw;font-family: courier, monospace; text-align: center;">

<span style="color: #000000;">118</span>&nbsp;&nbsp;<span style="color: #000000;">&nbsp;27</span>&nbsp;&nbsp;<span style="color: #000000;">&nbsp;87</span>&nbsp;&nbsp;<span style="color: #000000;">&nbsp;43</span><br><br>

<span style="color: #000000;">&nbsp;84</span>&nbsp;&nbsp;<span style="color: #000000;">&nbsp;21</span>&nbsp;&nbsp;<span style="color: #000000;">&nbsp;59</span>&nbsp;&nbsp;<span style="color: #000000;">&nbsp;30</span><br><br>

<span style="color: #000000;">&nbsp;74</span>&nbsp;&nbsp;<span style="color: #000000;">&nbsp;70</span>&nbsp;&nbsp;<span style="color: #000000;">&nbsp;27</span>&nbsp;&nbsp;<span style="color: #000000;">&nbsp;52</span>
<br><br><br>

</p>
</body>
</html>

*/




/*

<span style="font-size: 2.25vw;">
<a href="output132a.html" style="text-decoration: none;color: #000080;">132</a>&nbsp;<a href="output164a.html" style="text-decoration: none;color: #000080;">164</a>&nbsp;<a href="output182a.html" style="text-decoration: none;color: #000080;">182</a>&nbsp;<a href="output214a.html" style="text-decoration: none;color: #000080;">214</a>&nbsp;<a href="output312a.html" style="text-decoration: none;color: #000080;">312</a>&nbsp;<a href="output380a.html" style="text-decoration: none;color: #000080;">380</a>&nbsp;<a href="output328a.html" style="text-decoration: none;color: #000080;">328</a>&nbsp;<a href="output364a.html" style="text-decoration: none;color: #000080;">364</a>&nbsp;<a href="output264a.html" style="text-decoration: none;color: #000080;">264</a>&nbsp;<a href="output428a.html" style="text-decoration: none;color: #000080;">428</a>&nbsp;<a href="output440a.html" style="text-decoration: none;color: #000080;">440</a>&nbsp;<a href="output220a.html" style="text-decoration: none;color: #000080;">220</a>&nbsp;<a href="output510a.html" style="text-decoration: none;color: #000080;">510</a>&nbsp;<a href="output528a.html" style="text-decoration: none;color: #000080;">528</a><br><a href="output560a.html" style="text-decoration: none;color: #000080;">560</a>&nbsp;<a href="output118a.html" style="text-decoration: none;color: #000080;">118</a>&nbsp;<a href="output123a.html" style="text-decoration: none;color: #000080;">123</a>&nbsp;<a href="output236a.html" style="text-decoration: none;color: #000080;">236</a>&nbsp;<a href="output346a.html" style="text-decoration: none;color: #000080;">346</a>&nbsp;<a href="output110a.html" style="text-decoration: none;color: #000080;">110</a>&nbsp;<a href="output107a.html" style="text-decoration: none;color: #000080;">107</a>&nbsp;<a href="output173a.html" style="text-decoration: none;color: #000080;">173</a>&nbsp;<a href="output280a.html" style="text-decoration: none;color: #000080;">280</a>&nbsp;<a href="output453a.html" style="text-decoration: none;color: #000080;">453</a>&nbsp;<a href="output223a.html" style="text-decoration: none;color: #000080;">223</a>&nbsp;<a href="output194a.html" style="text-decoration: none;color: #000080;">194</a>&nbsp;<a href="output417a.html" style="text-decoration: none;color: #000080;">417</a>&nbsp;<a href="output240a.html" style="text-decoration: none;color: #000080;">240</a><br><a href="output177a.html" style="text-decoration: none;color: #000080;">177</a>&nbsp;<a href="output221a.html" style="text-decoration: none;color: #000080;">221</a>&nbsp;<a href="output196a.html" style="text-decoration: none;color: #000080;">196</a>&nbsp;<a href="output168a.html" style="text-decoration: none;color: #000080;">168</a>&nbsp;<a href="output249a.html" style="text-decoration: none;color: #000080;">249</a>&nbsp;<a href="output278a.html" style="text-decoration: none;color: #000080;">278</a>&nbsp;<a href="output139a.html" style="text-decoration: none;color: #000080;">139</a>&nbsp;<a href="output296a.html" style="text-decoration: none;color: #000080;">296</a>&nbsp;<a href="output396a.html" style="text-decoration: none;color: #000080;">396</a>&nbsp;<a href="output148a.html" style="text-decoration: none;color: #000080;">148</a>&nbsp;<a href="output198a.html" style="text-decoration: none;color: #000080;">198</a>&nbsp;<a href="output494a.html" style="text-decoration: none;color: #000080;">494</a>&nbsp;<a href="output544a.html" style="text-decoration: none;color: #000080;">544</a>&nbsp;<a href="output692a.html" style="text-decoration: none;color: #000080;">692</a>
</span>

*/