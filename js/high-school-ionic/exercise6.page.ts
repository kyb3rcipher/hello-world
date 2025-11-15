import { Component, OnInit } from '@angular/core';

@Component({
  selector: 'app-exercise6',
  templateUrl: './exercise6.page.html',
  styleUrls: ['./exercise6.page.scss'],
  standalone: false,
})
export class Exercise6Page implements OnInit {

  constructor() { }

  ngOnInit() {
  }

  public alertButtons = [
    {
      text: 'Cancel',
      role: 'cancel',
      handler: () => {
        console.log('Alert Canceled');
      },
    },
    {
      text: 'OK',
      role: 'confirm',
      handler: () => {
        console.log('Alert OK');
      },
    },
  ];
}
