package July;

public class RemoveDuplicatesFromSortedArray {


    public static void main(String[] args){

        int [] arr ={};

        int j=0;

        for(int i=0;i<n-1;i++){
            if(arr[i]!=arr[i+1]){
                arr[j++]=arr[i];
            }
        }
        arr[j++]=arr[arr.length-1];
        for(int i=0;i<j;i++){
            System.out.println(arr[i]);
        }
       // System.out.println(j);
    }
}
