//Code For Trapping Rain Water

int max(int a, int b)
{
    if(a>b)
        return a;
    else
        return b;
}

int min(int a, int b)
{
    if(a<b)
        return a;
    else
        return b;
}
 
 int trap(int* height, int heightSize)
 {
     int i;
     int* left=(int*)malloc(sizeof(int)*heightSize);
     int* right=(int*)malloc(sizeof(int)*heightSize);
     
     left[0]=height[0];
     for(i=1; i<heightSize; i++)
     {
         left[i]=max(left[i-1],height[i]);
     }
     
     right[heightSize-1]=height[heightSize-1];
     for(i=heightSize-2; i>=0; i--)
     {
         right[i]=max(right[i+1],height[i]);
     }
     int val,sum=0;
     for(i=1; i<heightSize-1; i++)
     {
         val=min(left[i],right[i]);
         if(val>height[i])
         {
             sum+=val-height[i];
         }
     }
     return sum;
     
 }
