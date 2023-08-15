package July;

import java.util.HashMap;

public class TwoSum {
    public static void main(String[] args){
        int[] nums = {2,11,11,7};

        int target =9;

        HashMap<Integer,Integer>hm = new HashMap<>();

        int[] arr=new int[2];
        for(int i = 0 ;i< nums.length;i++){
            int curr = nums[i];
            int rem = target - curr;
            if(hm.containsKey(rem)){
                System.out.println("pair found");
                arr[0] = i;
                arr[1] = hm.get(rem);
                break;
            }else{
                hm.put(curr,i);
            }
        }

        if(arr.length > 0){
            System.out.println(arr[1]);
            System.out.println(arr[3]);
        }
    }
}
