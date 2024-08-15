const input = document.getElementsByTagName('input')[0];
const button = document.querySelector('button');
const tasksList = document.getElementById('tasks-list');

input.addEventListener('keydown', function (event) {
    if (event.key == 'Enter') {
        addTask();
    }
});
button.addEventListener('click', addTask);

function addTask() {
    if (input.value) {
        // Create new task
        let newTask = document.createElement('li');
        newTask.classList.add('task');

        // Add task text from input
        newTask.innerText = input.value;

        // Add icons
        let icons = document.createElement('div');
        icons.classList.add('icons');
        newTask.appendChild(icons); // Append element div for icons to newTask
        
        let completed = document.createElement('i');
        completed.classList.add('bi', 'bi-check-circle-fill', 'icon-complete');
        completed.addEventListener('click', completeTask);

        let remove = document.createElement('i');
        remove.classList.add('bi', 'bi-trash3-fill', 'icon-remove');
        remove.addEventListener('click', removeTask);

        // Append icons button to icons element
        icons.append(completed, remove);

        // Append newTask to taskList
        tasksList.appendChild(newTask);
    } else {
        alert("First enter a task");
    }
}

function completeTask(event) {
    let task = event.target.parentElement.parentElement;
    task.classList.toggle('completed');
    event.target.classList.toggle('icon-pushed');
}

function removeTask(event) {
    event.target.parentElement.parentElement.remove();
}