import java.util.Scanner;
import java.util.Stack;

public class Main{
    public static void main(String[] args){
        Scanner obj = new Scanner(System.in);
        Stack<String> coffeeStack = new Stack<>();

        System.out.print("Number of items to add to the stack: ");
        int counter = obj.nextInt(); // Number of items user wants to add

        obj.nextLine(); // Consume newline left-over

        for(int i = 0; i < counter; i++){
            // (i + 1) adjusts i to be based on 1 instead of based on 0.
            System.out.print("Enter item " + (i + 1) + ": ");
            String input = obj.nextLine();
            coffeeStack.push(input);
        }
        
        System.out.println("Total Size of Stack: " + coffeeStack.size());
        System.out.println("Items in Stack: " + coffeeStack);
        System.out.println("pop item: " + "'" + coffeeStack.pop() + "'");
        System.out.println("peek item: " + "'" + coffeeStack.peek() + "'");
    }
}
