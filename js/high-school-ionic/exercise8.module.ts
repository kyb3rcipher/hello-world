import { NgModule } from '@angular/core';
import { CommonModule } from '@angular/common';
import { FormsModule } from '@angular/forms';

import { IonicModule } from '@ionic/angular';

import { Exercise8PageRoutingModule } from './exercise8-routing.module';

import { Exercise8Page } from './exercise8.page';

@NgModule({
  imports: [
    CommonModule,
    FormsModule,
    IonicModule,
    Exercise8PageRoutingModule
  ],
  declarations: [Exercise8Page]
})
export class Exercise8PageModule {}
