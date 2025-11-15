setTimeout(function() {
    const urlParams = new URLSearchParams(window.location.search);
    const alertParam = urlParams.get('alert');

    switch(alertParam) {
        case 'login_failed':
            alert("Login failed user or password incorrect");
            break;
        case 'password_changed':
            alert("Password changed");
            break;
        case 'password_too_short':
            alert("Password must be at least 10 characters!");
            break;
        case 'password_not_changed':
            alert("Password not changed, error in user or email");
            break;
        case 'username_changed':
            alert("Username changed");
            break;
        case 'username_not_changed':
            alert("ERROR: Username not changed");
            break;
        case 'email_changed':
            alert("Email changed");
            break;
        case 'email_not_changed':
            alert("ERROR: Email not changed");
            break;
        case 'incorrect_current_password':
            alert("ERROR: The current password is incorrect")
            break;
        case 'register_success':
            alert("Success Register");
            break;
        case 'register_fail':
            alert("Register failed!!!");
            break;
    }    
}, 100);