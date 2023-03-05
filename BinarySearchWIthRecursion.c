#include <stdio.h>

void BinarySearch(int arr[],int num,int first,int last){
   
   int mid;

   if(first > last){
       
        printf("Cannot Find The Number");
        
   } else {
       
      
      mid = (first + last)/2;
    
      
      if(arr[mid]==num){
          
            printf("Element Is At The Position of : %d ",mid+1);
            exit(0);
            
        }else if(arr[mid] > num){
            


            BinarySearch(arr, num, first, mid-1);
        
        }else{
            
            BinarySearch(arr, num, mid+1, last);
        }   
    }  
}


void main(){

   int arr[50],beg,mid,end,n,num;

   printf("Enter The Size Of The  Array: ");
   scanf("%d",&n);

   

   for(i=0;i<n;i++)
   {   
       printf("Enter The Values of [%d] : ",i+1);
       scanf("%d",&arr[i]);
   }   


   beg=0;
   end=n-1;

   printf("Enter The Value To Search Using Binary Search: ");
   scanf("%d",&num);

   BinarySearch(arr,num,beg,end);

}


