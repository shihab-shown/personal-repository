package app.appc;

import javafx.fxml.FXML;
import javafx.scene.control.Label;

public class Scene2Controller {
    @FXML
    Label l1;

    public void setL1(String s) {
        l1.setText("Mr. "+s);
    }
}
