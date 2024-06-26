<script>
    function confirmLogout() {
        if (confirm("Are you sure you want to log out?")) {
            window.location.href = "sql/logout.php";
        }
    }
</script>
<?php
session_start();

// Check if the user is logged
if(isset($_COOKIE['user_id'])) {
    echo '
    <header>
        <div class="text">
            <a href="#">★ KYB3RLogin</a>
        </div>
        <nav>
            <ul>
                <li><a href="/login/">Home</a></li>
                <li><a href="#">Account</a>
                    <ul class="submenu">
                        <li><a href="change_username.php">Change username</a></li>
                        <li><a href="change_email.php">Change email</a></li>
                        <li><a href="change_password.php">Change password</a></li>
                    </ul>
                </li>
                <li><a href="#" onclick="confirmLogout()">Logout</a></li>
            </ul>
        </nav>
    </header>
    ';
} else {
    echo '
    <header>
        <div class="text">
            <a href="#">★ KYB3RLogin</a>
        </div>
        <nav>
            <ul>
                <li><a href="/login/">Home</a></li>
                <li><a href="#">Account</a>
                    <ul class="submenu">
                        <li><a href="login.php">Login</a></li>
                        <li><a href="register.php">Register</a></li>
                    </ul>
                </li>
            </ul>
        </nav>
    </header>';
}
?>