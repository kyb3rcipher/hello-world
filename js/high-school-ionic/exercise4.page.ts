import { Component, OnInit } from '@angular/core';

@Component({
  selector: 'app-exercise4',
  templateUrl: './exercise4.page.html',
  styleUrls: ['./exercise4.page.scss'],
  standalone: false,
})
export class Exercise4Page implements OnInit {

  constructor() { }

  ngOnInit() {
  }

  number: number = 1;
  result: number[] = [];
  reverse: boolean = false;

  calculateTable() {
    this.result = [];

    if (this.reverse) {
      for (let i = 10; i >= 1; i--) {
        this.result.push(this.number * i);
      }
    } else {
      for (let i = 1; i <= 10; i++) {
        this.result.push(this.number * i);
      }
    }
  }
}
