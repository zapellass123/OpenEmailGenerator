//sqaure till when the output is 1 if it comes under repetion of loop retur false;


//square always will be btw 1 to 89 if 89 comes then repetion
// will be start

 int sqsum(int num){
        int sum=0;
        while(num>0){
            sum+=(num%10)*(num%10);
            num=num/10;
        }
        return sum;
    }
    bool isHappy(int n) {
        int num=n;
        while(true){
if(num==1)return true;
if(num==89)return false;
        num=sqsum(num);
        }
    }
