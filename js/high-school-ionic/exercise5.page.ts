import { Component, OnInit } from '@angular/core';

@Component({
  selector: 'app-exercise5',
  templateUrl: './exercise5.page.html',
  styleUrls: ['./exercise5.page.scss'],
  standalone: false,
})
export class Exercise5Page implements OnInit {

  constructor() { }

  ngOnInit() {
  }

  number:number = 0;
  factorial:string = '';
  calculationSteps:string = ''; // To display the calculation steps (e.g., 5 x 4 x 3 x 2 x 1)

  calculateFactorial() {
    if (this.number === 0 || this.number === 1) {
      this.factorial = '1'; // Factorial of 0 or 1 is 1
      this.calculationSteps = '1'; // Just display '1'
      return;
    }

    let result = 1;
    let steps:string[] = [];

    // Calculate factorial and build the steps string
    for (let i = this.number; i >= 1; i--) {
      result *= i;
      steps.push(i.toString());
    }

    this.factorial = result.toString();
    this.calculationSteps = steps.join(' x ');
  }
}
