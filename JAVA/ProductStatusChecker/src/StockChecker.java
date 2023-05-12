import java.awt.*;
import java.awt.event.*;
import javax.swing.*;
import org.jsoup.*;
import org.jsoup.nodes.*;

public class StockChecker extends JFrame {
    private JLabel urlLabel;
    private JTextField urlField;
    private JButton checkButton;
    private JLabel statusLabel;

    public StockChecker() {
        // Set up the main window
        super("Product Stock Checker");
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        setSize(400, 200);
        setLocationRelativeTo(null);

        // Set up the URL input field and label
        urlLabel = new JLabel("Product Page URL:");
        urlField = new JTextField(50);
        JPanel urlPanel = new JPanel(new FlowLayout());
        urlPanel.add(urlLabel);
        urlPanel.add(urlField);

        // Set up the check button
        checkButton = new JButton("Check Status");
        checkButton.addActionListener(new ActionListener() {
            public void actionPerformed(ActionEvent e) {
                // Get the URL from the input field
                String url = urlField.getText();

                // Check the product status
                try {
                    Document doc = Jsoup.connect(url).get();
                    Element statusElement = doc.select("tr:contains(Status) td.product-info-data").first();
                    String status = statusElement.text();
                    statusLabel.setText("Status: " + status);
                } catch (Exception ex) {
                    statusLabel.setText("Error: " + ex.getMessage());
                }
            }
        });

        // Set up the status label
        statusLabel = new JLabel("Enter a product page URL and click Check Status.");
        JPanel statusPanel = new JPanel(new FlowLayout());
        statusPanel.add(statusLabel);

        // Add the components to the main window
        JPanel mainPanel = new JPanel(new GridLayout(3, 1));
        mainPanel.add(urlPanel);
        mainPanel.add(checkButton);
        mainPanel.add(statusPanel);
        add(mainPanel);

        // Show the window
        setVisible(true);
    }

    public static void main(String[] args) {
        // Create and show the GUI
        new StockChecker();
    }
}
