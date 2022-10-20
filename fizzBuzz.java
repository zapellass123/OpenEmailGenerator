class Solution {
    public List<String> fizzBuzz(int n) {
        List <String>   arr = new ArrayList<>();
        arr.add("1");
        if(n == 1) return arr;
        for(int a=1;a<n; a++){
            if(((a+1)%3 ==0) && ((a+1)%5 == 0)) arr.add("FizzBuzz");
            else if((a+1)%3 ==0) arr.add("Fizz");
            else if((a+1)%5 == 0) arr.add("Buzz");
             else { String s=Integer.toString(a+1); arr.add(s); }
               }
    return arr;
    }
}
