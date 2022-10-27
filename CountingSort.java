//Counting sort in java

import java.util.*;

public class CountingSort
{
	public static void main(String [] args)
	{
		int [] arr={0,3,2,3,3,0,5,2,3};
		int n=arr.length;
		int min=arr[0],max=arr[0],range=0;
		for(int i=0;i<n;i++)
		{
			if(arr[i]<min)
			{
				min=arr[i];
			}
			if(arr[i]>max)
			{
				max=arr[i];
			}
		}
		range=(max-min)+1;
		int [] brr=new int[range];
		for(int i=0;i<brr.length;i++)
		{
			brr[i]=0;
		}

		for(int i=0;i<arr.length;i++)
		{
			brr[arr[i]]=brr[arr[i]]+1;
		}
		int [] crr=new int[range];
		crr[0]=brr[0];
		for(int i=1;i<brr.length;i++)
		{
			crr[i]=brr[i]+crr[i-1];
		}
		int drr[]=new int[arr.length];
		for(int i = arr.length - 1; i >= 0; i--)
		{
			drr[crr[arr[i]]-1]=arr[i];
			crr[arr[i]]--;
		}
		System.out.println(Arrays.toString(drr));
	}
}
