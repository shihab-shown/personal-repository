package app.appc;

import javafx.event.ActionEvent;
import javafx.fxml.FXML;
import javafx.fxml.FXMLLoader;
import javafx.scene.Node;
import javafx.scene.Scene;
import javafx.scene.control.Label;
import javafx.scene.control.TextField;
import javafx.stage.Stage;

import java.io.IOException;

public class Scene1Controller {


    @FXML
    private TextField t1;

    public Scene1Controller() {
    }

    public void name(ActionEvent e) throws IOException {
        String text = t1.getText();
        FXMLLoader fxmlLoader = new FXMLLoader(this.getClass().getResource("Scene2.fxml"));
        Scene scene = new Scene(fxmlLoader.load());
        Stage stage = (Stage)((Node) e.getSource()).getScene().getWindow();
        stage.setTitle("Hell !");
        stage.setScene(scene);
        Scene2Controller scene2Controller = fxmlLoader.getController();
        scene2Controller.setL1(text);
        stage.show();

    }

}