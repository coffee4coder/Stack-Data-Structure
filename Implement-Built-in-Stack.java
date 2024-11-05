import java.util.Stack;

public class Main{
    public static void main(String[] args){
        Stack<String> coffeeStack = new Stack<>();
        
        coffeeStack.push("GTA V");
        coffeeStack.push("Cyberpunk 2077");
        coffeeStack.push("softy alto");
        
        System.out.println("Total Size of Stack: " + coffeeStack.size());
        System.out.println("Items in Stack: " + coffeeStack);
        System.out.println("pop item: " + "'" + coffeeStack.pop() + "'");
        System.out.println("peek item: " + "'" + coffeeStack.peek() + "'");
    }
}