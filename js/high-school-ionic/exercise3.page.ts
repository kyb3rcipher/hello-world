import { Component, OnInit } from '@angular/core';

@Component({
  selector: 'app-exercise3',
  templateUrl: './exercise3.page.html',
  styleUrls: ['./exercise3.page.scss'],
  standalone: false,
})
export class Exercise3Page implements OnInit {
  constructor() { }

  ngOnInit() {
  }

  num1:number | null = null;
  num2:number | null = null;
  result:string | null = null;
  operation:string = 'sum'; // Default to 'sum'

  calculate() {
    switch (this.operation) {
      case 'sum':
        this.result = `${this.num1} + ${this.num2} = ${(this.num1 || 0) + (this.num2 || 0)}` ;
        break;
      case 'subtract':
        this.result = `${this.num1} - ${this.num2} = ${(this.num1 || 0) - (this.num2 || 0)}`;
        break;
      case 'multiply':
        this.result = `${this.num1} * ${this.num2} = ${(this.num1 || 0) * (this.num2 || 0)}`;
        break;
      case 'divide':
        if (this.num2 === 0) {
          this.result = null; // Cannot divide by 0
        } else {
          this.result = `${this.num1} / ${this.num2} = ${(this.num1 || 0) / (this.num2 || 0)}`;
        }
        break;
      default:
        this.result = null;
    }
  }
}
