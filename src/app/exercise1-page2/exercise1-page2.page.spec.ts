import { ComponentFixture, TestBed } from '@angular/core/testing';
import { Exercise1Page2Page } from './exercise1-page2.page';

describe('Exercise1Page2Page', () => {
  let component: Exercise1Page2Page;
  let fixture: ComponentFixture<Exercise1Page2Page>;

  beforeEach(() => {
    fixture = TestBed.createComponent(Exercise1Page2Page);
    component = fixture.componentInstance;
    fixture.detectChanges();
  });

  it('should create', () => {
    expect(component).toBeTruthy();
  });
});
