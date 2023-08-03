package Microsoft;

import java.util.HashMap;

public class CopyListWithRandomPointers {


    public static class ListNode{
        int val = 0;
        ListNode next =null;
        ListNode random =null;

        ListNode(int val){
            this.val = val;
        }
    }

    public static ListNode copyRandomList(ListNode head){
        HashMap<ListNode,ListNode>map=new HashMap<>();
        ListNode curr =head;
        ListNode nHead =new ListNode(-1);
        ListNode prev =nHead;

        while(curr != null){
            prev.next = new ListNode(curr.val);
            map.put(curr,prev.next);
            curr=curr.next;
        }

        nHead =nHead.next;
        curr =head;

      ListNode c1=head;
      ListNode c2 =nHead;

       while(curr!=null){
           if(c1.random!= null)
            c2.random =map.get(c1.random);
           else
               c2.random =null;
            c1=c1.next;
            c2=c2.next;

            curr =curr.next;

       }


       return nHead;

    }

    public static void main(String[]args){


    }

}
