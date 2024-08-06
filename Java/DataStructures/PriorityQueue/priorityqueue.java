import java.util.PriorityQueue;

public class priorityqueue {
    public static void main(String[] args) {
        PriorityQueue<Integer> pq = new PriorityQueue<>();
        int array[] = {2, 1, 3, 5, 10};
        for (int i = 0; i < array.length; i++) {
            pq.add(array[i]);
        }
        //System.out.println(pq.peek()); // prints the minimum element
        //pq.remove(); // removes the minimum element
        while(!pq.isEmpty()) {
            System.out.println(pq.poll()); // prints the remaining elements
        }
    }
}