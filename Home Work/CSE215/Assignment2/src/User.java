public abstract class User {
    private String email;
    private String password;
    private String name;
    private String role;

    public User(String email, String password, String name, String role) {
        this.email = email;
        this.password = password;
        this.name = name;
        this.role = role;
    }

    public String getEmail() {
        return email;
    }

    public String getPassword() {
        return password;
    }

    public String getName() {
        return name;
    }

    public String getRole() {
        return role;
    }

    public boolean login(String email, String password) {
        return this.email.equals(email) && this.password.equals(password);
    }
    public void logout() {
        System.out.println("Logging out...");
    }

    public abstract void handleActions();
}
