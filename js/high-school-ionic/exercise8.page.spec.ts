import { ComponentFixture, TestBed } from '@angular/core/testing';
import { Exercise8Page } from './exercise8.page';

describe('Exercise8Page', () => {
  let component: Exercise8Page;
  let fixture: ComponentFixture<Exercise8Page>;

  beforeEach(() => {
    fixture = TestBed.createComponent(Exercise8Page);
    component = fixture.componentInstance;
    fixture.detectChanges();
  });

  it('should create', () => {
    expect(component).toBeTruthy();
  });
});
