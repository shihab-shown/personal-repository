package com.example.btms;

import javafx.event.ActionEvent;
import javafx.fxml.FXML;
import javafx.fxml.FXMLLoader;
import javafx.fxml.Initializable;
import javafx.scene.Node;
import javafx.scene.Scene;
import javafx.scene.control.ChoiceBox;
import javafx.scene.control.DatePicker;
import javafx.stage.Stage;

import java.io.IOException;
import java.net.URL;
import java.time.LocalDate;
import java.util.ResourceBundle;

public class IndexPage implements Initializable {

    @FXML
    private ChoiceBox<String> from;
    @FXML
    private ChoiceBox<String> to;
    @FXML
    private DatePicker date;
    String[] strings = {"Dhaka", "Dinajpur","Chittagong"};

    @Override
    public void initialize(URL url, ResourceBundle resourceBundle) {
        from.getItems().addAll(strings);
        to.getItems().addAll(strings);
        from.setOnAction(this::getIndexPage);
        to.setOnAction(this::getIndexPage);
    }


    public void getIndexPage(ActionEvent e){
        //System.out.println("Hello Motherfuckers!!!!!!!!!");
        System.out.println(from.getValue());
        System.out.println(to.getValue());
        LocalDate localDate = date.getValue();
        System.out.println(localDate);
    }
    public void setDate(ActionEvent event){
        LocalDate localDate = date.getValue();
        System.out.println(localDate);
    }
}
