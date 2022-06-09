package FirstProject.src;

import java.awt.Color;

import javax.swing.JFrame;
import javax.swing.JLabel;

public class App {
    public static void main(String[] args){
        JFrame frame = new JFrame();
        frame.setVisible(true);
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setSize(500,400);
        frame.setTitle("Hello");
        frame.setResizable(true);
        frame.getContentPane().setBackground(new Color(230,123,155));
        JLabel label = new JLabel();
        label.setText("hello");
        frame.add(label);
    }
}
