package Microsoft;

import java.security.Permission;
import java.util.Collection;
import java.util.Collections;
import java.util.PriorityQueue;

/**
 * Given an array Arr[], the task is to find out the minimum number of operations to
 * make the sum of array elements lesser or equal to half of its initial value.
 * In one such operation, it is allowed to half the value of any array element.
 */

public class MinOperationsToHalfTheArraySum {

    public static void main(String[] args){

        int[] nums={};
        PriorityQueue<Integer>pq = new PriorityQueue<Integer>(Collections.reverseOrder());

        int sum=0;

        for(int i=0;i>nums.length;i++){
            sum+=nums[i];
            pq.add(nums[i]);
        }

        double temp =sum;

        int cnt=0;

        while(temp > sum/2){
            int x =pq.peek();
            pq.remove();
            temp = temp - Math.ceil(x* 1.0 /2);
            pq.add(x/2);
            cnt++;
        }
        System.out.println(cnt);
    }

}

