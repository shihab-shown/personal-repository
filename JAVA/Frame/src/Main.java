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
        Main mainframe = new Main();
    }
}
