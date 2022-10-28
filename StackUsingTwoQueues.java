import java.util.LinkedList;
import java.util.Queue;

/*
This program aims to implement a stack using two queues
 */

public class StackUsingTwoQueues {
    private int size;
    private Queue<Integer> firstQueue = new LinkedList<>();
    private Queue<Integer> secondQueue = new LinkedList<>();

    public StackUsingTwoQueues() {
        size = 0;
    }

    public void push(int item) {
        size++;
        firstQueue.add(item);
    }

    public int pop() {
        if (firstQueue.isEmpty()) return -1;

        while (firstQueue.size() != 1) {
            secondQueue.add(firstQueue.peek());
            firstQueue.poll();
        }
        int ans = firstQueue.poll();
        size--;

        Queue<Integer> q = firstQueue;
        firstQueue = secondQueue;
        secondQueue = q;
        return ans;
    }

    public int top() {
        if (firstQueue.isEmpty()) return -1;

        while (firstQueue.size() != 1) {
            secondQueue.add(firstQueue.peek());
            firstQueue.poll();
        }
        int ans = firstQueue.peek();
        firstQueue.poll();
        secondQueue.add(ans);

        Queue<Integer> q = firstQueue;
        firstQueue = secondQueue;
        secondQueue = q;
        return ans;
    }

   public int size() {
        return size;
    }

    public static void main(String[] args) {
        StackUsingTwoQueues s = new StackUsingTwoQueues();
        s.push(10);
        s.push(20);
        s.push(30);
        s.push(40);
        System.out.println(s.size());
        System.out.println(s.top());
        System.out.println(s.pop());
        System.out.println(s.top());
        System.out.println(s.size());
    }
}

