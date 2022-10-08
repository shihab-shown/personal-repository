import javax.swing.*;

public class Main extends JFrame {
    private JButton button1;
    private JPanel mainPanel;

    public Main(){
        setContentPane(mainPanel);
        setTitle("Welcome");
        setSize(500,500);
        setDefaultCloseOperation(WindowConstants.EXIT_ON_CLOSE);
        setVisible(true);
    }
    public static void main(String[] args) {
        //Main mainframe = new Main();
        System.out.println("Hello World");int x1 = 4, x2 = 13, y1 = 7, y2 = 21;
        int result = Math.abs(x1-x2) + Math.abs(y1-y2);
        System.out.println("The Manhattan Distance is: "+result);
        String name;
    }
}
