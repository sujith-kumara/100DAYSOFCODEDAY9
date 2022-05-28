#include <stdio.h>   


int arrayleft(int arr[],int n,int d){
    int i,j,first;
    for(i=0;i<d;i++){
        first = arr[0];
        for(j=0;j<n-1;j++){
            arr[j] = arr[j+1];
        }
        arr[j]=first;

    }
    printf("\n");
     printf("Array after left rotation: \n");    
    for(i = 0; i < n; i++){    
        printf("%d ", arr[i]);    
    } 
    return 0;
}
int arrayright(int arr[],int n,int d){
    int i,j,last;
    for(i=0;i<d;i++){
        last = arr[n-1];
        for(j=n-1;j>0;j--){
            arr[j] = arr[j-1];
        }
        arr[0]=last;

    }
    printf("\n");
     printf("Array after left rotation: \n");    
    for(i = 0; i < n; i++){    
        printf("%d ", arr[i]);    
    } 
    return 0;
}
     
int main()    
{    
    //Initialize array   
    int choice,d;  
    int arr[] = {1, 2, 3, 4, 5};     
    //Calculate length of array arr    
    int length = sizeof(arr)/sizeof(arr[0]);    
    //n determine the number of times an array should be rotated  
    printf("Enter the number of rotations required");  
    //int d = 1;    
    scanf("%d",&d);
        
    //Displays original array    
    printf("Original array: \n");    
    for (int i = 0; i < length; i++) {     
        printf("%d ", arr[i]);     
    }      
    /*arrayleft(arr,length,d);
    arrayright(arr,length,d);
    arrayright(arr,length,d);*/
    do
        {
         printf("\nEnter your choice\n");
         printf("\n1.Rightrotation\n2.leftrotation\n3.exit\n");
         scanf("%d",&choice);
         switch(choice)
         {
          case 1:arrayright(arr,length,d);
                 break;
          case 2:arrayleft(arr,length,d);
                 break;
          case 3:break;
          default:printf("invalid choice");
          }
         }
          while(choice!=3);
    

}