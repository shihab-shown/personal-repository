import "./TodoApp.css";
import { BrowserRouter, Routes, Route } from "react-router-dom";
import LoginComponent from "./Login";
import WelcomeComponent from "./Welcome";

export default function TodoApp() {
  return (
    <div className="TodoApp">
      <BrowserRouter>
        <Routes>
          <Route path="/" element={<LoginComponent />}></Route>
          <Route
            path="/welcome/:username"
            element={<WelcomeComponent />}
          ></Route>
          <Route path="*" element={<ErrorComponent />}></Route>
        </Routes>
      </BrowserRouter>
    </div>
  );
}

function ErrorComponent() {
  return (
    <div className="ErrorComponent">
      <h1>We are working really hard!</h1>
      <div>Apologies for the 404. Reach out to our team at ABC-DEF-GHIJ.</div>
    </div>
  );
}
