import javax.swing.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public class Calculator extends JFrame {

    private JTextField textField1;
    private JButton button1;
    private JButton a8Button;
    private JButton a9Button;
    private JButton button4;
    private JButton a6Button;
    private JButton button6;
    private JButton a5Button;
    private JButton a4Button;
    private JButton a1Button;
    private JButton button10;
    private JButton a3Button;
    private JButton a2Button;
    private JButton button13;
    private JButton button14;
    private JButton a0Button;
    private JButton ansButton;
    private JPanel mainPanel;
    private JButton clearButton;

    public Calculator(){
        setContentPane(mainPanel);
        setTitle("Welcome");
        setVisible(true);
        setDefaultCloseOperation(EXIT_ON_CLOSE);
        setSize(350,400);
        a1Button.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                textField1.setText(""+textField1.getText()+1);
            }
        });
        a2Button.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                textField1.setText(""+textField1.getText()+2);
            }
        });
        a3Button.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                textField1.setText(""+textField1.getText()+3);
            }
        });
        a4Button.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                textField1.setText(""+textField1.getText()+4);
            }

        });
        a5Button.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                textField1.setText(""+textField1.getText()+5);
            }
        });
        a6Button.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                textField1.setText(""+textField1.getText()+6);
            }
        });
        button1.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                textField1.setText(""+textField1.getText()+7);
            }
        });
        a8Button.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                textField1.setText(""+textField1.getText()+8);
            }
        });
        a9Button.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                textField1.setText(""+textField1.getText()+9);
            }
        });
        a0Button.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                textField1.setText(""+textField1.getText()+0);
            }
        });
        button14.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                textField1.setText(""+textField1.getText()+".");
            }
        });
        ansButton.addActionListener(new ActionListener() {
            @Override //ANS
            public void actionPerformed(ActionEvent e) {

            }
        });
        button13.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                textField1.setText(""+textField1.getText()+"/");
            }
        });
        button10.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                textField1.setText(""+textField1.getText()+"*");
            }
        });
        button6.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                textField1.setText(""+textField1.getText()+"-");
            }
        });
        button4.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                textField1.setText(""+textField1.getText()+"+");
            }
        });
        clearButton.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                textField1.setText("");
            }
        });
    }

    public static void main(String[] args) {
        Calculator frame = new Calculator();

    }
}
