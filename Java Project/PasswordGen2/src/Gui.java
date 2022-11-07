import javax.swing.*;
import javax.swing.border.Border;
import javax.swing.event.ChangeEvent;
import javax.swing.event.ChangeListener;
import java.awt.*;
import java.awt.datatransfer.Clipboard;
import java.awt.datatransfer.ClipboardOwner;
import java.awt.datatransfer.StringSelection;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public class Gui extends JFrame {

    JPanel mainPanel = new JPanel();
    JPanel textPanel = new JPanel();
    JTextField textField = new JTextField();
    JLabel label = new JLabel();
    JButton genButton = new JButton();
    JButton copyButton = new JButton();
    JSlider slider = new JSlider(0,200,120);

    Border border = BorderFactory.createLineBorder(Color.red,3);
    public Gui(){
        this.setContentPane(this.mainPanel);
        this.setSize(600,200);
        this.setTitle("Password Generator");

        this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        //this.label.setText("Hello World");
        this.label.setVerticalAlignment(JLabel.TOP);

        this.textField.setPreferredSize(new Dimension(400,40));
        this.textPanel.setBorder(border);
        this.textField.setBorder(border);


        this.textField.setText("");
        this.genButton.setText("Generate");
        this.genButton.addActionListener(e -> {
            Gui.this.textField.setText("");
            Gui.this.textField.setText(Generator.passGen());
        });

        this.copyButton.setText("Copy");
        this.copyButton.addActionListener(e -> {
            StringSelection stringSelection = new StringSelection(Gui.this.textField.getText());
            Clipboard clipboard = Toolkit.getDefaultToolkit().getSystemClipboard();
            clipboard.setContents(stringSelection, null);
        });

        this.slider.setPaintTrack(true);
        this.slider.setPaintTicks(true);
        this.slider.setPaintLabels(true);
        this.slider.setMajorTickSpacing(50);
        this.slider.setMinorTickSpacing(5);
        this.slider.setValue(154);
        //this.slider.addChangeListener(e -> Gui.this.label.setText(""+slider.getValue()));


        textPanel.add(textField);
        textPanel.add(genButton);
        textPanel.add(copyButton);
        textPanel.add(slider);
        this.add(textPanel);

        this.add(label);
        //this.add(genButton);

        this.setVisible(true);
    }

}
