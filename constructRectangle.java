class Solution {
    public int[] constructRectangle(int area) {
        int [] arr = {area, 1};
        int l =0; int w=0;
        for(int a=1; a<=Math.pow(area, 0.5); a++){
            int b = area/a;
            if( a*b == area){
                if(Math.abs(a-b) <arr[0]-arr[1]){
                    arr[0] = Math.max(a, b);
                    arr[1] = Math.min(a,b);
                }
                
            }
            
        }
        return arr;
        
    }
}
