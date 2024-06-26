document.addEventListener('DOMContentLoaded', function() {
    const passwordContainers = document.querySelectorAll('.password-container');

    passwordContainers.forEach(function(container) {
        const togglePassword = container.querySelector('.toggle-password');
        const passwordInput = container.querySelector('input[type="password"]');

        togglePassword.addEventListener('click', function() {
            const type = passwordInput.getAttribute('type') === 'password' ? 'text' : 'password';
            passwordInput.setAttribute('type', type);
            this.classList.toggle('fa-eye-slash');
            this.classList.toggle('fa-eye');
        });
    });
});