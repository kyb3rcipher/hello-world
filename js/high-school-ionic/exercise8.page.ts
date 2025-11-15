import { Component, OnInit } from '@angular/core';

@Component({
  selector: 'app-exercise8',
  templateUrl: './exercise8.page.html',
  styleUrls: ['./exercise8.page.scss'],
  standalone: false,
})
export class Exercise8Page implements OnInit {

  constructor() { }
  ngOnInit() { }

  img:string = '/assets/star.png';
  url:string = '';

  data = [
    {
      name: 'Classroom',
      color: 'warning',
      selected: false,
    },
    {
      name: 'Google',
      color: 'success',
      selected: false,
    },
    {
      name: 'Facebook',
      color: 'tertiary',
      selected: false,
    }
  ];

  checkbox(link:string) {
    // Deselect all checkboxes
    this.data.forEach(check => check.selected = false);
    
    const selectedCheck = this.data.find(check => check.name === link);
    if (selectedCheck) {
      selectedCheck.selected = true;
      
      switch (link) {
        case 'Classroom':
          this.img = '/../assets/exercise7/classroom.png';
          this.url = 'https://classroom.google.com/h';
          break;

        case 'Google':
          this.img = '/../assets/exercise7/google.png';
          this.url = 'https://www.google.com';
          break;

        case 'Facebook':
          this.img = '/../assets/exercise7/facebook.png';
          this.url = 'https://www.facebook.com';
          break;
      }
    }
  }
}
