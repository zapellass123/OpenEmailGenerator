import java.util.Stack;

public class BalancedParentheses {
  
    static boolean isBalanced(String input) {
      
        Stack<Character> s = new Stack<>();
      
        for (int i = 0; i < input.length(); i++) {
            char ch = input.charAt(i);
            if (ch == '(' || ch == '[' || ch == '{') {
                s.push(ch);
            } else {
                if (s.isEmpty())
                    return false;

                char topCharacter = s.pop();

                switch (ch) {
                    case ')':
                        if (topCharacter == '[' || topCharacter == '{') return false;
                        break;
                    case ']':
                        if (topCharacter == '(' || topCharacter == '{') return false;
                        break;
                    case '}':
                        if (topCharacter == '(' || topCharacter == '[') return false;
                        break;
                }
            }
        }
        return s.isEmpty();
    }

    public static void main(String[] args) {
        String str = "([{}])";
        if (isBalanced(str)) {
            System.out.println("Input consists of Balanced Parentheses");
        } else {
            System.out.println("Input contains Unbalanced Parentheses");
        }
    }
}
