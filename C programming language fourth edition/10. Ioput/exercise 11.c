//10-11
//input several strings and restore into a file
//read from this file and output all the lower letter into upper one
#include <stdio.h>
int main()
{ 
        int i;
        char str[20],c;
        FILE *fp;   //define a file pointer fp
        fp=fopen("result","w"); //open and write data in the file named result
        printf("input strings:\n");  //input the strings 
        gets(str);
        fprintf(fp,"%s ",str);  
        c=getchar();    //get all the cahr 
        fclose(fp); //close the file 
        fp=fopen("result","r"); 
        while(fscanf(fp,"%s",str)!=EOF) //for all the char has been got
        {
            	for (i=0;str[i]!='\0';i++)  //if the char is not the end, continue
	            if ((str[i]>='a') && (str[i]<='z')) //if the char is lower letter
	                str[i]= str[i] - 32;    //translate the letter into upper one 
            	printf("%s\n",str); //output the new string 
        }	//end while
        fclose(fp); //close the file
        return 0;
}	//end main()
