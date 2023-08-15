package Microsoft;

public class RemoveDigitToMaximiseResult {

    // solved
    public static void main(String[] args){
        String number = "123";
        String ans="";
        char digit='3';
        for(int i=0;i< number.length();i++){
            if(number.charAt(i) == digit){
                String temp = number.substring(0,i) + number.substring(i+1);
                if(ans.equals("")){
                    ans = temp;
                }else{
                    if(temp.compareTo(ans) > 0){
                        ans = temp;
                    }
                }
            }
        }
        System.out.printf(ans);
    }
}
