module app.appc {
    requires javafx.controls;
    requires javafx.fxml;


    opens app.appc to javafx.fxml;
    exports app.appc;
}