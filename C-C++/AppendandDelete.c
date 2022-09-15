#include<stdio.h>
int main(){
    char s1[100],s2[100];
    scanf("%s %s",s1,s2);
    int k,l1,l2,flag=1;
    scanf("%d",&k);
    for (l1 = 0; s1[l1]!='\0'; l1++);
    for (l2 = 0; s2[l2] !='\0'; l2++);
    if(k%2==0){
        for(int i=l1-1,j=l2-1;i>k/2;i--){
            s1[i]=s2[j--];
        }
    }
    else{
        if(l1==l2 || l1>l2){
           for(int i=l1-1,j=l2-1;i>(k/2)+1;i--){
            s1[i]=s2[i];
        } 
        }
        else{
        s1[l1-1]='\0';
        for (int i = l1-2,j=l2-1; i > (k/2)+1; i--){
            s1[i]=s2[j--];
        }
        }
    }
    for (int i = 0; i < l1; i++)
    {
        if (s1[i]!=s2[i])
        {
            flag=0;
            break;
        }
        
    }
    if (flag==1)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
    

    
    
    
}