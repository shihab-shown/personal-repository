import javax.swing.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public class Gui extends JFrame {
    private JPanel mainPanel;
    private JTextField textField1;
    private JButton generateButton;


    public Gui(){
        setContentPane(mainPanel);
        setTitle("Welcome");
        setVisible(true);
        setDefaultCloseOperation(EXIT_ON_CLOSE);
        setSize(450,300);
        generateButton.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                StringBuilder str = new StringBuilder();
                for (int i = 0; i<12; i++) {
                    int rand = (int)(1+Math.random()*(4-1+1));
                    switch (rand) {
                        case 1 -> {
                            char lowCharacter = (char) ('a' + Math.random() * ('z' - 'a' + 1));
                            str.append(lowCharacter);
                        }
                        case 2 -> {
                            int number = (int) (Math.random() * 10);
                            str.append(number);
                        }
                        case 3 -> {
                            char specialCharacter = (char) ('!' + Math.random() * ('/' - '!' + 1));
                            str.append(specialCharacter);
                        }
                        case 4 -> {
                            char upCharacter = (char) ('A' + Math.random() * ('Z' - 'A' + 1));
                            str.append(upCharacter);
                        }
                    }
                }
                textField1.setText(str.toString());
            }
        });
    }

    public static void main(String[] args) {
        Gui frame = new Gui();
        //frame.generateButton.s
        //frame.textField1.setText(s);
        String s = "Hello";

    }
}
