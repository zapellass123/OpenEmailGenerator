class Solution
{
    static int majorityElement(int a[], int size)
    {
        // your code here
        if(size==1)
        return a[0];
        Map<Integer,Integer> m=new HashMap<Integer,Integer>();
    
    for(int i=0;i<size;i++){
        int k=a[i];
        if(m.containsKey(k))
        {
            int f=m.get(k);
            f++;
            if(f>size/2)
            {
                return k;
            }
            m.put(k,f);
        }
        else{
            m.put(k,1);
        }
    }
    // int max=0,maxelement=0;
    // for(int i=0;i<size;i++)
    // {
    //     int k=a[i];
    //     if(m.get(k)>max){
    //     max=m.get(k);
    //     maxelement=a[i];
    //     }
    // }
    // if(max>size/2)
    // return maxelement;
    return -1;
    }
}
