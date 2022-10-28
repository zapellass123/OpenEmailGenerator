import java.util.*;

public class TopViewOfBinaryTree {

/* This program aims to find the top view of binary tree and prints them from left to right.
       1
     /    \
   2       3
  /  \    /  \
 4    5  6    7

 TopMost nodes are: 1,2,4,3,7
Top view will be: 4 2 1 3 7
*/

    static class Node {
        int data;
        Node left, right;

        Node(int item) {
            data = item;
            left = right = null;
        }
    }

    static void topView(Node root) {
        class NodeAndLevel {
            final int level;
            final Node node;

            NodeAndLevel(Node node, int level) {
                this.level = level;
                this.node = node;
            }
        }

        Queue<NodeAndLevel> nodeAndLevelQueue = new LinkedList<>();
        Map<Integer, Node> map = new TreeMap<>();
        nodeAndLevelQueue.add(new NodeAndLevel(root, 0));

        while (!nodeAndLevelQueue.isEmpty()) {

            NodeAndLevel temp = nodeAndLevelQueue.poll();

            if (!map.containsKey(temp.level)) {
                map.put(temp.level, temp.node);
            }
            if (temp.node.left != null) {
                nodeAndLevelQueue.add(new NodeAndLevel(temp.node.left, temp.level - 1));
            }
            if (temp.node.right != null) {
                nodeAndLevelQueue.add(new NodeAndLevel(temp.node.right, temp.level + 1));
            }
        }

        for (Node node : map.values()) {
            System.out.println(node.data);
        }

    }

    public static void main(String[] args) {
    /* Constructing the following tree
              1
            /   \
           /     \
          2       3
         /      /   \
        /      /     \
       4      5       6
             / \
            /   \
           7     8

    */
        Node root = new Node(1);
        root.left = new Node(2);
        root.right = new Node(3);
        root.left.left = new Node(4);
        root.right.left = new Node(5);
        root.right.right = new Node(6);
        root.right.left.left = new Node(7);
        root.right.left.right = new Node(8);

        topView(root);
    }
}

