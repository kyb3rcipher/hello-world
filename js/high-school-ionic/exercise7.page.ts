import { Component, OnInit } from '@angular/core';

@Component({
  selector: 'app-exercise7',
  templateUrl: './exercise7.page.html',
  styleUrls: ['./exercise7.page.scss'],
  standalone: false,
})
export class Exercise7Page implements OnInit {
  constructor() { }
  ngOnInit() { }

  img:string = '/assets/star.png';
  url:string = '';
  
  data = [
    {
      name: 'Classroom',
      color: 'warning',
      textColor: 'orange',
      selected: false,
    },
    {
      name: 'Google',
      color: 'success',
      textColor: 'green',
      selected: false,
    },
    {
      name: 'Facebook',
      color: 'tertiary',
      textColor: 'blue',
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