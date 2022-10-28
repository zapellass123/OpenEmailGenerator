import java.util.*;

/*

 This program aims to find the bottom view of a binary tree.A node is included in bottom view if it can be seen when we look at the tree from bottom.
 If there are multiple bottom-most nodes for a horizontal distance from root, then print the later one in level traversal.
 For example, in the below diagram, 3 and 4 are both the bottommost nodes at horizontal distance 0, we need to print 4.

                      20
                    /    \
                  8        22
                /   \     /   \
              5      3   4     25
                    /    \
                  10      14

For the above tree the output should be 5 10 4 14 25.

 */

public class BottomViewOfBinaryTree {
  
    static class Node {
        int data;
        Node left;
        Node right;

        Node(int item) {
            data = item;
            left = right = null;
        }
    }

    static void bottomView(Node root) {
  
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
          map.put(temp.level, temp.node);

            if (temp.node.left != null) {
                nodeAndLevelQueue.add(new NodeAndLevel(temp.node.left, temp.level - 1));// set the level as -1 from that of parent
            }
            if (temp.node.right != null) {
                nodeAndLevelQueue.add(new NodeAndLevel(temp.node.right, temp.level + 1));// set the level as +1 from that of parent
            }
        }
      
        for (Node node : map.values()) {
            System.out.println((node.data));
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
        bottomView(root);
    }
}
