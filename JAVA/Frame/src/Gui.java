import javax.swing.*;
import java.awt.event.*;

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

                textField1.setText(Generate.passGen());
            }
        });
    }
}
