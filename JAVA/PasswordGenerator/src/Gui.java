import javax.swing.*;
import java.awt.event.*;
import java.awt.datatransfer.StringSelection;
import java.awt.Toolkit;
import java.awt.datatransfer.Clipboard;

public class Gui extends JFrame {
    private JPanel mainPanel;
    private JTextField textField1;
    private JButton generateButton;
    private JButton copyButton;

    public Gui(){
        setContentPane(mainPanel);
        setTitle("Welcome");
        setVisible(true);
        setDefaultCloseOperation(EXIT_ON_CLOSE);
        setSize(500,100);
        generateButton.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                textField1.setText("");
                textField1.setText(Generate.passGen());
            }
        });
        textField1.setBounds(50,50, 60, 40);
        copyButton.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                StringSelection stringSelection = new StringSelection(textField1.getText());
                Clipboard clipboard = Toolkit.getDefaultToolkit().getSystemClipboard();
                clipboard.setContents(stringSelection, null);
            }
        });
    }
}
